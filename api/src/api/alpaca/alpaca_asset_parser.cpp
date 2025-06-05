#include "api/parser/alpaca/alpaca_asset_parser.h"
std::vector<core::Asset> api::AlpacaAssetParser::parse(
    const nlohmann::json& json_array) {
  std::vector<core::Asset> assets;

  for (const nlohmann::basic_json<>& json_object : json_array) {
    const std::string symbol = json_object.value("symbol", "");
    const std::string name = json_object.value("name", "");
    const std::string exchange = json_object.value("exchange", "");
    const std::string asset_class = json_object.value("class", "");
    const bool tradable = json_object.value("tradable", false);
    const bool marginable = json_object.value("marginable", false);
    const bool shortable = json_object.value("shortable", false);
    const bool easy_to_borrow = json_object.value("easy_to_borrow", false);
    const bool fractionable = json_object.value("fractionable", false);

    assets.emplace_back(symbol, name, exchange, asset_class, tradable,
                        marginable, shortable, easy_to_borrow, fractionable);
  }
  return assets;
}
