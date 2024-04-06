//
// Created by 郝海程 on 2024/3/29.
//
/*
 *指向函数a的指针变量的一个重要用途是把函数a的入口地址作为参数传递到其它函数b中，此时的函数b就称为`回调函数`。在此基础上，我们就可以在回调函数b中使用实参函数a。

它的原理可以简述如下: 有一个函数（假设函数名为fun），它有两个形参（x1和x2），定义x1和x2为指向函数的指针变量。在调用函数fun时，实参为两个函数名f1和f2，给形参传递的是函数f1和f2的入口地址。这样在函数fun中就可以调用f1和f2函数了。
 * */

//有两个整数a和b，由用户输入1,2或3。如输入1，程序就给出a和b中的大者，输入2，就给出a和b中的小者，输入3，则求a与b之和。

#include <stdio.h>

int fun(int x, int y,int(*p)(int,int)){
    //通过函数指针调用指向的函数
    int result = (*p)(x,y);
    return result;

}
int max(int x,int y){
    if(x>y){
        return x;
    }
    return y;
}
int min(int x,int y){
    if(x>y){
        return y;
    }
    return x;
}
int sum(int x , int y){
    int sum = x+y;
    return sum;
}


int main(){
    int a = 10,b=20;
    int m;
    printf("请输入一个整数(1,2或3)");
    scanf("%d",&m);
    int result;
    switch(m){
        case 1:
            result = fun(a,b,max);
            break;
        case 2:
            result = fun(a,b,min);
            break;
        case 3:
            result = fun(a,b,sum);
            break;
    }
    printf("result = %d",result);

    return 0;
}