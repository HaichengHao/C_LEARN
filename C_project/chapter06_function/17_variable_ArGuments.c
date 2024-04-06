//
// Created by 郝海程 on 2024/3/29.
//可变参数

/*
 *
1. 为了使用可变参数，你需要引入`<stdarg.h>`头文件。
2. 在函数中，需要声明一个`va_list`类型的变量来存储可变参数。它必须在操作可变参数时，首先使用。
3. 使用`va_start`函数来初始化`va_list`类型的变量。它接受两个参数，参数1是可变参数对象，参数2是原始函数里面，可变参数之前的那个参数，用来为可变参数定位。
4. 使用`va_arg`函数来逐个获取可变参数的值。每次调用后，内部指针就会指向下一个可变参数。它接受两个参数，参数1是可变参数对象，参数2是当前可变参数的类型。
5. 使用`va_end`函数来结束可变参数的处理。*/
//测试可变参数的函数
#include <stdio.h>
#include <stdarg.h>


//声明一个可变参数的函数，用于计算多个数的平均值
#include <stdio.h>
#include <stdarg.h>

// 可变参数函数，计算多个整数的平均值
double average(int count, ...) {
    va_list args; // 声明一个va_list变量，存储可变参数
    va_start(args, count); // 初始化va_list，指向可变参数的位置
    double sum = 0;

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int); // 逐个获取整数参数
        sum += num;
    }

    va_end(args); // 结束可变参数的处理

    return sum / count;
}

int main() {
    double avg = average(5, 10, 20, 30, 40, 50); // 调用可变参数函数
    printf("Average: %lf\n", avg);

    return 0;
}