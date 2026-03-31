cmake_minimum_required(VERSION 3.16)

project(CSC325_Lab4 CXX)

# gtest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_library(MyLibrary src/MyLibrary.cpp)

target_include_directories(MyLibrary PUBLIC include)
