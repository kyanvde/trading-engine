#ifndef API_CLIENT_ALPACA_CLIENT_H_
#define API_CLIENT_ALPACA_CLIENT_H_

#include <cpr/cpr.h>

#include <string>

namespace api {

class AlpacaClient {
  std::string key_id_;
  std::string secret_key_;
  std::string base_url_;

 public:
  AlpacaClient(const std::string& key_id, const std::string& secret_key,
      const std::string& base_url = "https://paper-api.alpaca.markets");

  cpr::Response Get(const std::string& endpoint,
                    const cpr::Parameters& params = {}) const;
};
}  // namespace api

#endif  // API_CLIENT_ALPACA_CLIENT_H_