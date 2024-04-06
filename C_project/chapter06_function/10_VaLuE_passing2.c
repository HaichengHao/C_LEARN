//
// Created by 郝海程 on 2024/3/28.
//
#include <stdio.h>
int swap( int ,int); //函数原型
int main(){
    int a = 6;
    int b = 8;
    swap(a, b); //8 6 返回的是a,b交换后的，但是
    printf("%d %d\n", a, b); //6  8 其实原始的a,b值并未发生改变
    return 0;
}
int swap( int a ,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);//8 6  只是形参a,b交换了，没有影响到实参a,b

    return 0;

}