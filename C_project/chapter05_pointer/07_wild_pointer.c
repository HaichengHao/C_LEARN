//
// Created by 郝海程 on 2024/3/25.
//野指针
/*
 *
 * 野指针：就是指针指向的位置是不可知（`随机性`，`不正确`，`没有明确限制的`）。
 * 野指针的成因
     * 指针使用前未初始化
     * 指针越界访问
     * 指针指向已释放的空间
 * 野指针的避免
     *指针初始化
     * 小心指针越界
     * 避免返回局部变量的地址
     * 指针指向空间释放，及时置为NULL
     * 指针使用之前检查有效性
 * */

//错误示例不演示，防止混淆

//避免方法演示

/*
#include<stdio.h>

int main() {
    int *p = NULL; //空指针不要与未初始化的指针混淆

    int b = 8;
    p = &b;   //显式赋值
    *p = 100;
    printf("%d\n", *p);  //100
    printf("%d\b", b);   //100

    return 0;
}
*/

#include <stdio.h>
int main(){
    int a = 10;
    int* pa = &a;
    printf("%d\n", *pa);
//    指针指向空间释放，及时置NULL

    pa = NULL;				//把pa指针置成NULL

    printf("%d\n",pa);
}

