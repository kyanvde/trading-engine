#ifndef API_SERVICE_ALPACA_ALPACA_MARKET_HISTORY_SERVICE_H_
#define API_SERVICE_ALPACA_ALPACA_MARKET_HISTORY_SERVICE_H_
#include "api/client/alpaca_client.h"
#include "api/service/market_history_service.h"

namespace api {
class AlpacaMarketHistoryService final : public MarketHistoryService {
  AlpacaClient& client_;

 public:
  explicit AlpacaMarketHistoryService(AlpacaClient& client);

  std::vector<core::Bar> getDailyBars(const std::string& symbol,
                                      int amount) override;
};
}  // namespace api

#endif  // API_SERVICE_ALPACA_ALPACA_MARKET_HISTORY_SERVICE_H_