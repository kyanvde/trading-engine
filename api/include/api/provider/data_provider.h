#ifndef API_PROVIDER_DATA_PROVIDER_H_
#define API_PROVIDER_DATA_PROVIDER_H_

#include "api/service/asset_service.h"

namespace api {

class DataProvider {
 public:
  virtual ~DataProvider() = default;

  virtual std::unique_ptr<AssetService> CreateAssetService() = 0;
};

}  // namespace api

#endif  // API_PROVIDER_DATA_PROVIDER_H_
