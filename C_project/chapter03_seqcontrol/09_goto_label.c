//
// Created by �º��� on 2024/3/22.
//
/*
 * ִ�� goto ���󣬳�����ת��ָ����Ŵ�ִ�С�
 * �����������⽫����ת�Ƶ������е�����һ������ϣ�
 * Ȼ��ִ������*/


//�൱������ѭ��
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

//¼��ѧ���ɼ���������ѧ����ƽ���֡�������-1ʱ���������
#include <stdio.h>
int main(){
    float score;
    float sum=0.0;
    int count=1;
//    int i=0;
    next:printf("�������%dѧ���ɼ�(����-1��ʾ����)>>",count);
    scanf("%f",&score);
    if(score!=-1){
        sum+=score;
        count++;
//        i++;
        goto next;
    }
    float avg_score = sum/(count-1);
    printf("%d��ѧ����ƽ���ɼ���%.2f",count-1,avg_score);

    return 0;
}