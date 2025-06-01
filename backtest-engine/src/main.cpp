#include <iostream>
#include <core/ohlc_bar.h>

int main() {
    std::cout << "Hello world!" << std::endl;

    const core::OHLCBar bar(std::chrono::system_clock::now(), 100.5, 105.0, 99.9, 104.2, 1500);

    std::cout << bar << std::endl;

    return EXIT_SUCCESS;
}
