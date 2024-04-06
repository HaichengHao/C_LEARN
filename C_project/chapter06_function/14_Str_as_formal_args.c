//
// Created by 郝海程 on 2024/3/28.
//字符串作为形参
/*
 * 字符串(或字符指针)作为函数的参数，与数组指针作为函数参数没有本质的区别，
 * 传递的都是地址值，所不同的仅是指针指向对象的类型不同而已。
 * */


//要求字符串作函数参数，统计数字字符出现的个数。
/*
#include <stdio.h>

#define N 100

int digitalCount(char *p) {
    int count = 0;
    for (; *p != '\0'; p++)
        if (*p >= '0' && *p <= '9') //利用ascii码来判断是不是数字
            count++;

    return count;
}

int main() {
    char strs[N] = "a12bc43hec22b68o";
    printf("数字字符的个数为 % d个\n", digitalCount(strs)); //8

    return 0;
}*/



//#### 指针数组作为形参
//
//指针数组的元素是指针变量，用指针数组能够实现一组字符串的处理。
//
//举例：编写能对多个字符串排序的函数

#include <stdio.h>
#include <string.h>

void stringSort(char *[], int);

void stringPrint(char *[], int);

int main() {
    //创建指针数组days
    char *days[7] = {"Sunday", "Monday",
                     "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    stringSort(days, 7);
    stringPrint(days, 7);

    return 0;
}
//冒泡排序
void stringSort(char *string[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++)
            if (strcmp(string[j], string[j + 1]) > 0) {
                temp = string[j];
                string[j] = string[j + 1];
                string[j + 1] = temp;
            }
    }
}

void stringPrint(char *string[], int n) {
    for (int i = 0; i < n; i++)
        printf("%s ", string[i]);

}