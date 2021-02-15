// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_BONDS_QUANTRA_H_
#define FLATBUFFERS_GENERATED_BONDS_QUANTRA_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"
#include "enums_generated.h"

namespace quantra {

struct FixedRateBond;
struct FixedRateBondBuilder;

struct FixedRateBond FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FixedRateBondBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SETTLEMENT_DAYS = 4,
    VT_FACE_AMOUNT = 6,
    VT_RATE = 8,
    VT_DAY_COUNTER = 10,
    VT_BUSINESS_DAY_CONVENTION = 12,
    VT_REDEMPTION = 14,
    VT_ISSUE_DATE = 16,
    VT_SCHEDULE = 18,
    VT_YIELD = 20
  };
  int32_t settlement_days() const {
    return GetField<int32_t>(VT_SETTLEMENT_DAYS, 0);
  }
  double face_amount() const {
    return GetField<double>(VT_FACE_AMOUNT, 0.0);
  }
  double rate() const {
    return GetField<double>(VT_RATE, 0.0);
  }
  quantra::enums::DayCounter day_counter() const {
    return static_cast<quantra::enums::DayCounter>(GetField<int8_t>(VT_DAY_COUNTER, 0));
  }
  quantra::enums::BusinessDayConvention business_day_convention() const {
    return static_cast<quantra::enums::BusinessDayConvention>(GetField<int8_t>(VT_BUSINESS_DAY_CONVENTION, 0));
  }
  double redemption() const {
    return GetField<double>(VT_REDEMPTION, 0.0);
  }
  const flatbuffers::String *issue_date() const {
    return GetPointer<const flatbuffers::String *>(VT_ISSUE_DATE);
  }
  const quantra::Schedule *schedule() const {
    return GetPointer<const quantra::Schedule *>(VT_SCHEDULE);
  }
  const quantra::Yield *yield() const {
    return GetPointer<const quantra::Yield *>(VT_YIELD);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_SETTLEMENT_DAYS) &&
           VerifyField<double>(verifier, VT_FACE_AMOUNT) &&
           VerifyField<double>(verifier, VT_RATE) &&
           VerifyField<int8_t>(verifier, VT_DAY_COUNTER) &&
           VerifyField<int8_t>(verifier, VT_BUSINESS_DAY_CONVENTION) &&
           VerifyField<double>(verifier, VT_REDEMPTION) &&
           VerifyOffset(verifier, VT_ISSUE_DATE) &&
           verifier.VerifyString(issue_date()) &&
           VerifyOffset(verifier, VT_SCHEDULE) &&
           verifier.VerifyTable(schedule()) &&
           VerifyOffset(verifier, VT_YIELD) &&
           verifier.VerifyTable(yield()) &&
           verifier.EndTable();
  }
};

struct FixedRateBondBuilder {
  typedef FixedRateBond Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_settlement_days(int32_t settlement_days) {
    fbb_.AddElement<int32_t>(FixedRateBond::VT_SETTLEMENT_DAYS, settlement_days, 0);
  }
  void add_face_amount(double face_amount) {
    fbb_.AddElement<double>(FixedRateBond::VT_FACE_AMOUNT, face_amount, 0.0);
  }
  void add_rate(double rate) {
    fbb_.AddElement<double>(FixedRateBond::VT_RATE, rate, 0.0);
  }
  void add_day_counter(quantra::enums::DayCounter day_counter) {
    fbb_.AddElement<int8_t>(FixedRateBond::VT_DAY_COUNTER, static_cast<int8_t>(day_counter), 0);
  }
  void add_business_day_convention(quantra::enums::BusinessDayConvention business_day_convention) {
    fbb_.AddElement<int8_t>(FixedRateBond::VT_BUSINESS_DAY_CONVENTION, static_cast<int8_t>(business_day_convention), 0);
  }
  void add_redemption(double redemption) {
    fbb_.AddElement<double>(FixedRateBond::VT_REDEMPTION, redemption, 0.0);
  }
  void add_issue_date(flatbuffers::Offset<flatbuffers::String> issue_date) {
    fbb_.AddOffset(FixedRateBond::VT_ISSUE_DATE, issue_date);
  }
  void add_schedule(flatbuffers::Offset<quantra::Schedule> schedule) {
    fbb_.AddOffset(FixedRateBond::VT_SCHEDULE, schedule);
  }
  void add_yield(flatbuffers::Offset<quantra::Yield> yield) {
    fbb_.AddOffset(FixedRateBond::VT_YIELD, yield);
  }
  explicit FixedRateBondBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<FixedRateBond> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FixedRateBond>(end);
    return o;
  }
};

inline flatbuffers::Offset<FixedRateBond> CreateFixedRateBond(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t settlement_days = 0,
    double face_amount = 0.0,
    double rate = 0.0,
    quantra::enums::DayCounter day_counter = quantra::enums::DayCounter_Actual360,
    quantra::enums::BusinessDayConvention business_day_convention = quantra::enums::BusinessDayConvention_Following,
    double redemption = 0.0,
    flatbuffers::Offset<flatbuffers::String> issue_date = 0,
    flatbuffers::Offset<quantra::Schedule> schedule = 0,
    flatbuffers::Offset<quantra::Yield> yield = 0) {
  FixedRateBondBuilder builder_(_fbb);
  builder_.add_redemption(redemption);
  builder_.add_rate(rate);
  builder_.add_face_amount(face_amount);
  builder_.add_yield(yield);
  builder_.add_schedule(schedule);
  builder_.add_issue_date(issue_date);
  builder_.add_settlement_days(settlement_days);
  builder_.add_business_day_convention(business_day_convention);
  builder_.add_day_counter(day_counter);
  return builder_.Finish();
}

inline flatbuffers::Offset<FixedRateBond> CreateFixedRateBondDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t settlement_days = 0,
    double face_amount = 0.0,
    double rate = 0.0,
    quantra::enums::DayCounter day_counter = quantra::enums::DayCounter_Actual360,
    quantra::enums::BusinessDayConvention business_day_convention = quantra::enums::BusinessDayConvention_Following,
    double redemption = 0.0,
    const char *issue_date = nullptr,
    flatbuffers::Offset<quantra::Schedule> schedule = 0,
    flatbuffers::Offset<quantra::Yield> yield = 0) {
  auto issue_date__ = issue_date ? _fbb.CreateString(issue_date) : 0;
  return quantra::CreateFixedRateBond(
      _fbb,
      settlement_days,
      face_amount,
      rate,
      day_counter,
      business_day_convention,
      redemption,
      issue_date__,
      schedule,
      yield);
}

}  // namespace quantra

#endif  // FLATBUFFERS_GENERATED_BONDS_QUANTRA_H_
