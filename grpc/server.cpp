#include "quantraserver.grpc.fb.h"
#include "quantraserver_generated.h"

#include "fixed_rate_bond_pricing_request.h"
#include "responses_generated.h"

#include <grpcpp/grpcpp.h>

#include <iostream>
#include <memory>
#include <string>

class BondPricingServiceImpl final : public quantra::QuantraServer::Service
{

  virtual grpc::Status BondPricing(
      ::grpc::ServerContext *context,
      const flatbuffers::grpc::Message<PriceFixedRateBond> *request_msg,
      flatbuffers::grpc::Message<NPVResponse> *response_msg) override
  {
    flatbuffers::grpc::MessageBuilder mb_;

    FixedRateBondPricingRequest request;
    float npv = request.request(request_msg->GetRoot());

    auto hello_offset = quantra::CreateNPVResponse(mb_, npv);
    mb_.Finish(hello_offset);

    return grpc::Status::OK;
  }

  flatbuffers::grpc::MessageBuilder mb_;
};

void RunServer()
{
  std::string server_address("0.0.0.0:50051");
  BondPricingServiceImpl service;

  grpc::ServerBuilder builder;

  grpc::ResourceQuota rq;
  rq.SetMaxThreads(1);
  builder.SetResourceQuota(rq);

  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cerr << "Server listening on " << server_address << std::endl;

  server->Wait();
}

int main(int argc, const char *argv[])
{
  RunServer();
  return 0;
}
