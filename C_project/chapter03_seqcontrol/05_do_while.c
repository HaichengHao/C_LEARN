//
// Created by �º��� on 2024/3/22.
//
/*
 *
 * do-while �ṹ�� while �ı��壬������ִ��һ��ѭ���壬
 * Ȼ�����ж��Ƿ������������������Ļ����ͼ���ִ��ѭ���壬
 * ��������ѭ����
 *
 * �ٳ�ʼ������;
    do{
        ��ѭ���岿��
        �ܵ�������
    }while(��ѭ����������);
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
//��ȡ1-100֮���ż�������ż���Ͳ���������
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

//do while���ٻ�ִ��һ��ѭ����
//#include <stdio.h>
//int main(){
//    int i =0;
//    do{
//        printf("hello");
//    } while (i>3);
//    return 0;
//}
////hello <--��Ȼ������ѭ������������do��ǰ������ִ��һ��ѭ����

//ATMȡ��
#include <stdio.h>

int main()
{
    double balance = 0.0;
    int selection;//���ڼ�¼�û���ѡ��
    int isFlag = 1;
    double addMoney, minusMoney;


    do
    {
        printf("=======ATM=======\n");
        printf("1.���\n");
        printf("2.ȡ��\n");
        printf("3.��ʾ���\n");
        printf("4.�˳�\n");
        printf("������������ѡ��\n");
        scanf("%d", &selection);
        switch (selection)
        {
            case 1:
                printf("����������\n");
                scanf("%lf", &addMoney);
                if(addMoney>0){
                    balance += addMoney;
                } else{
                    printf("������С��0\n");
                }
                break;
            case 2:
                printf("������ȡ����\n");
                scanf("%lf", &minusMoney);
                if(minusMoney>0 && minusMoney<balance){
                    balance -= minusMoney;
                } else{
                    printf("�������\n");

                }
                break;
            case 3:
                printf("�����˻����Ϊ:%lf\n", balance);
                break;
            case 4:
                isFlag = 0;
                printf("��лʹ��\n");
                break;
            default:
                printf("��������ȷ������\n");
        }
    } while (isFlag);
    return 0;
}