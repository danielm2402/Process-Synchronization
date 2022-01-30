cmake_minimum_required(VERSION 3.21)
project(busyWaiting)

set(CMAKE_CXX_STANDARD 14)

add_executable(busyWaiting main.cpp)

SET(CMAKE_CXX_FLAGS -pthread)