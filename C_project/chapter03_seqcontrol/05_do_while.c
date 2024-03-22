//
// Created by 郝海程 on 2024/3/22.
//
/*
 *
 * do-while 结构是 while 的变体，它会先执行一次循环体，
 * 然后再判断是否满足条件。如果满足的话，就继续执行循环体，
 * 否则跳出循环。
 *
 * ①初始化部分;
    do{
        ③循环体部分
        ④迭代部分
    }while(②循环条件部分);
 * */
//#include <stdio.h>
//int main(){
//    int i = 0;
//    do{
//        printf("%d\n",i);
//        i++;
//    }while(i<5);
//    return 0;
//}
//获取1-100之间的偶数，输出偶数和并输出其个数
//#include <stdio.h>
//int main(){
//    int i = 1;
//    int count = 0;
//    int sum = 0;
//    do
//    {
//        if(i%2==0){
//            count++;
//            sum+=i;
//        }
//        i++;
//    } while (i<101);
//    printf("%d\n",sum);
//    printf("%d\n",count);
//    return 0;
//}

//do while至少会执行一次循环体
//#include <stdio.h>
//int main(){
//    int i =0;
//    do{
//        printf("hello");
//    } while (i>3);
//    return 0;
//}
////hello <--虽然不满足循环条件，但是do在前，会先执行一次循环体

//ATM取款
#include <stdio.h>

int main()
{
    double balance = 0.0;
    int selection;//用于记录用户的选择
    int isFlag = 1;
    double addMoney, minusMoney;


    do
    {
        printf("=======ATM=======\n");
        printf("1.存款\n");
        printf("2.取款\n");
        printf("3.显示余额\n");
        printf("4.退出\n");
        printf("请输入数字以选择\n");
        scanf("%d", &selection);
        switch (selection)
        {
            case 1:
                printf("请输入存款金额\n");
                scanf("%lf", &addMoney);
                if(addMoney>0){
                    balance += addMoney;
                } else{
                    printf("存款金额不能小于0\n");
                }
                break;
            case 2:
                printf("请输入取款金额\n");
                scanf("%lf", &minusMoney);
                if(minusMoney>0 && minusMoney<balance){
                    balance -= minusMoney;
                } else{
                    printf("输出有误\n");

                }
                break;
            case 3:
                printf("您的账户余额为:%lf\n", balance);
                break;
            case 4:
                isFlag = 0;
                printf("感谢使用\n");
                break;
            default:
                printf("请输入正确的数字\n");
        }
    } while (isFlag);
    return 0;
}