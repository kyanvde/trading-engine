#include "core/ohlc_bar.h"

namespace core {

OHLCBar::OHLCBar(const TimePoint start_time, const double open,
                 const double high, const double low, const double close,
                 const double volume)

    : start_time_(start_time),
      open_(open),
      high_(high),
      low_(low),
      close_(close),
      volume_(volume) {}

void OHLCBar::Print(std::ostream& os) const {
  // Convert start_time_ to time_t for formatting
  std::time_t start_time_t = std::chrono::system_clock::to_time_t(start_time_);
  os << "Bar(StartTime="
     << std::put_time(std::localtime(&start_time_t), "%F %T")
     << ", Open=" << open_ << ", High=" << high_ << ", Low=" << low_
     << ", Close=" << close_ << ", Volume=" << volume_ << ")";
}

Bar::TimePoint OHLCBar::StartTime() const { return start_time_; }
double OHLCBar::Open() const { return open_; }
double OHLCBar::High() const { return high_; }
double OHLCBar::Low() const { return low_; }
double OHLCBar::Close() const { return close_; }
double OHLCBar::Volume() const { return volume_; }

}  // namespace core
