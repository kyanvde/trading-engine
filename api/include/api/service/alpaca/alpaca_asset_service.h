#ifndef API_SERVICE_ALPACA_ALPACA_ASSET_SERVICE_H_
#define API_SERVICE_ALPACA_ALPACA_ASSET_SERVICE_H_

#include <vector>

#include "api/client/alpaca_client.h"
#include "api/service/asset_service.h"
#include "core/asset.h"

namespace api {

class AlpacaAssetService final : public AssetService {
  AlpacaClient& client_;

 public:
  explicit AlpacaAssetService(AlpacaClient& client);

  std::vector<core::Asset> getTradableAssets() override;
};
}  // namespace api

#endif  // API_SERVICE_ALPACA_ALPACA_ASSET_SERVICE_H_
