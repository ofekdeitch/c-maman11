# cmake_minimum_required(VERSION <specify CMake version here>)
project(check C)

set(CMAKE_C_STANDARD 99)

add_executable(check main.c sequence.c)