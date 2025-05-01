cmake_minimum_required(VERSION 3.27)
project(eswe_data_processing)

set(CMAKE_CXX_STANDARD 17)

add_executable(eswe_data_processing main.cpp
        functions.h)
