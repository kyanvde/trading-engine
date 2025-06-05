#include "api/provider/data_provider_factory.h"

#include <laserpants/dotenv/dotenv.h>

#include "api/provider/alpaca_data_provider.h"

std::unique_ptr<api::DataProvider> api::DataProviderFactory::Create(
    const std::string& provider_name) {
  dotenv::init();

  if (provider_name == "alpaca") {
    return std::make_unique<AlpacaDataProvider>(
        std::getenv("APCA_API_KEY_ID"), std::getenv("APCA_API_SECRET_KEY"));
  }

  throw std::runtime_error("Unsupported data provider: " + provider_name);
}
