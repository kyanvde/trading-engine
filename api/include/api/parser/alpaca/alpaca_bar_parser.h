#ifndef API_PARSER_ALPACA_ALPACA_BAR_PARSER_H_
#define API_PARSER_ALPACA_ALPACA_BAR_PARSER_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "core/bar.h"
#include "core/ohlc_bar.h"

namespace api {

class AlpacaBarParser {
public:
  static std::vector<core::OHLCBar> parse(const nlohmann::json& json);
};
}  // namespace api

#endif  // API_PARSER_ALPACA_ALPACA_BAR_PARSER_H_