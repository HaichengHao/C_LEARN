//
// Created by 郝海程 on 2024/3/26.
//  指针带下标和数组名带下标的使用
/*
 * 指向数组元素的指针变量也可以带下标，如`p[i]`。
 * p[i]被处理成`*(p+i)`，如果p是指向一个整型数组元素a[0]，则p[i]代表a[i]。
 * 但是必须弄清楚p的当前值是什么？**如果当前p指向a[3]，则p[2]并不代表a[2]，而是a[3+2]，即a[5]。
 *
 *
 *
 * */

//数组带下标的使用
/*
#include <stdio.h>
int main() {
    int a[5] = {10,20,30,40,50};
    int *p = a;

    //遍历数组元素
    for(int i = 0;i < 5;i++){
        printf("%d ",p[i]);
    }
    printf("\n");

    //注意：
    p++;
    printf("%d ",p[0]); //20

    return 0;
}*/

//&数组名
#include <stdio.h>

int main() {
    int arr[5] = {0};
    printf("arr = %p\n", arr);        //000000cade5ff750
    printf("&arr= %p\n", &arr);       //000000cade5ff750
    printf("arr+1 = %p\n", arr + 1);    //000000cade5ff754
    printf("&arr+1= %p\n", &arr + 1);   //000000cade5ff764

    return 0;
}

//&arr 理解为`数组的地址`，而不要理解为数组首元素a[0]的地址。
//
//本例中 &arr 的类型是： int(*)[5] ，是一种数组指针类型。数组的地址+1，跳过整个数组的大小，所以 &arr+1 相对于 &arr 的差值是20。
