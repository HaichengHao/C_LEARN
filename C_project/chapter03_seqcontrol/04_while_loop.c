//
// Created by �º��� on 2024/3/21.
//
/*
 * �ٳ�ʼ������
while(��ѭ����������)��
    ��ѭ���岿��;
    �ܵ�������;
}
 */
//#include <stdio.h>
//int main(){
//    int i = 0;
//    while (i<5){
//        printf("%d\n",i);
//        i++;
//    }
//    printf("%d\n",i);
//    return 0;
//}

//for ѭ����whileѭ��������:��Ҫ�漰����ʼ���������ֶ�Ӧ�ı�������������ܲ�ͬ

//���1-100�ڵ�ż����
//#include <stdio.h>
//int main(){
//    int i = 1;
//    int count = 0;
//    while (i<101){
//        if(i%2==0){
//            count+=i;
////            printf("%d\n",i);
//        }
//        i++;
//    }
//    printf("%d",count);
//    return 0;
//}

//һЩ��ϰ��
//�������ɽ������������壬���ĸ߶���8848.86�ף���������һ���㹻���ֽ�����ĺ����0.1���ס�
//���ʣ����۵����ٴΣ������۳����������ĸ߶�?
#include <stdio.h>
int main(){
    double high=8848.86;
    double x = 0.0001;
    int count = 0;
    while(x < high){
        count+=1;
        x*=2;//����һ�κ�ȷ�����һ�� 0.2 �ڶ��� 0.4 ������ 0.8

    }
    printf("�۵��ĸ߶�Ϊ:%lf\n",x);
    printf("Ҫ�۵�%d��",count);
    return 0;
}
//�۵��ĸ߶�Ϊ:13421.772800
//Ҫ�۵�27��

