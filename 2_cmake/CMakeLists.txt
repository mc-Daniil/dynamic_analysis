cmake_minimum_required(VERSION 3.20) # Минимальная версия CMake
project(MyProgram) # Название проекта
set(CMAKE_C_STANDARD 11) # Стандарт C

set(CMAKE_C_FLAGS_DEBUG "-g -O0") # Флаги для отладки
set(CMAKE_C_FLAGS_RELEASE "-O2 -s") # Флаги для релиза

# Бинарник из нескольких исходников
add_executable(main main.c utils.c)
add_custom_command(TARGET main POST_BUILD
    COMMAND $<TARGET_FILE:main>
    COMMENT "Запуск main после сборки"
) # Запуск программы после сборки