cmake_minimum_required(VERSION 3.20)
project(uint1024_t C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(uint1024_t
        main.c uint.h)
