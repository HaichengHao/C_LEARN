//
// Created by 郝海程 on 2024/3/28.
//
//地址传递

//#include <stdio.h>
//void increament(int *a){
//    (*a)++; //取出a中的值并让这个值+1
//    printf("%d\n",*a);
//}
//
//int main(){
//    int a = 10;
//    int *i;
//    i = &a;
//    printf("%d\n",*i);//*i也可以写成a
//    increament(i);
//    printf("%d\n",a); //注意 a也可以写成*i
//
//}

//对于之前2值互换的新思路
#include <stdio.h>
void swap(int *a, int *b) { //函数参数为指针类型
    int temp = *a; //把a的值赋给temp
    *a = *b; //把b的值赋给a
    *b = temp; //把temp的值赋给b
    printf("*a = %d,*b = %d\n", *a, *b);  //输出交换后的结果
}

int main() {
    int x = 6, y = 8;
    printf("调用函数之前：\n");
    printf("x = %d,y = %d\n", x, y); //输出调用swap()函数之前x,y的值

    swap(&x, &y);               //调用swap()函数
    printf("调用函数之后:\n");
    printf("x = %d,y = %d\n", x, y); //输出调用swap()函数之后x,y的值
}