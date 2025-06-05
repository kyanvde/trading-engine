#include "api/service/alpaca/alpaca_asset_service.h"

#include <cpr/cpr.h>

#include <iostream>

api::AlpacaAssetService::AlpacaAssetService(AlpacaClient& client)
    : client_(client) {}

std::vector<core::Asset> api::AlpacaAssetService::getTradableAssets() {
  const cpr::Response response = client_.Get("/v2/assets");

  if (response.status_code != 200) {
    throw std::runtime_error("Alpaca API call failed: " +
                             response.error.message);
  }

  std::cout << "Successfully fetched assets" << std::endl;
  return {};
}
