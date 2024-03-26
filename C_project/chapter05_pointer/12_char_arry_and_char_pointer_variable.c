//
// Created by 郝海程 on 2024/3/26.
//
//字符数组 vs 字符指针变量
/*
 * 一个字符串，可以使用`一维字符数组`表示，也可以使用`字符指针`来表示。
    - 字符数组由若干个元素组成，每个元素放一个字符
    - 字符指针变量中存放的是地址（字符串/字符数组的首地址），绝不是将字符串放到字符指针变量中。
 */


/*
#include <stdio.h>
int main(){
//    知识点1:如何表示一个字符串
//    方式1：使用字符数组
    char str[] = "hello world";
    printf("%s\n", str);
//    方式2：使用字符指针
    char *str_p;
    str_p = "hello world";
    return 0;
}
 */

/*
 * **两种方式的对比：**

对已声明好的字符数组，只能一一对各个元素赋值，不能用以下错误方法对字符数组赋值
        char str[14];
        str[0] = 'i'; //正确
        str = "hello Tom"; //错误
        数组名是一个常量，在定义好数组之后，不能给数组重新赋值为一个新的数组
        但是可以通过角标的方式获取或修改指定索引位置的元素值

对字符指针变量，采用如下方式赋值是可以的。
        char *p ='i';
        p = "i wanna sleep";

*/

//体会字符串字面量的不可变性
/*
#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr;

    printf("%d\n", p[1]); //2

    p[1] = 50;
    printf("%d\n", p[1]); //50
    printf("%d\n", arr[1]);  //50

    //
    int num = 30;
    p = &num;
    printf("%d\n",*p);    //30
    printf("%d\n",p[0]);  //30

    return 0;
}*/


//针对于字符数组、字符指针变量

/*
#include <stdio.h>
int main() {

//    char arr[] = "hello";

//    arr[1] = "m";    	//运行时错误
//因为字符串字面量存储在只读内存区域，是不可变的，不能修改其值。


    printf("%s\n",arr);

    return 0;
}
*/
#include <stdio.h>
int main() {
    char *pStr = "hello";
    pStr = "hello tom"; //正确

//    pStr[1] = 'm';      //运行时错误
    printf("%s\n",pStr);

    return 0;
}


