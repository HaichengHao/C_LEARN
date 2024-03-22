//
// Created by 郝海程 on 2024/3/22.
//
/*
 *
 * 最简单"无限"循环格式：`while(1)` , `for(;;)`
 *
 * - 开发中，有时并不确定需要循环多少次，需要根据循环体内部某些条件，来控制循环的结束（使用break）。
- 如果此循环结构不能终止，则构成了死循环！开发中要避免出现死循环。
 */

//从键盘读入个数不确定的整数，并判断读入的正数和负数的个数，输入为0时结束程序。
#include <stdio.h>
int main(){
    int num;
    int count_positive = 0;
    int count_negative =0;
    for(;;){
        printf("请输入一个整数（输入0时结束）:");
        scanf("%d",&num);
        if(num == 0){
            printf("正整数个数%d,负整数个数%d",count_positive,count_negative);
            break;
        } else if(num>0){
            count_positive++;

        }else if(num<0){
            count_negative++;
        }

    }
    return 0;
}