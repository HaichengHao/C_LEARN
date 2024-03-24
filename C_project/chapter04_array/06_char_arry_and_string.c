//
// Created by 郝海程 on 2024/3/24.
// char型数组与字符串
/*#### char型数组

字符型数组，顾名思义，数组元素的数据类型为字符型的数组。

一方面，可以看做普通的数组，初始化、常用操作如前所述。
 */
#include <stdio.h>
#include <string.h>
int main(){
//    C语言没有专门用于存储字符串的变量类型，字符串都被存储在char类型的数组中。在字符串结尾，C 语言会自动添加一个`'\0' `的转义字符作为字符串结束的标志，所以字符数组也必须以 '\0'字符结束。
    char str[]={'h','e','l','l','o','\0'};  //这个就是char型数组
    char str_2[]={"hello"}; //即使不写/0也是可以的，会自动加上
//    其它方式
    char str_3[] ="hello"; //字符串不写{}也是可以的
    printf("%s\n", str);
//    字符串对应的数组长度
    printf("%d,%d,%d\n",sizeof(str_3),sizeof(str_2),sizeof(str));
//    6,6,6 <--hello共四个，默认后面会有一个\0也占用一个长度，注意，如果有空格，那么空格也得算一个长度

//字符串的长度
    printf("%d,%d,%d\n",strlen(str), strlen(str_2), strlen(str_3));
//    5,5,5 <-可以看到头文件string.h中的strlen()方法可以返回字符串的不带最后一位\0的长度
    return 0;
}