﻿//
// Created by 郝海程 on 2024/3/26.
//
#include <stdio.h>
int main(){
    int a[10]={2,4,6,8,10,12,14,16,18,20};
    int *p;
    p = &a[0]; //指针变量p指向数组a的元素索引位置为0即对应数字2的地址

    int *q;
    q = a; //指针变量q指向数组a的首地址，注意是数组的首地址，而不是数组元素的首地址
    printf("%p\n,%p\n", p, q);
//    `数组元素的指针就是数组元素的地址`。可以用一个指针变量指向一个数组元素。
//    00000084dcfff7e0
//    00000084dcfff7e0
//  scanf("%d", 整型变量的地址(一般写&变量名))
//数组本身就表示一个地址，如果给一个数组元素扫描赋值，那么可以不用写&
//    char arr[10];
//    scanf("%s", arr); //这里就不用写&符号
//    puts(arr);


    return 0;

}