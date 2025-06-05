#include <core/ohlc_bar.h>
#include <cpr/cpr.h>
#include <laserpants/dotenv/dotenv.h>

#include <iostream>

#include "api/provider/data_provider.h"
#include "api/provider/data_provider_factory.h"
#include "api/service/market_history_service.h"

int main() {
  const std::unique_ptr<api::DataProvider> data_provider =
      api::DataProviderFactory::Create("alpaca");

  const std::unique_ptr<api::AssetService> asset_service =
      data_provider->CreateAssetService();

  const std::vector<core::Asset> assets = asset_service->getTradableAssets();

  const std::unique_ptr<api::MarketHistoryService> market_history_service =
      data_provider->CreateMarketHistoryService();

  const std::vector<core::OHLCBar> bars = market_history_service->getDailyBars("AAPL", 15);
  for (const core::OHLCBar& bar : bars) {
    std::cout << bar << std::endl;
  }

  return EXIT_SUCCESS;
}
