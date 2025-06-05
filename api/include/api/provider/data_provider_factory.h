#ifndef API_PROVIDER_DATA_PROVIDER_FACTORY_H_
#define API_PROVIDER_DATA_PROVIDER_FACTORY_H_

#include <memory>

#include "data_provider.h"

namespace api {
class DataProviderFactory {
public:
  static std::unique_ptr<DataProvider> Create(const std::string& provider_name);
};
}

#endif  // API_PROVIDER_DATA_PROVIDER_FACTORY_H_
