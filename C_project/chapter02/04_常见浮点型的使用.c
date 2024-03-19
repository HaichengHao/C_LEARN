//
// Created by 郝海程 on 2024/3/16.
//
/*
 *浮点型变量，也称为实型变量，用来存储小数数值的。因为32位浮点数提供的精度或者数值范围还不够，C 语言又提供了另外两种更大的浮点数类型。

在C语言中，浮点型变量分为三种：单精度浮点型(float)、双精度浮点型(double)、长双精度浮点型(long double)。
 */
//#include <stdio.h>
//int main(){
////    常用数据类型:float(4字节)\double(8字节)\long double(12字节)
////    float表示数据范围要大于long类型表示的范围
////    浮点型变量不能使用signed或unsigned修饰符。
////    最常用的浮点类型为：double 类型，因为精度比float高。
////    浮点型常量，默认为 double 类型。
//    float a = 1.0;
//    double b = a + 2.33 ;
////    对于浮点数，编译器默认指定为 double 类型，
////    如果希望指定为float类型，需要在小数后面添加后缀 `f`或`F`；
////    如果希望指定为long double类型，需要在小数后面添加后缀 `l`或`L`
//    float c = 12.3f;
//    float d = 12.7F;
//    float e = 13.56L; //long double类型
//    return 0;
//}

//练习题
//华氏度与摄氏度
//转化关系 c =5/9*(f-32)
//#include <stdio.h>
//int main(){
////    setbuf(stdout, NULL);
//    float c,f;
//    printf("请输入摄氏度>>");
//    scanf("%f",&c);
//    f = 9 * c / 5 + 32;
//    printf("华氏度为%.2f \n",f);
//
//    return 0;
//}

