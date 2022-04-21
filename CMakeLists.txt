cmake_minimum_required(VERSION 3.21)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(DFS main.cpp header.h implementation.cpp)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/NetworkFile.txt ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/NetworkFile.txt ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
