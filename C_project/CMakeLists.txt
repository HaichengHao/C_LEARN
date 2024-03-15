cmake_minimum_required(VERSION 3.27)
project(C_project C)

set(CMAKE_C_STANDARD 99)

add_executable(C_project main.c
        chapter01/01_HelloWord.c)

add_executable(01_HelloWord chapter01/01_HelloWord.c
        chapter01/02_Comment.c
        chapter01/03_helloworld的剖析.c
        chapter01/04_printf实现细节.c)