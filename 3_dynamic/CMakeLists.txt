cmake_minimum_required(VERSION 3.20)
project(DynLib c)
set(CMAKE_C_STANDARD 11)

add_library(utils SHARED utils.c utils.h)
