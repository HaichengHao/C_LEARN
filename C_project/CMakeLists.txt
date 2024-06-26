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
        chapter04_array/02_othermethod_of_def_one_dimensional_arry.c
        chapter04_array/03_Arry_exercise.c
        chapter04_array/04_arry_copy.c
        chapter04_array/05_reverse_arry.c
        chapter04_array/06_char_arry_and_string.c
        chapter04_array/07_multi_dimensional_arry.c
        chapter05_pointer/01_pointer_overview.c
        chapter05_pointer/02_Addressing_operator.c
        chapter05_pointer/03_Value_operator.c
        chapter05_pointer/04_Common_operations_for_pointers.c
        chapter05_pointer/05_zhizhendezizengzijian.c
        chapter05_pointer/06_sametype_pointer_minus.c
        chapter05_pointer/07_wild_pointer.c
        chapter05_pointer/07multipointer.c
        chapter05_pointer/08_pointer_and_arry.c
        chapter05_pointer/08_2pointer_and_arry.c
        chapter05_pointer/09Pointers_with_subscripts_and_the_use_of_array_names.c
        chapter05_pointer/10Two_dimensional_arrays_and_pointers.c
        chapter05_pointer/11_pointer_arry_and_arry_pointer.c
        chapter05_pointer/12_char_arry_and_char_pointer_variable.c
        chapter05_pointer/13_expression_of_str_arry.c
        chapter05_pointer/14_ExTeNd.c
        chapter06_function/01_declaration_of_function.c
)
add_executable(02_othermethod_of_def_one_dimensional_arry chapter04_array/02_othermethod_of_def_one_dimensional_arry.c)
add_executable(03_Arry_exercise chapter04_array/03_Arry_exercise.c)
add_executable(04_arry_copy chapter04_array/04_arry_copy.c)
add_executable(05_reverse_arry chapter04_array/05_reverse_arry.c)
add_executable(06_char_arry_and_string chapter04_array/06_char_arry_and_string.c)
add_executable(07_multi_dimensional_arry chapter04_array/07_multi_dimensional_arry.c)
add_executable(01_pointer_overview chapter05_pointer/01_pointer_overview.c)
add_executable(02_value_operator chapter05_pointer/02_Addressing_operator.c)
add_executable(03_Value_operator chapter05_pointer/03_Value_operator.c)
add_executable(04_Common_operations_for_pointers chapter05_pointer/04_Common_operations_for_pointers.c)

add_executable(05_zhizhendezizengzijian chapter05_pointer/05_zhizhendezizengzijian.c)
add_executable(06_sametype_pointer_minus chapter05_pointer/06_sametype_pointer_minus.c)
add_executable(07multipointer chapter05_pointer/07multipointer.c)
add_executable(08_pointer_and_arry chapter05_pointer/08_pointer_and_arry.c)
add_executable(08_2pointer_and_arry chapter05_pointer/08_2pointer_and_arry.c)
add_executable(10Two_dimensional_arrays_and_pointers chapter05_pointer/10Two_dimensional_arrays_and_pointers.c)
add_executable(11_pointer_arry_and_arry_pointer chapter05_pointer/11_pointer_arry_and_arry_pointer.c)
add_executable(13_expression_of_str_arry chapter05_pointer/13_expression_of_str_arry.c)
add_executable(14_ExTeNd chapter05_pointer/14_ExTeNd.c)
add_executable(01_declaration_of_function chapter06_function/01_declaration_of_function.c
        chapter06_function/02_ReTuRn.c
        chapter06_function/03_FuNcAtIoN_cAlLs.c
        chapter06_function/04_exercise.c
        chapter06_function/05_exercise02.c
        chapter06_function/06Extend_of_mainfunc.c
        chapter06_function/08_Function_prototypes.c
        chapter06_function/09Parameter_passing_mechanism.c
        chapter06_function/10_value_passing.c
        chapter06_function/10_VaLuE_passing2.c
        chapter06_function/11_Address_passing.c
        chapter06_function/12_Addressing_Passing.c
        chapter06_function/13_Arry_transfer.c
        chapter06_function/14_Str_as_formal_args.c
        chapter06_function/15_ExErCiSe.c
        chapter06_function/16_ReCurSion.c
        chapter06_function/17_variable_ArGuments.c
        chapter06_function/18_PoInter_ArGuments.c
        chapter06_function/19_func_PoInter.c
        chapter06_function/20_Callback_function.c
        chapter06_function/21_VariAble.c
        chapter06_function/22_VariaBle02.c
        chapter06_function/24_Register_extern_const.c
        "chapter07_Structer/01Declarations_of_structs .c"
        chapter07_Structer/02_StRuct_test.c
)
add_executable(02_ReTuRn chapter06_function/02_ReTuRn.c)
add_executable(03_FuNcAtIoN_cAlLs chapter06_function/03_FuNcAtIoN_cAlLs.c)
add_executable(04_exercise chapter06_function/04_exercise.c)
add_executable(05_exercise02 chapter06_function/05_exercise02.c)
add_executable(06Extend_of_mainfunc chapter06_function/06Extend_of_mainfunc.c)


add_executable(07_func_exit chapter06_function/07_func_exit.c)
add_executable(09Parameter_passing_mechanism chapter06_function/09Parameter_passing_mechanism.c)
add_executable(10_value_passing chapter06_function/10_value_passing.c)
add_executable(10_VaLuE_passing2 chapter06_function/10_VaLuE_passing2.c)
add_executable(11_Address_passing chapter06_function/11_Address_passing.c)
add_executable(12_Addressing_Passing chapter06_function/12_Addressing_Passing.c)
add_executable(13_Arry_transfer chapter06_function/13_Arry_transfer.c)
add_executable(15_ExErCiSe chapter06_function/15_ExErCiSe.c)
add_executable(16_ReCurSion chapter06_function/16_ReCurSion.c)
add_executable(18_PoInter_ArGuments chapter06_function/18_PoInter_ArGuments.c)
add_executable(19_func_PoInter chapter06_function/19_func_PoInter.c)
add_executable(20_Callback_function chapter06_function/20_Callback_function.c)
add_executable(21_VariAble chapter06_function/21_VariAble.c)

add_executable(22_VariaBle02 chapter06_function/22_VariaBle02.c)

add_executable(23_Dynamic_and_Static_storage chapter06_function/23_Dynamic_and_Static_storage.c)
add_executable(01Declarations_of_structs  "chapter07_Structer/01Declarations_of_structs .c")