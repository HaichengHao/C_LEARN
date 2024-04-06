//
// Created by 郝海程 on 2024/3/27.
// 函数原型
/*
 * 函数必须先声明，后使用。由于程序总是先运行 main() 函数，所以其它函数都必须在main()之前声明。*/

//正常都是先声明后使用
//#include <stdio.h>
//void func1() {
//    //...
//}
//void func2() {
//    //...
//}
//int main() {
//     func1();
//     func2();
//     return 0;
//}

//对于函数较多的程序，保证每个函数的顺序正确，会变得很麻烦。C 语言提供的解决方法是，只要在程序开头处给出函数原型，函数就可以先使用、后声明。
//所谓`函数原型(function prototype)`，就是函数在调用前提前告诉编译器每个函数的基本信息(它包括了返回值类型、函数名、参数个数、参数类型和参数顺序)，其它信息都不需要（不用包括函数体、参数名），函数具体的实现放在哪里，就不重要了。在函数调用时，检查函数原型和函数声明是否一致，只要一致就可以正确编译、调用。

#include <stdio.h>
void func1(),func2();
int add(int, int);   //函数原型
int main() {
    func1();  //报错
    func2();  //报错
    int sum=add(1,4);
    printf("sum=%d\n",sum);
    return 0;
}
void func1() {
    //...
}
void func2()
{
    //...
}
int add(int num1, int num2) {
    return num1 + num2;
}