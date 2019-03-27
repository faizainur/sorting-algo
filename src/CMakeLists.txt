cmake_minimum_required (VERSION 2.6)
project (UTS)
add_compile_options(-std=c++14)

set(AUTHOR_NAME Faiz Ainur Rofiq)
set(NPM 1706985956)
set(PRODI TEKNIK KOMPUTER)

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