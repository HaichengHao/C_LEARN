//
// Created by 郝海程 on 2024/3/27.
/*
关于main()函数的其它用法
int main(int argc, char *argv[]) {
   //函数体
}
 其中，形参argc，全称是argument count，表示传给程序的参数个数，其值至少是1；而argv，全称是argument value，argv[]则是指向字符串的指针数组
 这种方式可以通过命令行的方式，接收指定的字符串传给参数argv
 */

#include <stdio.h>
int main(int argc, char *argv[]){
    printf("argc=%d",argc);
    for(int i=0; i<argc; i++){
        printf("\nargv[%d]=%s",i,argv[i]);
    }
}