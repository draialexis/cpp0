cmake_minimum_required(VERSION 3.20)
project(tp1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tp1
        sources/commercial.cpp
        headers/commercial.h
        main.cpp
        sources/pipeauteur.cpp
        headers/pipeauteur.h)
