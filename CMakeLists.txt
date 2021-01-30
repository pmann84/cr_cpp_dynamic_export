cmake_minimum_required(VERSION 3.14)

project(
    dynamic_library_export_in_cpp
    VERSION 1.0
	DESCRIPTION "Simple example setup of how to export library symbols in C++"
    LANGUAGES CXX
)

add_subdirectory(mylibrary)
add_subdirectory(app)