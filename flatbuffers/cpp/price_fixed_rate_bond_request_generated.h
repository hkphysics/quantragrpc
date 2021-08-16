// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PRICEFIXEDRATEBONDREQUEST_QUANTRA_H_
#define FLATBUFFERS_GENERATED_PRICEFIXEDRATEBONDREQUEST_QUANTRA_H_

#include "flatbuffers/flatbuffers.h"

#include "term_structure_generated.h"
#include "enums_generated.h"
#include "schedule_generated.h"
#include "common_generated.h"
#include "index_generated.h"
#include "floating_rate_bond_generated.h"
#include "fixed_rate_bond_generated.h"

namespace quantra {

struct PriceFixedRateBond;
struct PriceFixedRateBondBuilder;

struct PriceFixedRateBondRequest;
struct PriceFixedRateBondRequestBuilder;

struct PriceFixedRateBond FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PriceFixedRateBondBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FIXED_RATE_BOND = 4,
    VT_DISCOUNTING_CURVE = 6,
    VT_YIELD = 8
  };
  const quantra::FixedRateBond *fixed_rate_bond() const {
    return GetPointer<const quantra::FixedRateBond *>(VT_FIXED_RATE_BOND);
  }
  const flatbuffers::String *discounting_curve() const {
    return GetPointer<const flatbuffers::String *>(VT_DISCOUNTING_CURVE);
  }
  const quantra::Yield *yield() const {
    return GetPointer<const quantra::Yield *>(VT_YIELD);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FIXED_RATE_BOND) &&
           verifier.VerifyTable(fixed_rate_bond()) &&
           VerifyOffset(verifier, VT_DISCOUNTING_CURVE) &&
           verifier.VerifyString(discounting_curve()) &&
           VerifyOffset(verifier, VT_YIELD) &&
           verifier.VerifyTable(yield()) &&
           verifier.EndTable();
  }
};

struct PriceFixedRateBondBuilder {
  typedef PriceFixedRateBond Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_fixed_rate_bond(flatbuffers::Offset<quantra::FixedRateBond> fixed_rate_bond) {
    fbb_.AddOffset(PriceFixedRateBond::VT_FIXED_RATE_BOND, fixed_rate_bond);
  }
  void add_discounting_curve(flatbuffers::Offset<flatbuffers::String> discounting_curve) {
    fbb_.AddOffset(PriceFixedRateBond::VT_DISCOUNTING_CURVE, discounting_curve);
  }
  void add_yield(flatbuffers::Offset<quantra::Yield> yield) {
    fbb_.AddOffset(PriceFixedRateBond::VT_YIELD, yield);
  }
  explicit PriceFixedRateBondBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PriceFixedRateBond> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PriceFixedRateBond>(end);
    return o;
  }
};

inline flatbuffers::Offset<PriceFixedRateBond> CreatePriceFixedRateBond(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<quantra::FixedRateBond> fixed_rate_bond = 0,
    flatbuffers::Offset<flatbuffers::String> discounting_curve = 0,
    flatbuffers::Offset<quantra::Yield> yield = 0) {
  PriceFixedRateBondBuilder builder_(_fbb);
  builder_.add_yield(yield);
  builder_.add_discounting_curve(discounting_curve);
  builder_.add_fixed_rate_bond(fixed_rate_bond);
  return builder_.Finish();
}

inline flatbuffers::Offset<PriceFixedRateBond> CreatePriceFixedRateBondDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<quantra::FixedRateBond> fixed_rate_bond = 0,
    const char *discounting_curve = nullptr,
    flatbuffers::Offset<quantra::Yield> yield = 0) {
  auto discounting_curve__ = discounting_curve ? _fbb.CreateString(discounting_curve) : 0;
  return quantra::CreatePriceFixedRateBond(
      _fbb,
      fixed_rate_bond,
      discounting_curve__,
      yield);
}

struct PriceFixedRateBondRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PriceFixedRateBondRequestBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PRICING = 4,
    VT_BONDS = 6
  };
  const quantra::Pricing *pricing() const {
    return GetPointer<const quantra::Pricing *>(VT_PRICING);
  }
  const flatbuffers::Vector<flatbuffers::Offset<quantra::PriceFixedRateBond>> *bonds() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<quantra::PriceFixedRateBond>> *>(VT_BONDS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_PRICING) &&
           verifier.VerifyTable(pricing()) &&
           VerifyOffset(verifier, VT_BONDS) &&
           verifier.VerifyVector(bonds()) &&
           verifier.VerifyVectorOfTables(bonds()) &&
           verifier.EndTable();
  }
};

struct PriceFixedRateBondRequestBuilder {
  typedef PriceFixedRateBondRequest Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pricing(flatbuffers::Offset<quantra::Pricing> pricing) {
    fbb_.AddOffset(PriceFixedRateBondRequest::VT_PRICING, pricing);
  }
  void add_bonds(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<quantra::PriceFixedRateBond>>> bonds) {
    fbb_.AddOffset(PriceFixedRateBondRequest::VT_BONDS, bonds);
  }
  explicit PriceFixedRateBondRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PriceFixedRateBondRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PriceFixedRateBondRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<PriceFixedRateBondRequest> CreatePriceFixedRateBondRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<quantra::Pricing> pricing = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<quantra::PriceFixedRateBond>>> bonds = 0) {
  PriceFixedRateBondRequestBuilder builder_(_fbb);
  builder_.add_bonds(bonds);
  builder_.add_pricing(pricing);
  return builder_.Finish();
}

inline flatbuffers::Offset<PriceFixedRateBondRequest> CreatePriceFixedRateBondRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<quantra::Pricing> pricing = 0,
    const std::vector<flatbuffers::Offset<quantra::PriceFixedRateBond>> *bonds = nullptr) {
  auto bonds__ = bonds ? _fbb.CreateVector<flatbuffers::Offset<quantra::PriceFixedRateBond>>(*bonds) : 0;
  return quantra::CreatePriceFixedRateBondRequest(
      _fbb,
      pricing,
      bonds__);
}

inline const quantra::PriceFixedRateBondRequest *GetPriceFixedRateBondRequest(const void *buf) {
  return flatbuffers::GetRoot<quantra::PriceFixedRateBondRequest>(buf);
}

inline const quantra::PriceFixedRateBondRequest *GetSizePrefixedPriceFixedRateBondRequest(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<quantra::PriceFixedRateBondRequest>(buf);
}

inline bool VerifyPriceFixedRateBondRequestBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<quantra::PriceFixedRateBondRequest>(nullptr);
}

inline bool VerifySizePrefixedPriceFixedRateBondRequestBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<quantra::PriceFixedRateBondRequest>(nullptr);
}

inline void FinishPriceFixedRateBondRequestBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<quantra::PriceFixedRateBondRequest> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedPriceFixedRateBondRequestBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<quantra::PriceFixedRateBondRequest> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace quantra

#endif  // FLATBUFFERS_GENERATED_PRICEFIXEDRATEBONDREQUEST_QUANTRA_H_
