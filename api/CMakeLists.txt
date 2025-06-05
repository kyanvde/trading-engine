# Source files
file(GLOB_RECURSE SOURCES src/*.cpp)

add_library(api STATIC ${SOURCES})

target_link_libraries(api PUBLIC core cpr::cpr)
target_include_directories(api PUBLIC include ${PROJECT_SOURCE_DIR}/external/dotenv-cpp/include)
