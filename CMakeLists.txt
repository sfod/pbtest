cmake_minimum_required(VERSION 3.2)
project(pbtest C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")

add_executable(${PROJECT_NAME} src/main.c)
