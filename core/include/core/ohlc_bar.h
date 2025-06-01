#ifndef CORE_OHLC_BAR_H_
#define CORE_OHLC_BAR_H_

#include <chrono>
#include "core/bar.h"

namespace core {

class OHLCBar : public Bar {
    public:
  OHLCBar(TimePoint start_time,
          double open,
          double high,
          double low,
          double close,
          double volume);

  void Print(std::ostream& os) const override;

  TimePoint StartTime() const override;
  double Open() const override;
  double High() const override;
  double Low() const override;
  double Close() const override;
  double Volume() const override;

 private:
  TimePoint start_time_;
  double open_;
  double high_;
  double low_;
  double close_;
  double volume_;
};

}  // namespace core

#endif  // CORE_OHLC_BAR_H_
