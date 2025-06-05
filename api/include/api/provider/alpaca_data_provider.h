#ifndef API_PROVIDER_ALPACA_DATA_PROVIDER_H_
#define API_PROVIDER_ALPACA_DATA_PROVIDER_H_

#include "api/service/alpaca/alpaca_asset_service.h"
#include "api/service/alpaca/alpaca_market_history_service.h"

namespace api {
class AlpacaDataProvider final : public DataProvider {
  AlpacaClient client_;

 public:
  AlpacaDataProvider(const std::string& key_id, const std::string& secret_key)
      : client_(key_id, secret_key) {}

  std::unique_ptr<AssetService> CreateAssetService() override {
    return std::make_unique<AlpacaAssetService>(client_);
  }

  std::unique_ptr<MarketHistoryService> CreateMarketHistoryService() override {
    return std::make_unique<AlpacaMarketHistoryService>(client_);
  }
};

}  // namespace api

#endif  // API_PROVIDER_ALPACA_DATA_PROVIDER_H_
