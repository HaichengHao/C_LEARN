//
// Created by 郝海程 on 2024/3/27.
// 形参、实参
//* `形参（formal parameter）`：在定义函数时，函数名后面括号()中声明的变量称为`形式参数`，简称`形参`。
//* `实参（actual parameter）`：在调用函数时，函数名后面括号()中使用的值/变量/表达式称为`实际参数`，简称`实参`。

#include <stdio.h>
void increment(int a) {
    a++;
    printf("a = %d\n",a); // a = 11
}
int increament1(int a) {
    a++;
    return a;
}

int main(){
    int i = 10;
    printf("i = %d\n", i); // i = 10
    increment(i);
    printf("i = %d\n", i); // i = 10

    i = increament1(i);
    printf("%d",i); //11
    return 0;
}