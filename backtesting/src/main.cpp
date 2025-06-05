#include <core/ohlc_bar.h>
#include <cpr/cpr.h>
#include <laserpants/dotenv/dotenv.h>

#include <iostream>

#include "api/provider/data_provider.h"
#include "api/provider/data_provider_factory.h"

int main() {
  std::cout << "Hello world!" << std::endl;

  const core::OHLCBar bar(std::chrono::system_clock::now(), 100.5, 105.0, 99.9,
                          104.2, 1500);

  std::cout << bar << std::endl;

  const std::unique_ptr<api::DataProvider> data_provider =
      api::DataProviderFactory::Create("alpaca");

  const std::unique_ptr<api::AssetService> asset_service =
      data_provider->CreateAssetService();

  const std::vector<core::Asset> assets = asset_service->getTradableAssets();

  std::cout << assets.size() << std::endl;

  return EXIT_SUCCESS;
}
