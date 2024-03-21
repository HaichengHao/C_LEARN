//
// Created by 郝海程 on 2024/3/21.
//
//岳小鹏参加C语言考试，他和父亲岳不群达成承诺：
//如果：
//成绩为100分时，奖励一辆跑车；
//成绩为(80，99]时，奖励一辆山地自行车；
//当成绩为[60,80]时，奖励环球影城一日游；
//其它时，胖揍一顿。
//
//说明：默认成绩是在[0,100]范围内


//#include <stdio.h>
//
//int main() {
//    int score;
//    printf("请输入你的成绩>>");
//    scanf("%d", &score);
//    if (score == 100) {
//        printf("奖励一辆跑车\n");
//    } else if (score >= 80 && score <= 99) {
//        printf("奖山地自行车\n");
//    } else if (score >= 60 && score < 80) {
//        printf("奖环球影城一日游\n");
//    } else {
//        printf("胖揍一顿\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//    int year;
//    printf("请输入年份，我将帮你判断是否为闰年\n");
//    scanf("%d",&year);
//    if(year%4 == 0 && year%100 != 0){
//        printf("%d是闰年",year);
//    } else{
//        printf("%d不是闰年",year);
//    }
//    return 0;
//
//}

//熟悉if else的嵌套使用
//出票系统：根据淡旺季的月份和年龄，打印票价。要求，月份和年龄从键盘获取输入。
//
//4_10 旺季：
//	成人（18-60）：60
//	儿童（< 18）   :  半价
//	老人（> 60）   :  1/3
//淡季：
//	成人   :  40
//	其他   :  20
#include <stdio.h>
int main(){
    int month,age;
    printf("请输入月份和年龄，逗号分隔>>\n");
    scanf("%d,%d",&month,&age);
    if(month >=4 && month <=10){
        if(age >18 && age <60){
            printf("成人票价：%d\n",60);
        }else if(age > 60){
            printf("老年人票价：%d\n",60/3);
        } else if(age<18){
            printf("儿童票价：%d\n",60/2);
        }
    }else{
        if(age >18 && age <60){
            printf("成人票价：%d\n",40);
        }else {
            printf("老年人/儿童票价：%d\n",40/2);
        }
    }
    return 0;
}

