﻿//
// Created by 郝海程 on 2024/3/21.
//
/*
 *
 * ### 位运算符

- C 语言提供一些位运算符，用来操作二进制位（bit）。

- 位运算符的运算过程都是基于二进制的补码运算。

| 运算符 | 描述       | 运算规则                                                     |
| ------ | ---------- | ------------------------------------------------------------ |
| <<     | 二进制左移 | 将一个数的各二进制位全部左移指定的位数，左边的二进制位丢弃，右边补0。 |
| >>     | 二进制右移 | 将一个数的各二进制位全部右移指定的位数，正数左补0，负数左补1，右边丢弃。 |
| &      | 按位与     | 两个二进制位都为 1，结果为1，否则为0。                       |
| \|     | 按位或     | 两个二进制位只要有一个为1（包含两个都为 1 的情况），结果为1，否则为0。 |
| ^      | 按位异或   | 两个二进制位一个为0，一个为1，结果为1，否则为0。             |
| ~      | 按位取反   | 将每一个二进制位变成相反值，即 0 变成 1 ， 1 变成 0 。       |
 结合赋值运算符的经验，这里有：<<= 、 >>= 、 &= 、 ^= 等*/

//#include <stdio.h>
//
//int main(){
//
//    int a = 2;
//    printf("%d\n", a<<2); //a右移2位 在二进制的角度下 0010 右移两位即为 1000 ->十进制为8
////    经典面试题 高效计算2*8
//    int b = 2;
//    printf("%d\n", b<<3); //b右移2位 在二进制的角度下 0010 右移三位即为 10000 ->十进制为16
//    return 0;
//}

// 与或非异或 取反
//// 异或 -> 同则为0，异则为1
//#include <stdio.h>
//int main(){
//    int a = 2;
//    int b = 4;
//    printf("%d\n", a^b);
////    按位取反 (在补码的基础上取反)
//    int c = ~a; // a 0010 反 1101 高位为1，是补码，所以要转回原码,即-1为1100，之后取反为0011 = 3
//    printf("%d\n", c);
//    return 0;
//}
//6 <-- 2(0010) ^ 4(0100) --> 0110(6)

//**练习2：特定位清零**
//
//        技巧：待清零的位与0，其它位与1
//
//        示例：设字符型 x 的当前值为 53，将其最低两位清 0，其余位保持不变
//
//        分析：与二进制的0b11111100数值求&运算即可。
//

#include <stdio.h>
int main() {
    int x = 53; // 0b00110101
    x = x & 252; // 0b11111100
    printf("%d", x); //0b00110100
    return 0;
}

