set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(app)

target_sources(app PRIVATE main.cpp)

target_link_libraries(app mylibrary)

# If you just want the entire contents of the /libs/ directory copied,
# use copy_directory instead of copy_if_different
add_custom_command(
    TARGET app POST_BUILD # Add post build to app project
    COMMAND ${CMAKE_COMMAND} -E copy_if_different # executes "cmake - E copy_if_different..."
        $<TARGET_FILE:mylibrary> # In file
        $<TARGET_FILE_DIR:app>) # Directory of the app binary file