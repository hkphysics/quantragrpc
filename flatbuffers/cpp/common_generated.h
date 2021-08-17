// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_COMMON_QUANTRA_H_
#define FLATBUFFERS_GENERATED_COMMON_QUANTRA_H_

#include "flatbuffers/flatbuffers.h"

#include "enums_generated.h"
#include "schedule_generated.h"
#include "term_structure_generated.h"

namespace quantra {

struct Yield;
struct YieldBuilder;

struct Pricing;
struct PricingBuilder;

struct Error;
struct ErrorBuilder;

struct Yield FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef YieldBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DAY_COUNTER = 4,
    VT_COMPOUNDING = 6,
    VT_FREQUENCY = 8
  };
  quantra::enums::DayCounter day_counter() const {
    return static_cast<quantra::enums::DayCounter>(GetField<int8_t>(VT_DAY_COUNTER, 0));
  }
  quantra::enums::Compounding compounding() const {
    return static_cast<quantra::enums::Compounding>(GetField<int8_t>(VT_COMPOUNDING, 0));
  }
  quantra::enums::Frequency frequency() const {
    return static_cast<quantra::enums::Frequency>(GetField<int8_t>(VT_FREQUENCY, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_DAY_COUNTER) &&
           VerifyField<int8_t>(verifier, VT_COMPOUNDING) &&
           VerifyField<int8_t>(verifier, VT_FREQUENCY) &&
           verifier.EndTable();
  }
};

struct YieldBuilder {
  typedef Yield Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_day_counter(quantra::enums::DayCounter day_counter) {
    fbb_.AddElement<int8_t>(Yield::VT_DAY_COUNTER, static_cast<int8_t>(day_counter), 0);
  }
  void add_compounding(quantra::enums::Compounding compounding) {
    fbb_.AddElement<int8_t>(Yield::VT_COMPOUNDING, static_cast<int8_t>(compounding), 0);
  }
  void add_frequency(quantra::enums::Frequency frequency) {
    fbb_.AddElement<int8_t>(Yield::VT_FREQUENCY, static_cast<int8_t>(frequency), 0);
  }
  explicit YieldBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Yield> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Yield>(end);
    return o;
  }
};

inline flatbuffers::Offset<Yield> CreateYield(
    flatbuffers::FlatBufferBuilder &_fbb,
    quantra::enums::DayCounter day_counter = quantra::enums::DayCounter_Actual360,
    quantra::enums::Compounding compounding = quantra::enums::Compounding_Compounded,
    quantra::enums::Frequency frequency = quantra::enums::Frequency_Annual) {
  YieldBuilder builder_(_fbb);
  builder_.add_frequency(frequency);
  builder_.add_compounding(compounding);
  builder_.add_day_counter(day_counter);
  return builder_.Finish();
}

struct Pricing FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PricingBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_AS_OF_DATE = 4,
    VT_SETTLEMENT_DATE = 6,
    VT_CURVES = 8,
    VT_BOND_PRICING_DETAILS = 10,
    VT_BOND_PRICING_FLOWS = 12
  };
  const flatbuffers::String *as_of_date() const {
    return GetPointer<const flatbuffers::String *>(VT_AS_OF_DATE);
  }
  const flatbuffers::String *settlement_date() const {
    return GetPointer<const flatbuffers::String *>(VT_SETTLEMENT_DATE);
  }
  const flatbuffers::Vector<flatbuffers::Offset<quantra::TermStructure>> *curves() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<quantra::TermStructure>> *>(VT_CURVES);
  }
  bool bond_pricing_details() const {
    return GetField<uint8_t>(VT_BOND_PRICING_DETAILS, 0) != 0;
  }
  bool bond_pricing_flows() const {
    return GetField<uint8_t>(VT_BOND_PRICING_FLOWS, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_AS_OF_DATE) &&
           verifier.VerifyString(as_of_date()) &&
           VerifyOffset(verifier, VT_SETTLEMENT_DATE) &&
           verifier.VerifyString(settlement_date()) &&
           VerifyOffset(verifier, VT_CURVES) &&
           verifier.VerifyVector(curves()) &&
           verifier.VerifyVectorOfTables(curves()) &&
           VerifyField<uint8_t>(verifier, VT_BOND_PRICING_DETAILS) &&
           VerifyField<uint8_t>(verifier, VT_BOND_PRICING_FLOWS) &&
           verifier.EndTable();
  }
};

struct PricingBuilder {
  typedef Pricing Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_as_of_date(flatbuffers::Offset<flatbuffers::String> as_of_date) {
    fbb_.AddOffset(Pricing::VT_AS_OF_DATE, as_of_date);
  }
  void add_settlement_date(flatbuffers::Offset<flatbuffers::String> settlement_date) {
    fbb_.AddOffset(Pricing::VT_SETTLEMENT_DATE, settlement_date);
  }
  void add_curves(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<quantra::TermStructure>>> curves) {
    fbb_.AddOffset(Pricing::VT_CURVES, curves);
  }
  void add_bond_pricing_details(bool bond_pricing_details) {
    fbb_.AddElement<uint8_t>(Pricing::VT_BOND_PRICING_DETAILS, static_cast<uint8_t>(bond_pricing_details), 0);
  }
  void add_bond_pricing_flows(bool bond_pricing_flows) {
    fbb_.AddElement<uint8_t>(Pricing::VT_BOND_PRICING_FLOWS, static_cast<uint8_t>(bond_pricing_flows), 0);
  }
  explicit PricingBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Pricing> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Pricing>(end);
    return o;
  }
};

inline flatbuffers::Offset<Pricing> CreatePricing(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> as_of_date = 0,
    flatbuffers::Offset<flatbuffers::String> settlement_date = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<quantra::TermStructure>>> curves = 0,
    bool bond_pricing_details = false,
    bool bond_pricing_flows = false) {
  PricingBuilder builder_(_fbb);
  builder_.add_curves(curves);
  builder_.add_settlement_date(settlement_date);
  builder_.add_as_of_date(as_of_date);
  builder_.add_bond_pricing_flows(bond_pricing_flows);
  builder_.add_bond_pricing_details(bond_pricing_details);
  return builder_.Finish();
}

inline flatbuffers::Offset<Pricing> CreatePricingDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *as_of_date = nullptr,
    const char *settlement_date = nullptr,
    const std::vector<flatbuffers::Offset<quantra::TermStructure>> *curves = nullptr,
    bool bond_pricing_details = false,
    bool bond_pricing_flows = false) {
  auto as_of_date__ = as_of_date ? _fbb.CreateString(as_of_date) : 0;
  auto settlement_date__ = settlement_date ? _fbb.CreateString(settlement_date) : 0;
  auto curves__ = curves ? _fbb.CreateVector<flatbuffers::Offset<quantra::TermStructure>>(*curves) : 0;
  return quantra::CreatePricing(
      _fbb,
      as_of_date__,
      settlement_date__,
      curves__,
      bond_pricing_details,
      bond_pricing_flows);
}

struct Error FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ErrorBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ERROR_MESSAGE = 4
  };
  const flatbuffers::String *error_message() const {
    return GetPointer<const flatbuffers::String *>(VT_ERROR_MESSAGE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ERROR_MESSAGE) &&
           verifier.VerifyString(error_message()) &&
           verifier.EndTable();
  }
};

struct ErrorBuilder {
  typedef Error Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_error_message(flatbuffers::Offset<flatbuffers::String> error_message) {
    fbb_.AddOffset(Error::VT_ERROR_MESSAGE, error_message);
  }
  explicit ErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Error> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Error>(end);
    return o;
  }
};

inline flatbuffers::Offset<Error> CreateError(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> error_message = 0) {
  ErrorBuilder builder_(_fbb);
  builder_.add_error_message(error_message);
  return builder_.Finish();
}

inline flatbuffers::Offset<Error> CreateErrorDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *error_message = nullptr) {
  auto error_message__ = error_message ? _fbb.CreateString(error_message) : 0;
  return quantra::CreateError(
      _fbb,
      error_message__);
}

}  // namespace quantra

#endif  // FLATBUFFERS_GENERATED_COMMON_QUANTRA_H_
