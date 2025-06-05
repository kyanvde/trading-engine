# Source files
file(GLOB_RECURSE SOURCES src/*.cpp)
file(GLOB_RECURSE HEADERS src/*.h)

add_library(api STATIC ${SOURCES})

target_include_directories(api PUBLIC include)
