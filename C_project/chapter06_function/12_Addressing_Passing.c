//
// Created by 郝海程 on 2024/3/28.
//
/*
 *
 * 数组名本身就代表该数组首地址，传数组的本质就是传地址。

因此，把数组名传入一个函数，就等同于传入一个指针变量。在函数内部，就可以通过这个指针变量获得整个数组。*/

#include <stdio.h>
void test1(int a, int b, int c) {
    a += 1;
    b += 1;
    c += 1;
}

void test2(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] += 1;
    }
}

int main() {
    //测试test1()
    int arr1[3] = {1, 2, 3};
    printf("调用函数前数组各元素值为： ");
    printf("%d,%d,%d\n", arr1[0], arr1[1], arr1[2]); //1,2,3
    test1(arr1[0], arr1[1], arr1[2]); //只是值传递，不影响原来的数的值
    printf("调用函数后数组各元素值为： ");
    printf("%d,%d,%d\n", arr1[0], arr1[1], arr1[2]); //1,2,3

    //测试test2()
    int arr2[3] = {1, 2, 3};
    printf("调用函数前数组各元素值为：");
    printf("%d,%d,%d\n", arr2[0], arr2[1], arr2[2]); //1,2,3
    test2(arr2, 3); //地址传递，这样可以通过指定索引位置来修改值
    printf("调用函数后数组各元素值为： ");
    printf("%d,%d,%d\n", arr2[0], arr2[1], arr2[2]); //2,3,4

    return 0;
}