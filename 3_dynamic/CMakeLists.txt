cmake_minimum_required(VERSION 3.20)
project(DynLib C)
set(CMAKE_C_STANDARD 11)

# ===== Динамическая библиотека =====
add_library(utils SHARED utils.c)
target_compile_options(utils PRIVATE -g)

add_executable(main_dynamic main.c)
target_link_libraries(main_dynamic PRIVATE utils)

# ===== Статическая библиотека =====
add_library(utils_static STATIC utils.c)
target_compile_options(utils_static PRIVATE -g)

add_executable(main_static main.c)
target_link_libraries(main_static PRIVATE utils_static)