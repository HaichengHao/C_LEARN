//
// Created by 郝海程 on 2024/3/19.
//
/*
 * C语言标准（C89）没有为布尔值单独设置一个类型，所以在判断真假时，使用整数 0 表示假，所有非0表示真。
 * */

//#include <stdio.h>
//int main(){
////    如果想使用bool类型的话，使用0表示假，非0表示真
//    int handsome = 1; //1为非0，则为真，只要不是0就表真，可以写2、3...非零的数
//    if (handsome) {
//        printf("你好帅!\n");
//    }
//    else {
//        printf("你不帅!\n");
//    }
//    return 0;
//}


//上述做法不直观，可以借助于C语言的宏定义处理。
// 定义布尔类型的宏
//#include <stdio.h>
////可以利用宏定义，定义BOOL为int
//#define BOOL int   //可以使用 typedef int BOOL; 替换
//#define TRUE 1   //定义True为1
//#define FALSE 0  //定义False为0
//
//int main(){
////    int handsome = TRUE;
////    int handsome = FALSE;
//    BOOL handsome = TRUE;
//    BOOL a = FALSE;
//    if(handsome){
//        printf("好帅~");
//        printf("%d",a); //这里的值为0，我们定义BOOL为 int了,相当于上面写的 BOOL a = FALSE 底层意思就是int a = 0
//    } else{
//        printf("你不帅~");
//    }
//
//    return 0;
//}


//到了C99
//C99 标准添加了类型 `_Bool`，表示布尔值，即逻辑值true和false。
// 但是，这个类型的值其实只是整数类型的别名，
// 还是使用 0 表示false，1 表示true，
// 其它非0的值都会被存储为1。所以_Bool类型实际上也是一种整数类型

//#include <stdio.h>
//
//int main() {
//    _Bool isFlag = 1;
//    if (isFlag){
//        printf("你好毒~~\n");
//    }else{
//        printf("你不毒\n");
//    }
//
//    return 0;
//}

//与此同时，C99还提供了一个头文件 stdbool.h，
// 文件中定义了`bool`代表`_Bool`，
// 并且定义了 true 代表 1 、 false 代表 0 。
// 只要加载这个头文件，就可以使用 bool 定义布尔值类型，以及 false 和 true 表示真假。
//
//#include <stdio.h>
//#include <stdbool.h>
//
//int main(){
//    bool ishandsome = true;
//    if (ishandsome) {
//        printf("你好帅!\n");
//    } else{
//        printf("你不帅!\n");
//    }
//}
