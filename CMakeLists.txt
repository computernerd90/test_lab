cmake_minimum_required(VERSION 3.16)

project(CSC325_Lab4 CXX)

# gtest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

set(BUILD_SHARED_LIBS ON)

find_package(GTest REQUIRED)

add_library(MyLibrary src/MyLibrary.cpp)

target_include_directories(MyLibrary PUBLIC include)

enable_testing()

add_executable(MyLibraryTests tests/test_library.cpp)

target_include_directories(MyLibraryTests PUBLIC include)

target_link_libraries(MyLibraryTests PRIVATE MyLibrary GTest::gtest_main)
