#ifndef API_CLIENT_ALPACA_CLIENT_H_
#define API_CLIENT_ALPACA_CLIENT_H_

#include <cpr/cpr.h>

#include <string>

namespace api {

class AlpacaClient {
  std::string key_id_;
  std::string secret_key_;
  bool paper_;
  std::string base_url_ = (paper_ ? "https://paper-api.alpaca.markets" : "https://api.alpaca.markets");
  std::string market_data_url_ = "https://data.alpaca.markets";

 public:
  AlpacaClient(
      const std::string& key_id, const std::string& secret_key,
      bool paper = true);

  cpr::Response Get(const std::string& endpoint,
                    const cpr::Parameters& params = {}) const;

  cpr::Response GetMarketData(const std::string& endpoint, const cpr::Parameters& params = {}) const;
};
}  // namespace api

#endif  // API_CLIENT_ALPACA_CLIENT_H_