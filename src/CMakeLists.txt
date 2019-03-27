cmake_minimum_required (VERSION 2.6)
project (UTS)
add_compile_options(-std=c++14)


include_directories(
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/classes"
)

set(CLASS_DEF
    classes/gen.cpp
    classes/sort.cpp)

add_executable(../build/sorting 
                main.cpp
                ${CLASS_DEF})

add_executable(../build/generator
                generator.cpp
                ${CLASS_DEF})

add_executable(../build/test
                test.cpp
                ${CLASS_DEF})