//
// Created by 郝海程 on 2024/3/27.
//函数的调用与练习

#include <stdio.h>
# define MAX 7;
void hello1(){
    printf("Hello\n");

}
void hello2(){
    printf("Hello2\n");
    hello1();//函数之间是可以调用的，但是不能调用main函数，main函数可以调用其它函数
}

int main(){
    hello1();
    return 0;
}
//将实参传递给函数的形参，要求实参的类型与形参的类型一致即可

