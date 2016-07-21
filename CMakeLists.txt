cmake_minimum_required(VERSION 3.5)
project(201607221_initial_clion_project)


set(201607221_initial_clion_project_VERSION_MAJOR 1)
set(201607221_initial_clion_project_VERSION_MINOR 0)

configure_file (
    "${PROJECT_SOURCE_DIR}/201607221_initial_clion_project_Config.h.in"
    "${PROJECT_BINARY_DIR}/201607221_initial_clion_project_Config.h"
)

include_directories("${PROJECT_BINARY_DIR}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Shape.h Rect.h Rect.cpp)
add_executable(201607221_initial_clion_project ${SOURCE_FILES})