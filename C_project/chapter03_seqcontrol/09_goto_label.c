//
// Created by 郝海程 on 2024/3/22.
//
/*
 * 执行 goto 语句后，程序将跳转到指定标号处执行。
 * 这样可以随意将控制转移到程序中的任意一条语句上，
 * 然后执行它。*/


//相当于是死循环
//#include <stdio.h>
//
//int main(){
//    label1:printf("hello world from lb1\n");
//    label2:printf("hello world from lb2\n");
//    label3:printf("hello world from lb3\n");
//
//    goto label2;
//
//    return 0;
//}

//录入学生成绩，并计算学生的平均分。当输入-1时程序结束。
#include <stdio.h>
int main(){
    float score;
    float sum=0.0;
    int count=1;
//    int i=0;
    next:printf("请输入第%d学生成绩(输入-1表示结束)>>",count);
    scanf("%f",&score);
    if(score!=-1){
        sum+=score;
        count++;
//        i++;
        goto next;
    }
    float avg_score = sum/(count-1);
    printf("%d个学生的平均成绩是%.2f",count-1,avg_score);

    return 0;
}