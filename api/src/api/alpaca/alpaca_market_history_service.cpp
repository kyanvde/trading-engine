#include "api/service/alpaca/alpaca_market_history_service.h"

#include <cpr/cpr.h>

#include <iostream>

#include "api/parser/alpaca/alpaca_bar_parser.h"
#include "core/time_util.h"

api::AlpacaMarketHistoryService::AlpacaMarketHistoryService(
    AlpacaClient& client)
    : client_(client) {}

std::vector<core::OHLCBar> api::AlpacaMarketHistoryService::getDailyBars(
    const std::string& symbol, const int amount) {
  cpr::Parameters parameters;
  parameters.Add(cpr::Parameter("symbols", symbol));
  parameters.Add(cpr::Parameter("timeframe", "1D"));

  parameters.Add(cpr::Parameter(
      "start", core::TimeUtil::FormatRfc3339Utc(
                   core::TimeUtil::GetStartOfDaysBeforeUtc(amount))));

  parameters.Add(cpr::Parameter(
      "end",
      core::TimeUtil::FormatRfc3339Utc(core::TimeUtil::GetStartOfTodayUtc())));

  parameters.Add(cpr::Parameter("limit", std::to_string(10000)));

  const cpr::Response response = client_.GetMarketData("/v2/stocks/bars", parameters);

  return AlpacaBarParser::parse(nlohmann::json::parse(response.text));
}
