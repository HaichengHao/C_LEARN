//
// Created by 郝海程 on 2024/3/22.
//
/*
 * #### 使用说明

| 关键字   | 适用范围    | 循环结构中的作用                     | 相同点                       |
| -------- | ----------- | ------------------------------------ | ---------------------------- |
| break    | switch-case | -                                    | -                            |
| break    | 循环结构    | 一旦执行，就结束(或跳出)当前循环结构 | 此关键字的后面，不能声明语句 |
| continue | 循环结构    | 一旦执行，就结束(或跳出)当次循环结构 | 此关键字的后面，不能声明语句 |
 *
 * */

// 在全系1000名学生中举行慈善募捐，当总数达到10万元时就结束，统计此时捐款的人数以及平均每人捐款的数目。
//#include <stdio.h>
//int main(){
//    double amount;
//    int total = 0;
//    int count =0;
//    for(int i = 1 ; i<=1000;i++){
//        printf("请输入捐款金额:\n");
//        scanf("%lf",&amount);
//        total += amount;
//        count++;
//        if(total >= 100000){
//            break;
//        }
//
//    }
//    double avg_= total/count;
//    printf("捐款总人数:%d,平均捐款金额:%f",count,avg_);
//    return 0;
//}

//输出100～200之间的不能被3整除的数。
//#include <stdio.h>
//int main(){
//    for(int i =100;i<=300;i++){
//        if(i%3!=0){
//            printf("%d\n",i);
//        } else{
//            continue;
//        }
//    }
//    return 0;
//}

//输出100-200之间全部的素数
//素数:除了1和它本身，没有因数
#include <stdio.h>
#include <math.h>
int main(){
    int count = 0; //count作为计数，计算能被整除的次数
//    for(int i = 100;i<=200;i++){
    for(int i = 100;i<=sqrt(i);i++){ //性能提升，开根号
        for(int j=2;j<i;j++){ //如果除1和i本身之外还有数可以使得i可以被整除则说明i不是素数
            if(i%j==0){
                count++;//那么就表示不止可以被1和其自身整除
                break;
            }
        }
        if(count==0){ //如果为0，则表示除了1和其本身之外已经没有数可以让i被整除了
            printf("%d\n",i);//那么就打印当前i的值
        }
        count = 0;//将count重置为0
    }
    return 0;

}