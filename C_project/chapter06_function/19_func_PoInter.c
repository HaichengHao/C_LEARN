//
// Created by 郝海程 on 2024/3/29.
//函数指针 是指针 是指向函数的指针
//一般格式
//返回值类型 (*指针变量名)(参数列表);
//其中，参数列表中可以同时给出参数的类型和名称，也可以只给出参数的类型，省略参数的名称。


#include <stdio.h>
void  print(int m){
    printf("%d\n",m);
}

//定义一个比较大小的函数，并利用函数指针进行调用
int max_(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int min_(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}
int main(){
    //声明一个函数指针
    void (*print_pointer)(int);
    print_pointer = &print; //让函数指针指向print函数的地址
//    方式1，使用函数名
    print(10);
//    方式2，使用函数指针的方式
    print_pointer(10);
//方式1，使用函数名
    max_(10,20);
//    方式2,使用函数指针
    int (*max_number)(int ,int);
    max_number = &max_;
    int get_maxnum=max_number(10,20);
    printf("%d\n",get_maxnum);
//    C 语言规定，函数名本身就是指向函数代码的指针，通过函数名就能获取函数地址。也就是说， print 和 &print 是一回事。
//    试一试
    if(&max_ ==max_ ){
        printf("true\n"); //true

    }

    int (*minnum)(int ,int );
    minnum = min_;
    int minnumber = minnum(10,20);
    printf("%d\n",minnumber);
    return 0;
}
