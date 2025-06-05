#ifndef API_SERVICE_MARKET_HISTORY_SERVICE_H_
#define API_SERVICE_MARKET_HISTORY_SERVICE_H_

#include <vector>

#include "core/bar.h"
#include "core/ohlc_bar.h"

namespace api {

class MarketHistoryService {
 public:
  virtual ~MarketHistoryService() = default;

  virtual std::vector<core::OHLCBar> getDailyBars(const std::string& symbol,
                                              int amount) = 0;
};
}  // namespace api

#endif  // API_SERVICE_MARKET_HISTORY_SERVICE_H_