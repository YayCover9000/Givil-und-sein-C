cmake_minimum_required(VERSION 4.0)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c
        examplesForUnderstanding/C1.c
        examplesForUnderstanding/C1.h
        main.c
        examplesForUnderstanding/C2.c
        examplesForUnderstanding/C2.h)
