#include "api/parser/alpaca/alpaca_bar_parser.h"

#include "core/time_util.h"

std::vector<core::OHLCBar> api::AlpacaBarParser::parse(const nlohmann::json& json) {
  std::vector<core::OHLCBar> bars;

  for (const nlohmann::json& bars_array = json["bars"].begin().value();
       const nlohmann::basic_json<>& json_object : bars_array) {
    const std::chrono::system_clock::time_point t = core::TimeUtil::ParseRfc3339Utc(json_object.value("t", core::TimeUtil::FormatRfc3339Utc(core::TimeUtil::GetStartOfTodayUtc())));
    const int o = json_object.value("o", 0);
    const int h = json_object.value("h", 0);
    const int l = json_object.value("l", 0);
    const int c = json_object.value("c", 0);
    const int v = json_object.value("v", 0);

    bars.emplace_back(core::OHLCBar(t, o, h, l, c, v));
  }

  return bars;
}
