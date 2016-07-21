cmake_minimum_required(VERSION 3.5)

##################################################################
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s -DNDEBUG -march=native")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-g3 -Og -pg")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -s -DNDEBUG -march=native")


##################################################################
set(201607221_initial_clion_project_VERSION_MAJOR 1)
set(201607221_initial_clion_project_VERSION_MINOR 0)

configure_file (
    "201607221_initial_clion_project_Config.h.in"
    "${PROJECT_BINARY_DIR}/201607221_initial_clion_project_Config.h"
)
include_directories("${PROJECT_BINARY_DIR}")


##################################################################
set(SOURCE_FILES main.cpp Shape.hpp Rect.hpp Rect.cpp ../test/basic_tests/basic_check.cpp)
add_executable(201607221_initial_clion_project ${SOURCE_FILES})

