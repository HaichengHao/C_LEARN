cmake_minimum_required(VERSION 3.27)
project(C_project C)

set(CMAKE_C_STANDARD 99)

add_executable(C_project main.c
        chapter01/01_HelloWord.c
        )

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
        chapter02/08_常量.c
        chapter02/09_输入输出函数.c
        chapter02/10_进制.c
        chapter02/11_原反补码.c
        chapter02/demo.c
        chapter03_operator_seqcontrol/01_operator.c
        chapter03_operator_seqcontrol/02_Assignment_operators.c
        chapter03_operator_seqcontrol/03_Comparison_operators.c
        chapter03_operator_seqcontrol/04_Logical_operators.c
        chapter03_operator_seqcontrol/05_Bitwise_operators.c
        chapter02/12_Conditional_operators.c
        "chapter02/13_sizeof.c"
        chapter03_seqcontrol/01_if_else.c
        chapter03_seqcontrol/02_switch_case.c
        chapter03_seqcontrol/03_for_loop.c
        chapter03_seqcontrol/04_while_loop.c
        chapter03_seqcontrol/05_do_while.c
        chapter03_seqcontrol/06_infinity_loop.c
        chapter03_seqcontrol/07_Nested_loops.c
        chapter03_seqcontrol/08_break_continue_detail.c
        chapter03_seqcontrol/09_goto_label.c
        chapter04_array/01_definition_of_a_one_dimensional_arry.c
)

add_executable(04_Logical_operators chapter03_operator_seqcontrol/04_Logical_operators.c)
add_executable(05_Bitwise_operators chapter03_operator_seqcontrol/05_Bitwise_operators.c)
add_executable(12_Conditional_operators chapter02/12_Conditional_operators.c)
add_executable(13_sizeof chapter02/13_sizeof.c)
add_executable(01_if_else chapter03_seqcontrol/01_if_else.c)
add_executable(02_switch_case chapter03_seqcontrol/02_switch_case.c)
add_executable(03_for_loop chapter03_seqcontrol/03_for_loop.c)
add_executable(04_while_loop chapter03_seqcontrol/04_while_loop.c)
add_executable(05_do_while chapter03_seqcontrol/05_do_while.c)
add_executable(06_infinity_loop chapter03_seqcontrol/06_infinity_loop.c)
add_executable(07_Nested_loops chapter03_seqcontrol/07_Nested_loops.c)
add_executable(08_break_continue_detail chapter03_seqcontrol/08_break_continue_detail.c)
add_executable(09_goto_label chapter03_seqcontrol/09_goto_label.c)
add_executable(01_definition_of_a_one_dimensional_arry chapter04_array/01_definition_of_a_one_dimensional_arry.c
        chapter04_array/02_othermethod_of_def_one_dimensional_arry.c)
add_executable(02_othermethod_of_def_one_dimensional_arry chapter04_array/02_othermethod_of_def_one_dimensional_arry.c)