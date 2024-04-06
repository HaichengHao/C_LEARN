//
// Created by 郝海程 on 2024/3/29.
//递归 recursion

//例1,计算n的累加和
/*
#include <stdio.h>
int get_sumup(int num){
    if(num>0){
        return num+get_sumup(num-1);
    } else{ //如果是小于或等于0的数，那就返回这个数
        return num;
    }
}
int main(){
    int num;
    printf("请输入一个整数,我将帮你计算其累加和:");
    scanf("%d",&num);
    int sumup=get_sumup(num);
    printf("%d",sumup);
    return 0;
}
*/

//例2，计算阶乘
/*
#include <stdio.h>
int factorical(int num){
    if(num>1){
        return num*factorical(num-1);
    } else if(num==0||num==1){ //如果是等于0或1，那就返回1
        return 1;
    }
}
int main(){
    int num;
    printf("请输入一个整数,我将帮你计算其阶乘:");
    scanf("%d",&num);
    int sumup=factorical(num);
    printf("%d",sumup);
    return 0;
}*/

//斐波那契数列
#include <stdio.h>
//定义函数用来打印第n位的斐波那契数
int fibonacciRecursion(int n){
    if(n == 1 || n ==2){
        return 1;
    } else{
        return fibonacciRecursion(n-1)+fibonacciRecursion(n-2);
    }

}
int main(){
    int num;
    scanf("%d",&num);
    int fibonum= fibonacciRecursion(num);
    printf("%d",fibonum);


}