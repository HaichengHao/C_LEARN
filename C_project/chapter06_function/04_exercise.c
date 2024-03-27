//
// Created by 郝海程 on 2024/3/27.
//练习


//定义函数max()，求两个double型变量的最大值
/*
#include <stdio.h>


double max(double a,double b){
    return a>b?a:b;
}

int main(){
    double max_number = max(5.467,1.454);
    printf("max_number = %f\n",max_number);
    return 0;
}*/
//，求三个double型变量的最大值

/*
#include <stdio.h>

double dualMax(double x, double y) {
    return x > y ? x : y;
}

double triMax(double x, double y, double z) {
    return dualMax(dualMax(x, y), z);  //嵌套调用
}

int main() {
    double a, b, c;
    printf("a,b,c: ");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    printf("%.2lf和%.2lf的最大值是：%.2lf\n",a,b,dualMax(a, b));
    printf("%.2lf、%.2lf、%.2lf的最大值是：%.2lf\n",a,b,c,triMax(a,b,c));

    return 0;
}*/

//哥德巴赫猜想
//任意大于2的整数都是两个素数之和
//素数\质数:除了1和它本身没有其它因数的数

//回忆：输出1-100内的质数
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int count = 0; //count作为计数，计算能被整除的次数
//    for(int i = 100;i<=200;i++){
    for (int i = 100; i <= sqrt(i); i++)
    { //性能提升，开根号
        for (int j = 2; j < i; j++)
        { //如果除1和i本身之外还有数可以使得i可以被整除则说明i不是素数
            if (i % j == 0)
            {
                count++;//那么就表示不止可以被1和其自身整除
                break;
            }
        }
        if (count == 0)
        { //如果为0，则表示除了1和其本身之外已经没有数可以让i被整除了
            printf("%d\n", i);//那么就打印当前i的值
        }
        count = 0;//将count重置为0
    }
    return 0;
}*/

//哥德巴赫猜想
//
//任一大于 2 的偶数都可写成两个素数之和。利用判断素数的函数 prime()验证哥德巴赫猜想。

#include <stdio.h>
#include <math.h>
//如果返回值为1，表名num是一个素数；如果返回值为0，表示num不是一个素数
int prime(int num){
    for(int i = 2;i< sqrt(num);i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    printf("请输入一个大于2的偶数：");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (prime(i) && prime(num - i)) { //如果i是素数且num-i是素数，即num是由两个素数组成的
            printf("%d = %d + %d\n", num, i, num - i);
            break;
        }
    }
    return 0;
}