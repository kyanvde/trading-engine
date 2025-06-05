# Enable optimizations for release builds
set(CMAKE_CXX_FLAGS_RELEASE "-O3 ")
add_compile_options("-Wall" "-Wextra" "-pedantic")

# Source files
file(GLOB_RECURSE SOURCES src/*.cpp)
file(GLOB_RECURSE HEADERS src/*.h)

add_executable(BacktestEngine ${SOURCES})

target_include_directories(BacktestEngine PUBLIC include)
target_link_libraries(BacktestEngine PUBLIC core api)
