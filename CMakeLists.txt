cmake_minimum_required(VERSION 3.20)
project(GivilUndSeinC C)
set(CMAKE_C_STANDARD 11)

add_executable(main
    main.c
    examplesForUnderstanding/zweiTeiler.c
    examplesForUnderstanding/primeZahl.c
    examplesForUnderstanding/facultaet.c
    examplesForUnderstanding/callByValue.c
    examplesForUnderstanding/callByReference.c
    examplesForUnderstanding/args_demo.c
    examplesForUnderstanding/array_demo.c
    examplesForUnderstanding/switchcase_demo.c
    examplesForUnderstanding/struct_student.c
    examplesForUnderstanding/typedef_demo.c
    examplesForUnderstanding/struct_typedef_exam.c
    examplesForUnderstanding/pointer_address_demo.c
    examplesForUnderstanding/dynmem_demo.c
    examplesForUnderstanding/fptr_demo.c
    examplesForUnderstanding/strings_demo.c
    examplesForUnderstanding/pointer_basics.c
    examplesForUnderstanding/pointer_array_demo.c
    examplesForUnderstanding/fptr_ops.c
)
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/examplesForUnderstanding)
