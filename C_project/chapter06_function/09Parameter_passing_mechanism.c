//
// Created by 郝海程 on 2024/3/27.
//参数传递机制
#include <stdio.h>
#include <stdbool.h>
int main(){

//    情况1:针对基本数据类型
    int a = 10;
    int b = a;
    printf("a = %d, b = %d\n", a, b);//a=10,b=10
    b = 20;
    printf("a = %d, b = %d\n", a, b);//a=10,b=20

    //情况2:
    int arr[5] ={0,1,2,3,4,5};
    int *arr2;
    arr2 = arr;
//    遍历
    for(int i = 0; i < 5; i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

    arr2[0] = 10;
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ",arr[i]);
    }
//0 1 2 3 4
//10 1 2 3 4
//   情况3，针对指针变量来讲，将指针变量保存的地址传递给新的变量

    int i = 10;
    int *p;
    p = &i;
    printf("%d\n",*p);
    printf("%p\n",&p);

    int *q =p; //把p的值(p是指针变量，其存放的值就是变量i的地址)
    *q = 20;
    printf("%d\n",*p);//20



    return 0;
}