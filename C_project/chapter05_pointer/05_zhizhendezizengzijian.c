﻿// Created by 郝海程 on 2024/3/25.
//指针的自增自减运算
/*指针类型变量也可以进行自增或自减运算，p++ 、 p-- 、 ++p 、--p
 * ++和--在运算符章节已经讲过，这里针对指针的增加或减少指的是内存地址的向前或向后移动。
 * - 当对指针进行++时，指针会按照它指向的数据类型字节数大小增加，比如 int * 指针，每 ++ 一次， 就增加4个字节。
- 当对指针进行--时，指针会按照它指向的数据类型字节数大小减少，比如 int \* 指针，每 -- 一次， 就减少4个字节
 * */
/*
#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = &arr[0];
    int *p2 = &arr[3];
    printf("p1的值为：%d\n", *p1);        //1
    printf("++p1的值为：%d\n", *(++p1));  //2
    printf("p1的值为：%d\n", *p1);        //2

    printf("p1的地址为：%p\n", p1);      //00000055c0bff704
    printf("p1++的地址为：%p\n", ++p1);  //00000055c0bff708


    printf("p2的值为：%d\n", *p2);       //4
    printf("--p2的值为：%d\n", *(--p2)); //3
    printf("p2的值为：%d\n", *p2);//3
    printf("p2的值为:%d\n",*p2); //3
    printf("p2--的值为:%d\n",*(p2--));//3 先赋值后运算，所以还是3
    printf("p2的值为:%d\n",*p2); //2 这里因为上面已经是p2--了，即索引位置前移一下，那么就是从索引位置2变为索引位置1，即数字2
    return 0;
}
 */

//利用++ -- 来遍历数组
#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = &arr[0];
    for(int i=0;i<5;i++){
        printf("%d",*p1);
        p1++;
    }
    return 0;
}
