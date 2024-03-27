//
// Created by 郝海程 on 2024/3/27.
//
/*
 * 关于return 语句`

- return语句的作用：① 结束函数的执行 ②将函数运算的结果返回。
- return语句后面就不能再写其它代码了，否则会报错。(与break、continue情况类似)
- 下面分两种情况讨论：
  - 情况1：返回值类型不是void时，函数体中必须保证一定有 `return 返回值; `语句，并且要求该返回值结果的类型与声明的返回值类型一致或兼容。
  - 情况2：返回值类型是void时，函数体中可以没有return语句。如果要用return语句提前结束函数的执行，那么return后面不能跟返回值，直接写`return;` 就可以。
 */

/*
#include <stdio.h>

void show(int a){
    printf("your age:%d\n", a);
    if(a>22){
        printf("已经到法定结婚年龄了");
        return; //return语句后面不能继续写语句，不会被执行
    } else{
        printf("还没到法定结婚年龄");
    }
    printf("不写return会被执行");
}

int main(){
    int age = 24;
    show(age);
    return 0;
}
*/
//注意事项：函数不能嵌套定义
//在C语言中，当函数的返回值缺省时，函数返回值的类型默认为int型。


//在c语言中，是不支持函数重载的,即一个文件中不能出现两个同名函数
