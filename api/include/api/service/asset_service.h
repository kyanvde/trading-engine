#ifndef API_SERVICE_ASSET_SERVICE_H_
#define API_SERVICE_ASSET_SERVICE_H_

#include <vector>

#include "core/asset.h"

namespace api {

class AssetService {
 public:
  virtual ~AssetService() = default;

  virtual std::vector<core::Asset> getTradableAssets() = 0;
};
}  // namespace api

#endif  // API_SERVICE_ASSET_SERVICE_H_
