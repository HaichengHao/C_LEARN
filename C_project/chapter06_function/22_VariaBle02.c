//
// Created by 郝海程 on 2024/3/30.
//
#include <stdio.h>

int counter = 10; //声明周期在整个程序运行的尺度上，就这么一个数，所以第二次add()调用是在第一个add()的基础之上
//即 add() -- > 10+1->11  ; add() --> 11+1 ->12

void add(){
    counter++;
    printf("counter = %d\n",counter);
}


int main() {
    add();
    add();
    printf("counter = %d\n",counter); //counter = 12
    //局部变量在使用前必须显式赋值，而全局变量如果没有显式初始化，它们会被自动、默认初始化为零或空值，具体取决于数据类型。
    int counter = 100;
    printf("counter = %d\n",counter); //counter = 100 //这里是就近原则
    return 0;
}
