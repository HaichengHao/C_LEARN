//
// Created by 郝海程 on 2024/3/21.
//
/*
 * ### for循环

- 循环结构的理解：循环语句具有在`某些条件`满足的情况下，`反复执行`特定代码的功能。

- 循环结构分类：
  - for 循环
  - while 循环
  - do-while 循环

- 循环结构`四要素`：

  - 初始化部分
  - 循环条件部分
  - 循环体部分
  - 迭代部分
  语法格式
  for (①初始化部分; ②循环条件部分; ④迭代部分)｛
         	③循环体部分;
｝*/
//#include <stdio.h>
//int main(){
////    初始化
//    int i = 0;  //这里写开了，就要记住在小括号内的初始化部分带上分号
////    循环条件
//    for (;i < 10;i++){
//        printf("hello %d\n",i);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main(){
//
////   初始化， 循环条件，迭代  过程:初始化 -> 满足条件 ->执行循环体 -> 执行迭代
//    for (int i = 0;i < 10;i++){
//        printf("hello %d\n",i);
//    }
//    return 0;
//}


//可以两个语句合在一起表示迭代部分，不过要注意降级语句，for循环里只能有俩分号!!!
//#include <stdio.h>
//int main(){
//    int num = 0;
//    for (printf("a");num<3;printf("c"),num++){
//        printf("b");
//    }
//    return 0;
//}
//abcbcbc
//过程:初始化 -> 满足条件 ->执行循环体 -> 执行迭代


//小题目，遍历1-100之间的偶数
//#include <stdio.h>
//int main(){
//    for(int i = 0; i <101;i++){
//        if (i%2==0){
//            printf("%d\n",i);
//        } else{
//            continue; //跳出当前循环执行下个循环
//        }
//    }
//    return 0;
//}

//计算1-100偶数和并输出有多少个偶数
//#include <stdio.h>
//int main(){
//    int sum = 0;
//    int count = 0;
//    for(int i = 0; i <101;i++){
//        if (i%2==0){
////            printf("%d\n",i);
//            sum+=i;
//            count++;
//        } else{
//            continue; //跳出当前循环执行下个循环
//        }
//    }
//    printf("%d\n",sum);
//    printf("有%d个偶数\n",count);
//    return 0;
//}
////2550

//输出100到999之间的水仙花数
//规则 各个位上数字的立方和等于其本身
//如 153 = 1*1*1+5*5*5+3*3*3
//#include <stdio.h>
//int main(){
//    for(int i =100 ; i<1000;i++){
//        int ge = i%10;
//        int shi = i%100/10;
//        int bai = i/100;
//        int ge_3 = ge*ge*ge;
//        int shi_3 = shi*shi*shi;
//        int bai_3 = bai*bai*bai;
//        if (ge_3+shi_3+bai_3 == i){
//            printf("%d\n",i);
//        } else{
//            continue;
//        }
//    }
//    return 0;
//}
//153
//370
//371
//407
//另一种写法
//#include <stdio.h>
//int main() {
//
//    //定义统计变量，初始化值是0
//    int count = 0;
//
//    //获取三位数，用for循环实现
//    for (int x = 100; x < 1000; x++) {
//        //获取三位数的个位，十位，百位
//        int ge = x % 10;
//        int shi = x / 10 % 10;
//        int bai = x / 100;
//
//        //判断这个三位数是否是水仙花数，如果是，统计变量++
//        if ((ge * ge * ge + shi * shi * shi + bai * bai * bai) == x) {
//            printf("水仙花数：%d\n", x);
//            count++;
//        }
//    }
//
//    //输出统计结果就可以了
//    printf("水仙花数共有%d个", count);
//
//    return 0;
//}

//练习 输入两个正整数m,n求其最大公约数和最小公倍数
//#include <stdio.h>
//int main(){
//    int m,n;
//    printf("输入两个正整数m,n>>");
//    scanf("%d%d",&m,&n);
//    int min = (m<n)? m:n; //动态获取m,n中的较小者以此来进一步判断最大公约数
//    for(int i = min;i>=1;i--){
//        if(m%i==0 && n%i==0){
//            printf("m,n两数的最大公约数为:%d\n",i);
//            break; //一旦执行就结束循环结构
//        }
//    }
//    return 0;
//}

//求最小公倍数
//#include <stdio.h>
//int main(){
//    int m,n;
//    printf("输入两个正整数m,n>>");
//    scanf("%d,%d",&m,&n);
//    int max = (m>n)? m:n; //动态获取m,n中的较大者以此来进一步判断最小公倍数
//    for(int i = max;i<=m*n;i++){
//        if(i%m==0 && i%n==0){ //如果i可被 m,n整除
//            printf("m,n两数的最小公倍数为:%d\n",i);//那么就是最小公倍数
//            break; //一旦执行就结束循环结构
//        }
//    }
//    return 0;
//}

//整合
#include <stdio.h>
int main(){
    int m,n;
    printf("输入两个正整数m,n>>");
    scanf("%d,%d",&m,&n);
    int min = (m<n)? m:n; //动态获取m,n中的较小者以此来进一步判断最大公约数
    for(int i = min;i>=1;i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("m,n两数的最大公约数为:%d\n", i);
            break; //一旦执行就结束循环结构
        }
    }
    int max = (m>n)? m:n; //动态获取m,n中的较大者以此来进一步判断最小公倍数
    for(int i = max;i<=m*n;i++){
        if(i%m==0 && i%n==0){ //如果i可被 m,n整除
            printf("m,n两数的最小公倍数为:%d\n",i);//那么就是最小公倍数
            break; //一旦执行就结束循环结构
        }
    }
    return 0;
}



