#include <core/ohlc_bar.h>
#include <cpr/cpr.h>
#include <laserpants/dotenv/dotenv.h>

#include <iostream>

int main() {
  std::cout << "Hello world!" << std::endl;

  const core::OHLCBar bar(std::chrono::system_clock::now(), 100.5, 105.0, 99.9,
                          104.2, 1500);

  std::cout << bar << std::endl;

  dotenv::init();

  cpr::Response r = cpr::Get(
      cpr::Url{"https://paper-api.alpaca.markets/v2/assets?attributes="},
      cpr::Header{
          {"APCA-API-KEY-ID", "PK1SXVQHAF428SJG70T3"},
          {"APCA-API-SECRET-KEY", "Jt4ZMK2mogqs49jmKFy2mL7J4iQhEJDzFz3QdMSO"},
          {"accept", "application/json"}});

  if (r.status_code == 200) {
    std::cout << "Success:\n" << r.text << std::endl;
  } else {
    std::cerr << "Request failed: HTTP " << r.status_code << "\n"
              << "Error: " << r.error.message << std::endl;
  }

  return EXIT_SUCCESS;
}
