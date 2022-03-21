cmake_minimum_required(VERSION 3.21)
project(decorator_pattern)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)
add_executable(decorator_pattern main.cpp include/beverages.h src/beverages.cpp include/condiments.h src/condiments.cpp)
