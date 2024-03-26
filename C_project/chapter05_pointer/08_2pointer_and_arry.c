//
// Created by 郝海程 on 2024/3/26.
//
#include <stdio.h>
int main(){
    int a[10]={2,4,6,8,10,12,14,16,18,20};
    int *p = &a[0];
//    a[0]的地址:&a[0]、p、a
    printf("%p\n",&a[0]);
    printf("%p\n",a);
    printf("%p\n",p);
//00000053cf7ff9e0
//00000053cf7ff9e0
//00000053cf7ff9e0
//      a[0]的数据值
    printf("%d\n",a[0]);
    printf("%d\n",*p);
    printf("%d\n",*a);
//2
//2
//2
    return 0;

}