//
// Created by �º��� on 2024/3/21.
//
//��С���μ�C���Կ��ԣ����͸�������Ⱥ��ɳ�ŵ��
//�����
//�ɼ�Ϊ100��ʱ������һ���ܳ���
//�ɼ�Ϊ(80��99]ʱ������һ��ɽ�����г���
//���ɼ�Ϊ[60,80]ʱ����������Ӱ��һ���Σ�
//����ʱ������һ�١�
//
//˵����Ĭ�ϳɼ�����[0,100]��Χ��


//#include <stdio.h>
//
//int main() {
//    int score;
//    printf("��������ĳɼ�>>");
//    scanf("%d", &score);
//    if (score == 100) {
//        printf("����һ���ܳ�\n");
//    } else if (score >= 80 && score <= 99) {
//        printf("��ɽ�����г�\n");
//    } else if (score >= 60 && score < 80) {
//        printf("������Ӱ��һ����\n");
//    } else {
//        printf("����һ��\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//    int year;
//    printf("��������ݣ��ҽ������ж��Ƿ�Ϊ����\n");
//    scanf("%d",&year);
//    if(year%4 == 0 && year%100 != 0){
//        printf("%d������",year);
//    } else{
//        printf("%d��������",year);
//    }
//    return 0;
//
//}

//��Ϥif else��Ƕ��ʹ��
//��Ʊϵͳ�����ݵ��������·ݺ����䣬��ӡƱ�ۡ�Ҫ���·ݺ�����Ӽ��̻�ȡ���롣
//
//4_10 ������
//	���ˣ�18-60����60
//	��ͯ��< 18��   :  ���
//	���ˣ�> 60��   :  1/3
//������
//	����   :  40
//	����   :  20
#include <stdio.h>
int main(){
    int month,age;
    printf("�������·ݺ����䣬���ŷָ�>>\n");
    scanf("%d,%d",&month,&age);
    if(month >=4 && month <=10){
        if(age >18 && age <60){
            printf("����Ʊ�ۣ�%d\n",60);
        }else if(age > 60){
            printf("������Ʊ�ۣ�%d\n",60/3);
        } else if(age<18){
            printf("��ͯƱ�ۣ�%d\n",60/2);
        }
    }else{
        if(age >18 && age <60){
            printf("����Ʊ�ۣ�%d\n",40);
        }else {
            printf("������/��ͯƱ�ۣ�%d\n",40/2);
        }
    }
    return 0;
}

