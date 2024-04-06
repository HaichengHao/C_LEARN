//
// Created by 郝海程 on 2024/3/29.
//
//C语言允许函数的返回值是一个指针（地址），这样的函数称为`指针函数`
/*一般格式:
 返回值类型 *函数名(形参列表) {
	函数体
｝*/


//获取两个字符串中较长的字符串
/*
#include <stdio.h>
#include <string.h>
char *getMaxlenString(char *str1 ,char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1>len2){
        return str1;
    }else{
        return str2;
    }

}
int main(){
    char str_1[]="hello bob";
    char str_2[]="hello mamamiya";
    char *str = getMaxlenString(str_1,str_2);
    printf("较长的字符串是:\n");
    printf("%s",str);
    return 0;
}*/

//返回变量的地址
#include <stdio.h>
#include <stdlib.h> //利用malloc需要导入
//情景1 返回的是变量
int func1(){
    int m = 10;
    return m;
}
//情景2 返回的是地址 如下的指针函数在使用中是错误的
//int *func2(){
//    int m = 10;//m是一个局部变量，随着函数的执行结束，就弹出栈
//    return &m;
//}
//情景3，针对情景二的修改
//只需在要返回的变量的前面加上static修饰

int *func2(){
//    static int m = 10;//经过static修饰的变量叫做静态局部变量，但是其存储在全局区中而不是在栈中，因而不会随着栈空间的释放而释放，而是全局代码运行结束后随着全局空间的释放而释放
    //另一种方式，使用malloc(),可以在堆区(heap)中分配一个长度为size的空间，只有被free()释放才会释放
    int *m = (int *)malloc(sizeof(int));
    if(m!=NULL){ //只要分配成功
        *m = 10;  //就将m赋值为10
    }
    return &m; //并返回m的地址
}
int main(){
    int n = func1();
    printf("%d\n",n);
    int *p = func2();
    printf("%p\n",p);
    printf("%d\n",*p); //发现情景二这行代码没有用，因为在func2执行完毕后这个栈空间被释放了，随之返回的形参m的地址也被释放 ，利用情景三的修改后的情景二再次尝试运行代码发现运行成功

    return 0;
}
//运行结果
//10
//00007ff741c0a000
//10