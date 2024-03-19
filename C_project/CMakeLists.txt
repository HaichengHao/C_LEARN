cmake_minimum_required(VERSION 3.27)
project(C_project C)

set(CMAKE_C_STANDARD 99)

add_executable(C_project main.c
        chapter01/01_HelloWord.c)

add_executable(01_HelloWord chapter01/01_HelloWord.c
        chapter01/02_Comment.c
        chapter01/03_helloworld的剖析.c
        chapter01/04_printf实现细节.c
        chapter02/01_标识符.c
        chapter02/02变量的定义与分类.c
        chapter02/03_常见整型.c
        chapter02/04_常见浮点型的使用.c
        C_BOOK/01_1st.c
        C_BOOK/02_变量定义.c
        chapter02/05_字符类型.c
        chapter02/06_bool类型.c
        chapter02/07_变量间的运算规则.c
        chapter02/08_常量.c)
