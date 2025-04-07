cmake_minimum_required(VERSION 3.30)
project(Ch10PP1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ch10PP1 main.cpp
        CDAccount.cpp
        CDAccount.h
        Functions.h
        Functions.cpp)
