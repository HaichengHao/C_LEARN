//
// Created by 郝海程 on 2024/3/30.
//



//关于const
//如果想限制 ptr不能修改 ，可以把 const 放在 ptr 前面，此时即为常量指针

//情况1 ：常量的情况
/*
#include <stdio.h>
int main(){
    const int num = 10;
//    num ++;  //被const修饰的变量会变成常量，常量无法进行直接修改
    return 0;

}*/


//情况2 指向常量的指针
/*
#include <stdio.h>
int main(){
    int num = 10;
    const int *ptr = &num;
//    *ptr = 20; //报错，指向常量的指针

    int num1 = 20;
    ptr = &num1; //没有报错
    return 0;

}
*/
//情况3 常量指针
/*
#include <stdio.h>
int main(){
    int num = 10;
    int * const ptr = &num;

    int num1 = 20;
//    ptr = &num1; //报错  ,因为这时候ptr是个常量指针，不能够修改
    return 0;

}*/

//  结合2,3希望是一个常量指针同时希望这个值也不发生改变
/*
#include <stdio.h>
int main(){
    int num = 10;
    const int * const ptr = &num;

    int num1 = 20;
//    ptr = &num1; //报错
    return 0;

}*/

//情况4  常量参数
/*
#include <stdio.h>
void func5(const int num){
//    num++; //这样就会报错，因为已经规定了传入的参数是一个常量，那么对于函数内的形参其实也是不能修改的
}
*/

//情况5 常量数组
void func6(const int *arr[][4]){
//    arr[0][0] = 100;// 会报错，因为已经声明数组arr[][4]作为常量，即变成了常量数组，所以其不可以再次修改
}