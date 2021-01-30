set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(mylibrary SHARED)

target_sources(mylibrary PRIVATE lib.cpp)

add_compile_definitions(__MY_LIB_BUILD)

target_include_directories(mylibrary PUBLIC .)

set(MYLIBRARY_BINARY_DIR "${PROJECT_BINARY_DIR}")