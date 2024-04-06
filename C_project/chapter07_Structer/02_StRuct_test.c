//
// Created by 郝海程 on 2024/3/30.
//
//**声明结构体变量格式2：**
//
//除了逐一对属性赋值，也可以使用大括号，一次性对 struct 结构的所有属性赋值。此时，初始化的属性个数最好与结构体中成员个数相同，且成员的先后顺序一一对应。
//struct 结构体名 结构体变量={初始化数据};
#include <stdio.h>
struct Student{
    //内部声明结构体成员
    int id;
    char *name;
    char *gender;
    int age;
    char *address;
};
int main(){
    //方式1
//struct Student stu1={1003,"Mario","male",20,"Germany"};
//方式2
    struct Student stu2={.name = "Mario",.gender = "male",.age = 20,.address = "germany"};
//没有显式赋值的成员会被赋默认值
    struct Student stu3={.name = "LUIKI",.gender = "male",.age = 19,.address = "germany"};
    printf("%d\n",stu3.id);

}