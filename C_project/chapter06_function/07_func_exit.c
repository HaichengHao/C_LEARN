//
// Created by 郝海程 on 2024/3/27.
// 关于exit()函数
/*
 * exit() 函数用来终止整个程序的运行。一旦执行到该函数，程序就会立即结束。该函数的原型定义在头文件 `stdlib.h` 里面。

exit() 可以向程序外部返回一个值，它的参数就是程序的返回值。一般来说，使用两个常量作为它的参数，这两个常量也是定义在 stdlib.h 里面：

- EXIT_SUCCESS （相当于 0）表示程序运行成功，正常结束；

- EXIT_FAILURE （相当于 1）表示程序异常中止。*/
#include <stdio.h>
#include <stdlib.h>

void show(){
    printf("hello world\n");
    exit(EXIT_SUCCESS);//对应的值为0
    printf("hello world2\n"); //退出成功的话这行是不会执行的
}
void print(void) {
    printf("something wrong!\n");
}
int main(){
    printf("hello world0\n");
    show();//调用show()
    atexit(print);//在程序结束前

    return 0;
}
//C 语言还提供了一个 atexit() 函数，用来登记 exit() 执行时额外执行的函数，用来做一些退出程序时的收尾工作。该函数的原型也是定义在头文件 stdlib.h 。
//int atexit(void (*func)(void));