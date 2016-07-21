cmake_minimum_required(VERSION 3.5)
project(201607221_initial_clion_project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Shape.h Rect.h Rect.cpp)
add_executable(201607221_initial_clion_project ${SOURCE_FILES})