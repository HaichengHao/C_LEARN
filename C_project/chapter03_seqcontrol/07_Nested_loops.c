//
// Created by 郝海程 on 2024/3/22.
//
/*
 * 嵌套循环
 * **所谓嵌套循环**，是指一个循环结构A的循环体是另一个循环结构B。比如，for循环里面还有一个for循环，就是嵌套循环。其中，for ,while ,do-while均可以作为外层循环或内层循环。

- 外层循环：循环结构A
- 内层循环：循环结构B
 */

//打印九九乘法表
//#include <stdio.h>
//int main(){
//
//    for(int i =1 ;i <=9 ;i++){
//        for(int j =1;j<=i;j++){
//            printf("%d*%d=%d\t",j,i,i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//打印直角三角形
//#include <stdio.h>
//int main(){
//    int i,j;
//    for(i=1;i<=5;i++){
//        for(j=1;j<=i;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//打印倒着的直角三角形
#include <stdio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}