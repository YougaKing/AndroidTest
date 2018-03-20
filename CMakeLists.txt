cmake_minimum_required(VERSION 3.9)
project(AndroidTest C)

set(CMAKE_C_STANDARD 11)

add_executable(AndroidTest main.c config.c config.h)