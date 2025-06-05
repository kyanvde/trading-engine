#include "api/client/alpaca_client.h"

api::AlpacaClient::AlpacaClient(const std::string& key_id,
                                const std::string& secret_key,
                                const std::string& base_url) {
  key_id_ = key_id;
  secret_key_ = secret_key;
  base_url_ = base_url;
}
cpr::Response api::AlpacaClient::Get(const std::string& endpoint,
                                     const cpr::Parameters& params) const {
  return cpr::Get(cpr::Url{base_url_ + endpoint},
                  cpr::Header{
                      {"APCA-API-KEY-ID", key_id_},
                      {"APCA-API-SECRET-KEY", secret_key_},
                      {"accept", "application/json"},
                  },
                  params);
}
