cmake_minimum_required(VERSION 3.10)

project(trading-engine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(external/cpr)

add_subdirectory(core)
add_subdirectory(backtesting)
