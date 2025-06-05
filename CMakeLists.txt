cmake_minimum_required(VERSION 3.10)

# Enable optimizations for release builds
set(CMAKE_CXX_FLAGS_RELEASE "-O3 ")
add_compile_options("-Wall" "-Wextra" "-pedantic")

project(trading-engine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(external/cpr)
add_subdirectory(external/json)

add_subdirectory(core)
add_subdirectory(api)
add_subdirectory(backtesting)
