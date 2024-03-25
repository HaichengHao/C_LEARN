//
// Created by 郝海程 on 2024/3/25.
// 多重指针
/*一个指针p1记录一个变量的地址。由于指针p1也是变量，自然也有地址，那么p1变量的地址可以用另一个指针p2来记录。则p2就称为`二级指针`
 * 简单理解，创建一个指针变量，它能指向一个指针变量的地址
 * 简单来说，二级指针即一个指针变量的值是另外一个指针变量的地址。通俗来说，二级指针就是指向指针的指针。
 * 如
 *      int a = 10  a的值为10，假设地址为0x00
 *      int *p = &a; 创建一个指针变量，其值为a的地址0x00 ,其本身也有一个自己的内存地址 0x04
 *      int **pp = &p; 创建一个二重指针，其值为指针p的地址0x04,即二重指针变量pp 指向p的地址空间0x04;当然，二重指针本身也是有内存地址的
 *      依此类推，三级指针，四级指针便都可以理解了
 * */

/*#include <stdio.h>
int main(){
    int i = 10;
    int *p = &i;
    int **pp = &p;
    printf("i=%d , position = %p\n",i,&i);
    printf("p=%x , position = %p\n",p,&p);
    printf("pp=%x , position = %p\n",pp,&pp);
    return 0;
}*/
//i=10 , position = 00000055275ff85c
//p=275ff85c , position = 00000055275ff850  <--可以看到指针变量p的值就是i的地址
//pp=275ff850 , position = 00000055275ff848 <--可以看到二重指针pp的值就是p的地址

#include <stdio.h>
int main() {
    int var = 3000;
    int *ptr = &var;        // 一级指针指向 var
    int **pptr = &ptr;      // 二级指针指向 ptr
    int ***ppptr = &pptr;   // 三级指针指向 pptr

    printf("Value of var: %d\n", var);
    printf("Value of ptr: %d\n", *ptr);         // 解引用一次
    printf("Value of pptr: %d\n", **pptr);      // 解引用两次
    printf("Value of ppptr: %d\n", ***ppptr);   // 解引用三次

    return 0;
}