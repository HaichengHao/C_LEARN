//
// Created by 郝海程 on 2024/3/15.
//
#include <stdio.h>

int main(){
    printf("hello world\n");
    /*
     * 1.printf()标准格式
     *
     * */
    printf("hello python\n");
    /*
     * 2.常见的占位符
     * %d  int 类型
     * %ld 十进制的long类型
     * %f  float类型
     * %lf double类型
     * %c  字符类型
     * %s 字符串类型
     * %u unsigned 十进制的无符号类型
     * %p pointer 指针类型
     * 格式控制字符串中占位符的个数与输出列表中变量或常量的个数相同，而且要一一对应
     * %x 十六进制表示
     * */
    int num = 10;
    printf("hello %d \n",num);

    int score =97;
    printf("汤姆的成绩是:%d\n",score);

//    输出格式说明
// 1 限定宽度
    printf("num is %d\n",123);
    printf("num is %5d\n",123);
//    num is 123
//    num is   123 <--可以看出123前有2位空格,因为宽度共5位  且默认右对齐，往右边靠

// 2 修改为左对齐 ,即在%后面填上负号就可以了
    printf("num is %d\n",123);
    printf("num is %-5d\n",123);
//    num is 123
//    num is 123  <--修改成左对齐也就看不出什么差别了
// 3 显示正负号
    printf("num is %d\n",123);
    printf("num is %+d\n",123); //显示正号就要在%d之前加上+
    printf("num is %d\n",-10);  // 显示负号直接写负数就行，注意别和%-d这个修改为默认左对齐搞混
//    num is 123
//    num is +123
//    num is -10
//4 限定小数位数
    printf("float is %f\n",12.5);
//    float is 12.500000 默认保留六位小数
//  如果要指定保留的位数，只需加上 .数字 即可
    printf("float is %.2f\n",12.5);
//    float is 12.50

// 即限制宽度又限制保留位数 只需 %宽度.要保留的位数 即可
    printf("float is %.2f\n",123.4);
    printf("float is %7.2f\n",123.4);
//    float is 123.40
//    float is  123.40 <--带上小数位和小数点共6位，指定宽度为七，且默认为右对齐，所以前面只空一个位置

//小细节
float f = 3.1415926535;
double d = 3.1415926535;
//使用%f输出单精度浮点数
//使用%lf输出单精度浮点数
    printf("Float:%f\n",f);
    printf("Double:%lf\n",d);
//    Float:123.456789
//    Double:123.456789
// 可见默认单精度情况下都是保留6位小数的
//但是如果指定精度
    printf("Float:%.8f\n",f);
    printf("Double:%.8lf\n",d);
//    Float:3.14159274  <--可见六位小数之后float精度就不准了，即使指定
//    Double:3.14159265
//

}