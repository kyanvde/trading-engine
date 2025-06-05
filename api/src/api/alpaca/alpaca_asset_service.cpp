#include "api/service/alpaca/alpaca_asset_service.h"

#include <cpr/cpr.h>

#include <nlohmann/json.hpp>

#include "api/parser/alpaca/alpaca_asset_parser.h"

api::AlpacaAssetService::AlpacaAssetService(AlpacaClient& client)
    : client_(client) {}

std::vector<core::Asset> api::AlpacaAssetService::getTradableAssets() {
  const cpr::Response response =
      client_.Get("/v2/assets", {{"status", "active"}, {"tradable", "true"}});

  if (response.status_code != 200) {
    throw std::runtime_error("Alpaca API call failed: " +
                             response.error.message);
  }

  return AlpacaAssetParser::parse(nlohmann::json::parse(response.text));
}
