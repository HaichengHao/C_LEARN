//
// Created by �º��� on 2024/3/27.
//��ϰ


//���庯��max()��������double�ͱ��������ֵ
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
//��������double�ͱ��������ֵ

/*
#include <stdio.h>

double dualMax(double x, double y) {
    return x > y ? x : y;
}

double triMax(double x, double y, double z) {
    return dualMax(dualMax(x, y), z);  //Ƕ�׵���
}

int main() {
    double a, b, c;
    printf("a,b,c: ");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    printf("%.2lf��%.2lf�����ֵ�ǣ�%.2lf\n",a,b,dualMax(a, b));
    printf("%.2lf��%.2lf��%.2lf�����ֵ�ǣ�%.2lf\n",a,b,c,triMax(a,b,c));

    return 0;
}*/

//��°ͺղ���
//�������2������������������֮��
//����\����:����1��������û��������������

//���䣺���1-100�ڵ�����
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int count = 0; //count��Ϊ�����������ܱ������Ĵ���
//    for(int i = 100;i<=200;i++){
    for (int i = 100; i <= sqrt(i); i++)
    { //����������������
        for (int j = 2; j < i; j++)
        { //�����1��i����֮�⻹��������ʹ��i���Ա�������˵��i��������
            if (i % j == 0)
            {
                count++;//��ô�ͱ�ʾ��ֹ���Ա�1������������
                break;
            }
        }
        if (count == 0)
        { //���Ϊ0�����ʾ����1���䱾��֮���Ѿ�û����������i��������
            printf("%d\n", i);//��ô�ʹ�ӡ��ǰi��ֵ
        }
        count = 0;//��count����Ϊ0
    }
    return 0;
}*/

//��°ͺղ���
//
//��һ���� 2 ��ż������д����������֮�͡������ж������ĺ��� prime()��֤��°ͺղ��롣

#include <stdio.h>
#include <math.h>
//�������ֵΪ1������num��һ���������������ֵΪ0����ʾnum����һ������
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
    printf("������һ������2��ż����");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (prime(i) && prime(num - i)) { //���i��������num-i����������num��������������ɵ�
            printf("%d = %d + %d\n", num, i, num - i);
            break;
        }
    }
    return 0;
}