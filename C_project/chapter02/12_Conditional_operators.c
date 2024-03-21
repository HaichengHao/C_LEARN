//
// Created by 郝海程 on 2024/3/21.
//
/*条件运算符
 * (条件表达式)? 表达式1:表达式2
 * 条件表达式是如果为 true (非0值)，就执行表达式1，否则执行表达式2。
 * eg:(a>b)? 表达式1:表达式2 a>b么？如果大于，则执行表达式1，否则执行表达式2
 *如果运算后的结果赋给新的变量，要求表达式1和表达式2为同种或兼容的类型
 */
//#include <stdio.h>
//int main() {
//    //获取两个数的较大值
//    int m1 = 10;
//    int m2 = 20;
////如果运算后的结果赋给新的变量，要求表达式1和表达式2为同种或兼容的类型 !!!
//    int max1 = (m1 > m2)? m1 : m2;
//    printf("m1和m2中的较大值为%d\n",max1);
//
//    return 0;
//
//}

//获取三个数的最大值
#include <stdio.h>
int main(){
    int a , b ,c;
    a = 10,b=20,c=2;
//    int max = (a>b)? a : b;
//    int final_max = (max > c)? max:c;
//    printf("最大值为%d\n",final_max);

//也可合并简写
    int max = (((a>b)? a : b)>c)? ((a>b)? a : b) :c;
    printf("max = %d\n",max);
    return 0;
}