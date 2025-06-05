# Source files
file(GLOB_RECURSE SOURCES src/*.cpp)

add_library(core STATIC ${SOURCES})

target_include_directories(core PUBLIC include)
