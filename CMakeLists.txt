cmake_minimum_required(VERSION 3.22)
project(givil_und_sein_C C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_EXTENSIONS OFF)

file(GLOB EXAMPLE_SRCS CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/examplesForUnderstanding/*.c"
)

add_executable(main
        "${CMAKE_SOURCE_DIR}/main.c"
        ${EXAMPLE_SRCS}
        examplesForUnderstanding/enumeration.c
        examplesForUnderstanding/enumeration.h
        examplesForUnderstanding/doSmth.c
        examplesForUnderstanding/doSmth.h
        examplesForUnderstanding/zweiTeiler.c
        examplesForUnderstanding/zweiTeiler.h
        examplesForUnderstanding/primeZahl.c
        examplesForUnderstanding/primeZahl.h
        examplesForUnderstanding/facultaet.c
        examplesForUnderstanding/facultaet.h
)

target_include_directories(main PRIVATE
        "${CMAKE_SOURCE_DIR}/examplesForUnderstanding"
)

# Optional: show what was picked up
# message(STATUS "EXAMPLE_SRCS = ${EXAMPLE_SRCS}")
