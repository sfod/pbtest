cmake_minimum_required(VERSION 2.8)
project(pbtest C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

add_executable(${PROJECT_NAME} src/main.c)
