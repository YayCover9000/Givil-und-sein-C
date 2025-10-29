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
)

target_include_directories(main PRIVATE
        "${CMAKE_SOURCE_DIR}/examplesForUnderstanding"
)

# Optional: show what was picked up
# message(STATUS "EXAMPLE_SRCS = ${EXAMPLE_SRCS}")
