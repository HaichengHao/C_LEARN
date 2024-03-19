////
//// Created by 郝海程 on 2024/3/16.
////
///*
//*  变量按数据类型的分类
//*      1 基本数据类型
//        *            整型
//*                  短整型 short int
//        *                  整型  int
//        *                  长整型 long
//        *            浮点型
//*                  单精度型 float
//        *                  双精度型 double
//        *            字符型 char
//*
//*      2 构造类型
//        *           数组类型
//*           结构体类型 struct
//        *           共用体    union
//        *           枚举类型   enum
//*      3 指针类型
//*      4 空类型 void
//*      5 后续会学到的类型
//        *              整形新增 long long
//        *              浮点型 long double
//        *              布尔类型 _Bool
//*
//* */
//
//
////
//
///*
// * - C语言规定了如下的几类整型：短整型(short)、整型(int)、长整型(long)、更长的整型(long long)
//
//   - 每种类型都可以被 signed 和unsigned 修饰。其中，
//
//   - 使用 `signed 修饰`，表示该类型的变量是带符号位的，有正负号，可以表示负值。`默认是signed`。
//   - 使用 `unsigned 修饰`，表示该类型的变量是不带符号位的，没有有正负号，只能表示零和正整数。
//
//   - bit(位)：计算机中的最小存储单位。
//
//     byte(字节)：计算机中基本存储单元。
//
//     1byte = 8bit */
///*
// * 1 short\int\long\long long
// * 以64位编译器为例
// *     short: 2字节
// *     int: 4字节
// *     long: 8字节
// *     long long: 8字节  (C99新增的)
// * 2 整形可以被 signed 、 unsigned修饰
// * 3 最常用的整形:int类型
// * 4 整数型常量，默认为int类型,
// * 5 关于后缀:
// *      声明long 类型变量时，可以用后缀'l'或‘L’结尾
// *      如果希望字面量指定为long long类型，则后缀以`ll`或`LL`结尾。
// *      如果希望指定为无符号整数 unsigned int ，可以使用后缀 `u` 或 `U` 。
// *      L 和 U 可以结合使用，表示 unsigned long 类型。 L 和 U 的大小写和组合顺序无所谓。
//
//        u 还可以与其他整数后缀结合，放在前面或后面都可以，比如 10UL 、 10ULL 和 10LLU 都是合法的。
//
//        unsigned long int  x = 1234UL;
//        unsigned long long int x = 1234ULL;
//
//
//####
// *      */
//#include <stdio.h>
//void main(){
//    int i1 = 10; //省略了signed
//    signed int i2 = 10; //无符号数,即表示为非负数
//    i1 = -10;
////    关于后缀
//    long l1=12111111111L;  //4字节时：-2147483648 ~ 2147483647 -(2^31) ~ 2^31-1
//
//}