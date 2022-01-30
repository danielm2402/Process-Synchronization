cmake_minimum_required(VERSION 3.21)
project(mutex)

set(CMAKE_CXX_STANDARD 14)

add_executable(mutex main.cpp)
SET(CMAKE_CXX_FLAGS -pthread)