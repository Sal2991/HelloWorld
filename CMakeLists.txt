cmake_minimum_required(VERSION 4.2.0)
project(cxx-cmake)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main 
    # Files to compile goes here.
    src/main.cc
)
