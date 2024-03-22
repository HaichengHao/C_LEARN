//
// Created by 郝海程 on 2024/3/21.
//
/*
 * ①初始化部分
while(②循环条件部分)｛
    ③循环体部分;
    ④迭代部分;
}
 */
//#include <stdio.h>
//int main(){
//    int i = 0;
//    while (i<5){
//        printf("%d\n",i);
//        i++;
//    }
//    printf("%d\n",i);
//    return 0;
//}

//for 循环和while循环的区别:主要涉及到初始化条件部分对应的变量的作用域可能不同

//输出1-100内的偶数和
//#include <stdio.h>
//int main(){
//    int i = 1;
//    int count = 0;
//    while (i<101){
//        if(i%2==0){
//            count+=i;
////            printf("%d\n",i);
//        }
//        i++;
//    }
//    printf("%d",count);
//    return 0;
//}

//一些练习题
//世界最高山峰是珠穆朗玛峰，它的高度是8848.86米，假如我有一张足够大的纸，它的厚度是0.1毫米。
//请问，我折叠多少次，可以折成珠穆朗玛峰的高度?
#include <stdio.h>
int main(){
    double high=8848.86;
    double x = 0.0001;
    int count = 0;
    while(x < high){
        count+=1;
        x*=2;//对折一次厚度翻倍第一次 0.2 第二次 0.4 第三次 0.8

    }
    printf("折叠的高度为:%lf\n",x);
    printf("要折叠%d次",count);
    return 0;
}
//折叠的高度为:13421.772800
//要折叠27次

