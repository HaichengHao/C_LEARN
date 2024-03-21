//
// Created by 郝海程 on 2024/3/21.
//
#include <stdio.h>
/*
 * sizeof 运算符：sizeof(参数)

- 参数可以是`数据类型`的关键字，也可以是`变量名`或某个`具体的值`。
- 返回某种数据类型或某个值占用的字节数量。
 **sizeof返回值的类型说明**

    sizeof 运算符的返回值，C 语言只规定是无符号整数，并没有规定具体的类型，留给系统自己去决定sizeof 到底返回什么类型。不同的系统中，返回值的类型有可能是 unsigned int ，也有可能是unsigned long ，甚至是 unsigned long long ，对应的 printf() 占位符分别是 %u 、 %lu和 %llu 。这样不利于程序的可移植性。

    C 语言提供了一个解决方法，创造了一个类型别名 `size_t` ，用来统一表示 sizeof 的返回值类型。该别名定义在 `stddef.h` 头文件里面，对应当前系统的 sizeof 的返回值类型，可能是 unsigned int ，也可能是 unsigned long 。

    printf() 有专门的占位符 `%zd` 或 `%zu` ，用来处理 size_t 类型的值。
 */
int main(){
    int a = 10;
    printf("sizeof(a) = %d\n", sizeof(a));
    printf("%zd\n",sizeof(double));
    return 0;
}
//sizeof(a) = 4
//8