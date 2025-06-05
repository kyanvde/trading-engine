#ifndef CORE_TIME_UTIL_H_
#define CORE_TIME_UTIL_H_

#include <chrono>
#include <string>

namespace core {

// Utility class for date/time operations in UTC, formatting, parsing, and
// intervals.
class TimeUtil {
 public:
  // Returns system_clock::time_point representing the start of the current day
  // (UTC midnight).
  static std::chrono::system_clock::time_point GetStartOfTodayUtc();

  // Returns system_clock::time_point representing the start of the day
  // `days_before` days before today (UTC midnight).
  static std::chrono::system_clock::time_point GetStartOfDaysBeforeUtc(
      int days_before);

  // Formats a time_point as RFC-3339 string in UTC.
  // Example output: "2025-06-05T00:00:00Z".
  static std::string FormatRfc3339Utc(
      const std::chrono::system_clock::time_point& time_point);

  static std::chrono::system_clock::time_point ParseRfc3339Utc(const std::string& rfc3339_string);

  TimeUtil() = delete;
};

}  // namespace core

#endif  // CORE_TIME_UTIL_H_
