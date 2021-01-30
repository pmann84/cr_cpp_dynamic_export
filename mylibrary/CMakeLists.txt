set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(mylibrary SHARED)

target_sources(mylibrary PRIVATE lib.cpp)

add_compile_definitions(__MY_LIB_BUILD)

target_include_directories(mylibrary PUBLIC .)

set(MYLIBRARY_BINARY_DIR "${PROJECT_BINARY_DIR}")

# If you just want the entire contents of the /libs/ directory copied, use cmake -E copy_directory:

# add_custom_command(TARGET MyTest POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy_directory
#         "${PROJECT_SOURCE_DIR}/libs"
#         $<TARGET_FILE_DIR:MyTest>)
