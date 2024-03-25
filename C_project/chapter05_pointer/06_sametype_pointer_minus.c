//
// Created by 郝海程 on 2024/3/25.
//
/*
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = &arr[0];
    int *p2 = &arr[3];
    printf("p1的地址为：%d\n", p1); //497022544
    printf("p2的地址为：%d\n", p2); //497022556
    printf("p2-p1=%d\n", p2 - p1); //3 等同于 (497022556 - 497022544)/4 ==> 3
//体会：两个指针相减，通常两个指针都是指向同一数组中的元素才有意义。结果是两个地址之差除以数组元素的类型长度。不相干的两个变量的地址，通常没有做减法的必要。
    return 0;
}
 */

//指针之间的比较运算
//指针之间的比较运算，比如 ==、!= 、<、 <= 、 >、 >=。比较的是各自的内存地址的大小，返回值是整数 1 （true）或 0 （false）。
/*
#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = &arr[0];
    int *p2 = &arr[3];

    printf("%d\n",p1 > p2);  //0
    printf("%d\n",p1 < p2);  //1
    printf("%d\n",p1 == p2); //0
    printf("%d\n",p1 != p2); //1
    return 0;
}*/
