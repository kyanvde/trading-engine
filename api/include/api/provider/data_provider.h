#ifndef API_PROVIDER_DATA_PROVIDER_H_
#define API_PROVIDER_DATA_PROVIDER_H_

#include "api/service/asset_service.h"
#include "api/service/market_history_service.h"

namespace api {

class DataProvider {
 public:
  virtual ~DataProvider() = default;

  virtual std::unique_ptr<AssetService> CreateAssetService() = 0;

  virtual std::unique_ptr<MarketHistoryService>
  CreateMarketHistoryService() = 0;
};

}  // namespace api

#endif  // API_PROVIDER_DATA_PROVIDER_H_
