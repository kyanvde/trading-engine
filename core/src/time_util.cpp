#include "core/time_util.h"

#include <iomanip>
#include <iostream>
#include <sstream>

#include "date/date.h"
#include "date/tz.h"

namespace core {

std::chrono::system_clock::time_point TimeUtil::GetStartOfTodayUtc() {
  const auto now = std::chrono::system_clock::now();
  return date::floor<std::chrono::days>(now);
}

std::chrono::system_clock::time_point TimeUtil::GetStartOfDaysBeforeUtc(
    int days_before) {
  const auto today_start = GetStartOfTodayUtc();
  return today_start - std::chrono::days{days_before};
}

std::string TimeUtil::FormatRfc3339Utc(
    const std::chrono::system_clock::time_point& time_point) {
  // Format to ISO8601 / RFC3339 with 'Z' for UTC.
  return date::format("%FT%TZ", date::floor<std::chrono::seconds>(time_point));
}

std::chrono::system_clock::time_point TimeUtil::ParseRfc3339Utc(
    const std::string& rfc3339_string) {
  std::istringstream infile{rfc3339_string};
  std::chrono::system_clock::time_point tp;  infile >> parse("%FT%T%Ez", tp);

  return tp;
}

}  // namespace core