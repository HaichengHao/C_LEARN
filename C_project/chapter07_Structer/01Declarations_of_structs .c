//
// Created by 郝海程 on 2024/3/30.
//创建结构体
//声明结构体变量
//如何调用结构体变量的成员

#include <stdio.h>
#include <string.h>
struct Student{
    //内部声明结构体成员
    int id;
    char name[20];
    char gender;
    int age;
    char address[50];
};
struct Cat{
    char name[20];
    int age;
    char color[30];
};
struct Person{
    char name[20];
    int age;
    char gender;
    double weight;
};

struct Contacts{
    char name[20];
    int year;
    int month;
    int day;
    char email[50];
    char phone[20];
};

int main(){
//    声明结构体变量
//  struct 结构体类型名称  结构体变量名;
    struct Student stu1;
//    调用结构体变量的成员 结构体变量名.成员名
    stu1.id =  1001;
    stu1.age=10;
    //stu1.name = "TOM"; //注意，这样是错误的，因为结构体Student的定义中，name这一成员为数组形式，针对数组(指针)，不能重新赋值
    strcpy(stu1.name,"TOM"); //将数组的元素赋值为TOM，并没有给数组赋值
    stu1.gender='m';

    strcpy(stu1.address,"Beijing");
    printf("id = %d  age = %d  name = %s  address = %s  ",stu1.id,stu1.age,stu1.name,stu1.address);

    struct Cat cat1;
    strcpy(cat1.name,"kitty");
    cat1.age=10;
    strcpy(cat1.color,"orange");

    printf("\n age = %d  name = %s  color = %s  ",cat1.age,cat1.name,cat1.color);

    struct Person person1;
    struct Contacts contacts1;


}