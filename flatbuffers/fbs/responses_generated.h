// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RESPONSES_QUANTRA_H_
#define FLATBUFFERS_GENERATED_RESPONSES_QUANTRA_H_

#include "flatbuffers/flatbuffers.h"

namespace quantra {

struct FlowInterest;
struct FlowInterestBuilder;

struct FlowPastInterest;
struct FlowPastInterestBuilder;

struct FlowNotional;
struct FlowNotionalBuilder;

struct FixedRateBondValues;
struct FixedRateBondValuesBuilder;

struct PriceFixedRateBondResponse;
struct PriceFixedRateBondResponseBuilder;

struct NPVResponse;
struct NPVResponseBuilder;

enum FlowType : int8_t {
  FlowType_Interest = 0,
  FlowType_PastInterest = 1,
  FlowType_Notional = 2,
  FlowType_MIN = FlowType_Interest,
  FlowType_MAX = FlowType_Notional
};

inline const FlowType (&EnumValuesFlowType())[3] {
  static const FlowType values[] = {
    FlowType_Interest,
    FlowType_PastInterest,
    FlowType_Notional
  };
  return values;
}

inline const char * const *EnumNamesFlowType() {
  static const char * const names[4] = {
    "Interest",
    "PastInterest",
    "Notional",
    nullptr
  };
  return names;
}

inline const char *EnumNameFlowType(FlowType e) {
  if (flatbuffers::IsOutRange(e, FlowType_Interest, FlowType_Notional)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesFlowType()[index];
}

enum Flow : uint8_t {
  Flow_NONE = 0,
  Flow_FlowInterest = 1,
  Flow_FlowPastInterest = 2,
  Flow_FlowNotional = 3,
  Flow_MIN = Flow_NONE,
  Flow_MAX = Flow_FlowNotional
};

inline const Flow (&EnumValuesFlow())[4] {
  static const Flow values[] = {
    Flow_NONE,
    Flow_FlowInterest,
    Flow_FlowPastInterest,
    Flow_FlowNotional
  };
  return values;
}

inline const char * const *EnumNamesFlow() {
  static const char * const names[5] = {
    "NONE",
    "FlowInterest",
    "FlowPastInterest",
    "FlowNotional",
    nullptr
  };
  return names;
}

inline const char *EnumNameFlow(Flow e) {
  if (flatbuffers::IsOutRange(e, Flow_NONE, Flow_FlowNotional)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesFlow()[index];
}

template<typename T> struct FlowTraits {
  static const Flow enum_value = Flow_NONE;
};

template<> struct FlowTraits<quantra::FlowInterest> {
  static const Flow enum_value = Flow_FlowInterest;
};

template<> struct FlowTraits<quantra::FlowPastInterest> {
  static const Flow enum_value = Flow_FlowPastInterest;
};

template<> struct FlowTraits<quantra::FlowNotional> {
  static const Flow enum_value = Flow_FlowNotional;
};

bool VerifyFlow(flatbuffers::Verifier &verifier, const void *obj, Flow type);
bool VerifyFlowVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct FlowInterest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FlowInterestBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FLOW_TYPE = 4,
    VT_AMOUNT = 6,
    VT_ACCRUAL_START_DATE = 8,
    VT_ACCRUAL_END_DATE = 10,
    VT_DISCOUNT = 12,
    VT_RATE = 14,
    VT_PRICE = 16
  };
  quantra::FlowType flow_type() const {
    return static_cast<quantra::FlowType>(GetField<int8_t>(VT_FLOW_TYPE, 0));
  }
  double amount() const {
    return GetField<double>(VT_AMOUNT, 0.0);
  }
  const flatbuffers::String *accrual_start_date() const {
    return GetPointer<const flatbuffers::String *>(VT_ACCRUAL_START_DATE);
  }
  const flatbuffers::String *accrual_end_date() const {
    return GetPointer<const flatbuffers::String *>(VT_ACCRUAL_END_DATE);
  }
  float discount() const {
    return GetField<float>(VT_DISCOUNT, 0.0f);
  }
  float rate() const {
    return GetField<float>(VT_RATE, 0.0f);
  }
  float price() const {
    return GetField<float>(VT_PRICE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_FLOW_TYPE) &&
           VerifyField<double>(verifier, VT_AMOUNT) &&
           VerifyOffset(verifier, VT_ACCRUAL_START_DATE) &&
           verifier.VerifyString(accrual_start_date()) &&
           VerifyOffset(verifier, VT_ACCRUAL_END_DATE) &&
           verifier.VerifyString(accrual_end_date()) &&
           VerifyField<float>(verifier, VT_DISCOUNT) &&
           VerifyField<float>(verifier, VT_RATE) &&
           VerifyField<float>(verifier, VT_PRICE) &&
           verifier.EndTable();
  }
};

struct FlowInterestBuilder {
  typedef FlowInterest Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_flow_type(quantra::FlowType flow_type) {
    fbb_.AddElement<int8_t>(FlowInterest::VT_FLOW_TYPE, static_cast<int8_t>(flow_type), 0);
  }
  void add_amount(double amount) {
    fbb_.AddElement<double>(FlowInterest::VT_AMOUNT, amount, 0.0);
  }
  void add_accrual_start_date(flatbuffers::Offset<flatbuffers::String> accrual_start_date) {
    fbb_.AddOffset(FlowInterest::VT_ACCRUAL_START_DATE, accrual_start_date);
  }
  void add_accrual_end_date(flatbuffers::Offset<flatbuffers::String> accrual_end_date) {
    fbb_.AddOffset(FlowInterest::VT_ACCRUAL_END_DATE, accrual_end_date);
  }
  void add_discount(float discount) {
    fbb_.AddElement<float>(FlowInterest::VT_DISCOUNT, discount, 0.0f);
  }
  void add_rate(float rate) {
    fbb_.AddElement<float>(FlowInterest::VT_RATE, rate, 0.0f);
  }
  void add_price(float price) {
    fbb_.AddElement<float>(FlowInterest::VT_PRICE, price, 0.0f);
  }
  explicit FlowInterestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<FlowInterest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FlowInterest>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlowInterest> CreateFlowInterest(
    flatbuffers::FlatBufferBuilder &_fbb,
    quantra::FlowType flow_type = quantra::FlowType_Interest,
    double amount = 0.0,
    flatbuffers::Offset<flatbuffers::String> accrual_start_date = 0,
    flatbuffers::Offset<flatbuffers::String> accrual_end_date = 0,
    float discount = 0.0f,
    float rate = 0.0f,
    float price = 0.0f) {
  FlowInterestBuilder builder_(_fbb);
  builder_.add_amount(amount);
  builder_.add_price(price);
  builder_.add_rate(rate);
  builder_.add_discount(discount);
  builder_.add_accrual_end_date(accrual_end_date);
  builder_.add_accrual_start_date(accrual_start_date);
  builder_.add_flow_type(flow_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlowInterest> CreateFlowInterestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    quantra::FlowType flow_type = quantra::FlowType_Interest,
    double amount = 0.0,
    const char *accrual_start_date = nullptr,
    const char *accrual_end_date = nullptr,
    float discount = 0.0f,
    float rate = 0.0f,
    float price = 0.0f) {
  auto accrual_start_date__ = accrual_start_date ? _fbb.CreateString(accrual_start_date) : 0;
  auto accrual_end_date__ = accrual_end_date ? _fbb.CreateString(accrual_end_date) : 0;
  return quantra::CreateFlowInterest(
      _fbb,
      flow_type,
      amount,
      accrual_start_date__,
      accrual_end_date__,
      discount,
      rate,
      price);
}

struct FlowPastInterest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FlowPastInterestBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FLOW_TYPE = 4,
    VT_AMOUNT = 6,
    VT_ACCRUAL_START_DATE = 8,
    VT_ACCRUAL_END_DATE = 10,
    VT_RATE = 12
  };
  quantra::FlowType flow_type() const {
    return static_cast<quantra::FlowType>(GetField<int8_t>(VT_FLOW_TYPE, 0));
  }
  double amount() const {
    return GetField<double>(VT_AMOUNT, 0.0);
  }
  const flatbuffers::String *accrual_start_date() const {
    return GetPointer<const flatbuffers::String *>(VT_ACCRUAL_START_DATE);
  }
  const flatbuffers::String *accrual_end_date() const {
    return GetPointer<const flatbuffers::String *>(VT_ACCRUAL_END_DATE);
  }
  float rate() const {
    return GetField<float>(VT_RATE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_FLOW_TYPE) &&
           VerifyField<double>(verifier, VT_AMOUNT) &&
           VerifyOffset(verifier, VT_ACCRUAL_START_DATE) &&
           verifier.VerifyString(accrual_start_date()) &&
           VerifyOffset(verifier, VT_ACCRUAL_END_DATE) &&
           verifier.VerifyString(accrual_end_date()) &&
           VerifyField<float>(verifier, VT_RATE) &&
           verifier.EndTable();
  }
};

struct FlowPastInterestBuilder {
  typedef FlowPastInterest Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_flow_type(quantra::FlowType flow_type) {
    fbb_.AddElement<int8_t>(FlowPastInterest::VT_FLOW_TYPE, static_cast<int8_t>(flow_type), 0);
  }
  void add_amount(double amount) {
    fbb_.AddElement<double>(FlowPastInterest::VT_AMOUNT, amount, 0.0);
  }
  void add_accrual_start_date(flatbuffers::Offset<flatbuffers::String> accrual_start_date) {
    fbb_.AddOffset(FlowPastInterest::VT_ACCRUAL_START_DATE, accrual_start_date);
  }
  void add_accrual_end_date(flatbuffers::Offset<flatbuffers::String> accrual_end_date) {
    fbb_.AddOffset(FlowPastInterest::VT_ACCRUAL_END_DATE, accrual_end_date);
  }
  void add_rate(float rate) {
    fbb_.AddElement<float>(FlowPastInterest::VT_RATE, rate, 0.0f);
  }
  explicit FlowPastInterestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<FlowPastInterest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FlowPastInterest>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlowPastInterest> CreateFlowPastInterest(
    flatbuffers::FlatBufferBuilder &_fbb,
    quantra::FlowType flow_type = quantra::FlowType_Interest,
    double amount = 0.0,
    flatbuffers::Offset<flatbuffers::String> accrual_start_date = 0,
    flatbuffers::Offset<flatbuffers::String> accrual_end_date = 0,
    float rate = 0.0f) {
  FlowPastInterestBuilder builder_(_fbb);
  builder_.add_amount(amount);
  builder_.add_rate(rate);
  builder_.add_accrual_end_date(accrual_end_date);
  builder_.add_accrual_start_date(accrual_start_date);
  builder_.add_flow_type(flow_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlowPastInterest> CreateFlowPastInterestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    quantra::FlowType flow_type = quantra::FlowType_Interest,
    double amount = 0.0,
    const char *accrual_start_date = nullptr,
    const char *accrual_end_date = nullptr,
    float rate = 0.0f) {
  auto accrual_start_date__ = accrual_start_date ? _fbb.CreateString(accrual_start_date) : 0;
  auto accrual_end_date__ = accrual_end_date ? _fbb.CreateString(accrual_end_date) : 0;
  return quantra::CreateFlowPastInterest(
      _fbb,
      flow_type,
      amount,
      accrual_start_date__,
      accrual_end_date__,
      rate);
}

struct FlowNotional FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FlowNotionalBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FLOW_TYPE = 4,
    VT_DATE = 6,
    VT_AMOUNT = 8,
    VT_DISCOUNT = 10,
    VT_PRICE = 12
  };
  quantra::FlowType flow_type() const {
    return static_cast<quantra::FlowType>(GetField<int8_t>(VT_FLOW_TYPE, 0));
  }
  const flatbuffers::String *date() const {
    return GetPointer<const flatbuffers::String *>(VT_DATE);
  }
  double amount() const {
    return GetField<double>(VT_AMOUNT, 0.0);
  }
  float discount() const {
    return GetField<float>(VT_DISCOUNT, 0.0f);
  }
  float price() const {
    return GetField<float>(VT_PRICE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_FLOW_TYPE) &&
           VerifyOffset(verifier, VT_DATE) &&
           verifier.VerifyString(date()) &&
           VerifyField<double>(verifier, VT_AMOUNT) &&
           VerifyField<float>(verifier, VT_DISCOUNT) &&
           VerifyField<float>(verifier, VT_PRICE) &&
           verifier.EndTable();
  }
};

struct FlowNotionalBuilder {
  typedef FlowNotional Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_flow_type(quantra::FlowType flow_type) {
    fbb_.AddElement<int8_t>(FlowNotional::VT_FLOW_TYPE, static_cast<int8_t>(flow_type), 0);
  }
  void add_date(flatbuffers::Offset<flatbuffers::String> date) {
    fbb_.AddOffset(FlowNotional::VT_DATE, date);
  }
  void add_amount(double amount) {
    fbb_.AddElement<double>(FlowNotional::VT_AMOUNT, amount, 0.0);
  }
  void add_discount(float discount) {
    fbb_.AddElement<float>(FlowNotional::VT_DISCOUNT, discount, 0.0f);
  }
  void add_price(float price) {
    fbb_.AddElement<float>(FlowNotional::VT_PRICE, price, 0.0f);
  }
  explicit FlowNotionalBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<FlowNotional> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FlowNotional>(end);
    return o;
  }
};

inline flatbuffers::Offset<FlowNotional> CreateFlowNotional(
    flatbuffers::FlatBufferBuilder &_fbb,
    quantra::FlowType flow_type = quantra::FlowType_Interest,
    flatbuffers::Offset<flatbuffers::String> date = 0,
    double amount = 0.0,
    float discount = 0.0f,
    float price = 0.0f) {
  FlowNotionalBuilder builder_(_fbb);
  builder_.add_amount(amount);
  builder_.add_price(price);
  builder_.add_discount(discount);
  builder_.add_date(date);
  builder_.add_flow_type(flow_type);
  return builder_.Finish();
}

inline flatbuffers::Offset<FlowNotional> CreateFlowNotionalDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    quantra::FlowType flow_type = quantra::FlowType_Interest,
    const char *date = nullptr,
    double amount = 0.0,
    float discount = 0.0f,
    float price = 0.0f) {
  auto date__ = date ? _fbb.CreateString(date) : 0;
  return quantra::CreateFlowNotional(
      _fbb,
      flow_type,
      date__,
      amount,
      discount,
      price);
}

struct FixedRateBondValues FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FixedRateBondValuesBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NPV = 4,
    VT_CLEAN_PRICE = 6,
    VT_DIRTY_PRICE = 8,
    VT_ACCRUED_AMOUNT = 10,
    VT_YIELD = 12,
    VT_ACCRUED_DAYS = 14,
    VT_MACAULAY_DURATION = 16,
    VT_MODIFIED_DURATION = 18,
    VT_CONVEXITY = 20,
    VT_BPS = 22,
    VT_FLOWS_TYPE = 24,
    VT_FLOWS = 26
  };
  float npv() const {
    return GetField<float>(VT_NPV, 0.0f);
  }
  float clean_price() const {
    return GetField<float>(VT_CLEAN_PRICE, 0.0f);
  }
  float dirty_price() const {
    return GetField<float>(VT_DIRTY_PRICE, 0.0f);
  }
  float accrued_amount() const {
    return GetField<float>(VT_ACCRUED_AMOUNT, 0.0f);
  }
  float yield() const {
    return GetField<float>(VT_YIELD, 0.0f);
  }
  int32_t accrued_days() const {
    return GetField<int32_t>(VT_ACCRUED_DAYS, 0);
  }
  float macaulay_duration() const {
    return GetField<float>(VT_MACAULAY_DURATION, 0.0f);
  }
  float modified_duration() const {
    return GetField<float>(VT_MODIFIED_DURATION, 0.0f);
  }
  float convexity() const {
    return GetField<float>(VT_CONVEXITY, 0.0f);
  }
  float bps() const {
    return GetField<float>(VT_BPS, 0.0f);
  }
  const flatbuffers::Vector<uint8_t> *flows_type() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_FLOWS_TYPE);
  }
  const flatbuffers::Vector<flatbuffers::Offset<void>> *flows() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<void>> *>(VT_FLOWS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_NPV) &&
           VerifyField<float>(verifier, VT_CLEAN_PRICE) &&
           VerifyField<float>(verifier, VT_DIRTY_PRICE) &&
           VerifyField<float>(verifier, VT_ACCRUED_AMOUNT) &&
           VerifyField<float>(verifier, VT_YIELD) &&
           VerifyField<int32_t>(verifier, VT_ACCRUED_DAYS) &&
           VerifyField<float>(verifier, VT_MACAULAY_DURATION) &&
           VerifyField<float>(verifier, VT_MODIFIED_DURATION) &&
           VerifyField<float>(verifier, VT_CONVEXITY) &&
           VerifyField<float>(verifier, VT_BPS) &&
           VerifyOffset(verifier, VT_FLOWS_TYPE) &&
           verifier.VerifyVector(flows_type()) &&
           VerifyOffset(verifier, VT_FLOWS) &&
           verifier.VerifyVector(flows()) &&
           VerifyFlowVector(verifier, flows(), flows_type()) &&
           verifier.EndTable();
  }
};

struct FixedRateBondValuesBuilder {
  typedef FixedRateBondValues Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_npv(float npv) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_NPV, npv, 0.0f);
  }
  void add_clean_price(float clean_price) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_CLEAN_PRICE, clean_price, 0.0f);
  }
  void add_dirty_price(float dirty_price) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_DIRTY_PRICE, dirty_price, 0.0f);
  }
  void add_accrued_amount(float accrued_amount) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_ACCRUED_AMOUNT, accrued_amount, 0.0f);
  }
  void add_yield(float yield) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_YIELD, yield, 0.0f);
  }
  void add_accrued_days(int32_t accrued_days) {
    fbb_.AddElement<int32_t>(FixedRateBondValues::VT_ACCRUED_DAYS, accrued_days, 0);
  }
  void add_macaulay_duration(float macaulay_duration) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_MACAULAY_DURATION, macaulay_duration, 0.0f);
  }
  void add_modified_duration(float modified_duration) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_MODIFIED_DURATION, modified_duration, 0.0f);
  }
  void add_convexity(float convexity) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_CONVEXITY, convexity, 0.0f);
  }
  void add_bps(float bps) {
    fbb_.AddElement<float>(FixedRateBondValues::VT_BPS, bps, 0.0f);
  }
  void add_flows_type(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> flows_type) {
    fbb_.AddOffset(FixedRateBondValues::VT_FLOWS_TYPE, flows_type);
  }
  void add_flows(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<void>>> flows) {
    fbb_.AddOffset(FixedRateBondValues::VT_FLOWS, flows);
  }
  explicit FixedRateBondValuesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<FixedRateBondValues> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FixedRateBondValues>(end);
    return o;
  }
};

inline flatbuffers::Offset<FixedRateBondValues> CreateFixedRateBondValues(
    flatbuffers::FlatBufferBuilder &_fbb,
    float npv = 0.0f,
    float clean_price = 0.0f,
    float dirty_price = 0.0f,
    float accrued_amount = 0.0f,
    float yield = 0.0f,
    int32_t accrued_days = 0,
    float macaulay_duration = 0.0f,
    float modified_duration = 0.0f,
    float convexity = 0.0f,
    float bps = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> flows_type = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<void>>> flows = 0) {
  FixedRateBondValuesBuilder builder_(_fbb);
  builder_.add_flows(flows);
  builder_.add_flows_type(flows_type);
  builder_.add_bps(bps);
  builder_.add_convexity(convexity);
  builder_.add_modified_duration(modified_duration);
  builder_.add_macaulay_duration(macaulay_duration);
  builder_.add_accrued_days(accrued_days);
  builder_.add_yield(yield);
  builder_.add_accrued_amount(accrued_amount);
  builder_.add_dirty_price(dirty_price);
  builder_.add_clean_price(clean_price);
  builder_.add_npv(npv);
  return builder_.Finish();
}

inline flatbuffers::Offset<FixedRateBondValues> CreateFixedRateBondValuesDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    float npv = 0.0f,
    float clean_price = 0.0f,
    float dirty_price = 0.0f,
    float accrued_amount = 0.0f,
    float yield = 0.0f,
    int32_t accrued_days = 0,
    float macaulay_duration = 0.0f,
    float modified_duration = 0.0f,
    float convexity = 0.0f,
    float bps = 0.0f,
    const std::vector<uint8_t> *flows_type = nullptr,
    const std::vector<flatbuffers::Offset<void>> *flows = nullptr) {
  auto flows_type__ = flows_type ? _fbb.CreateVector<uint8_t>(*flows_type) : 0;
  auto flows__ = flows ? _fbb.CreateVector<flatbuffers::Offset<void>>(*flows) : 0;
  return quantra::CreateFixedRateBondValues(
      _fbb,
      npv,
      clean_price,
      dirty_price,
      accrued_amount,
      yield,
      accrued_days,
      macaulay_duration,
      modified_duration,
      convexity,
      bps,
      flows_type__,
      flows__);
}

struct PriceFixedRateBondResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PriceFixedRateBondResponseBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BONDS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<quantra::FixedRateBondValues>> *bonds() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<quantra::FixedRateBondValues>> *>(VT_BONDS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_BONDS) &&
           verifier.VerifyVector(bonds()) &&
           verifier.VerifyVectorOfTables(bonds()) &&
           verifier.EndTable();
  }
};

struct PriceFixedRateBondResponseBuilder {
  typedef PriceFixedRateBondResponse Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_bonds(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<quantra::FixedRateBondValues>>> bonds) {
    fbb_.AddOffset(PriceFixedRateBondResponse::VT_BONDS, bonds);
  }
  explicit PriceFixedRateBondResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PriceFixedRateBondResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PriceFixedRateBondResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<PriceFixedRateBondResponse> CreatePriceFixedRateBondResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<quantra::FixedRateBondValues>>> bonds = 0) {
  PriceFixedRateBondResponseBuilder builder_(_fbb);
  builder_.add_bonds(bonds);
  return builder_.Finish();
}

inline flatbuffers::Offset<PriceFixedRateBondResponse> CreatePriceFixedRateBondResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<quantra::FixedRateBondValues>> *bonds = nullptr) {
  auto bonds__ = bonds ? _fbb.CreateVector<flatbuffers::Offset<quantra::FixedRateBondValues>>(*bonds) : 0;
  return quantra::CreatePriceFixedRateBondResponse(
      _fbb,
      bonds__);
}

struct NPVResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef NPVResponseBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NPV = 4
  };
  float npv() const {
    return GetField<float>(VT_NPV, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_NPV) &&
           verifier.EndTable();
  }
};

struct NPVResponseBuilder {
  typedef NPVResponse Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_npv(float npv) {
    fbb_.AddElement<float>(NPVResponse::VT_NPV, npv, 0.0f);
  }
  explicit NPVResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<NPVResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<NPVResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<NPVResponse> CreateNPVResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    float npv = 0.0f) {
  NPVResponseBuilder builder_(_fbb);
  builder_.add_npv(npv);
  return builder_.Finish();
}

inline bool VerifyFlow(flatbuffers::Verifier &verifier, const void *obj, Flow type) {
  switch (type) {
    case Flow_NONE: {
      return true;
    }
    case Flow_FlowInterest: {
      auto ptr = reinterpret_cast<const quantra::FlowInterest *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Flow_FlowPastInterest: {
      auto ptr = reinterpret_cast<const quantra::FlowPastInterest *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Flow_FlowNotional: {
      auto ptr = reinterpret_cast<const quantra::FlowNotional *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyFlowVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyFlow(
        verifier,  values->Get(i), types->GetEnum<Flow>(i))) {
      return false;
    }
  }
  return true;
}

}  // namespace quantra

#endif  // FLATBUFFERS_GENERATED_RESPONSES_QUANTRA_H_
