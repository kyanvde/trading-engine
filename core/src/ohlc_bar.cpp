#include "core/ohlc_bar.h"

namespace core {

OHLCBar::OHLCBar(TimePoint start_time,
                 double open,
                 double high,
                 double low,
                 double close,
                 double volume)
    : start_time_(start_time),
      open_(open),
      high_(high),
      low_(low),
      close_(close),
      volume_(volume) {}

Bar::TimePoint OHLCBar::StartTime() const { return start_time_; }
double OHLCBar::Open() const { return open_; }
double OHLCBar::High() const { return high_; }
double OHLCBar::Low() const { return low_; }
double OHLCBar::Close() const { return close_; }
double OHLCBar::Volume() const { return volume_; }

}  // namespace core
