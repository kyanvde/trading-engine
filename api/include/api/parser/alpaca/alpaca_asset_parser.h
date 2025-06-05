#ifndef API_PARSER_ALPACA_ALPACA_ASSET_PARSER_H_
#define API_PARSER_ALPACA_ALPACA_ASSET_PARSER_H_

#include <core/asset.h>

#include <nlohmann/json.hpp>
#include <vector>

namespace api {

class AlpacaAssetParser {
 public:
  static std::vector<core::Asset> parse(const nlohmann::json& json_array);
};
}  // namespace api

#endif  // API_PARSER_ALPACA_ALPACA_ASSET_PARSER_H_