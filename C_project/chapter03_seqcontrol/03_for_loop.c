//
// Created by �º��� on 2024/3/21.
//
/*
 * ### forѭ��

- ѭ���ṹ����⣺ѭ����������`ĳЩ����`���������£�`����ִ��`�ض�����Ĺ��ܡ�

- ѭ���ṹ���ࣺ
  - for ѭ��
  - while ѭ��
  - do-while ѭ��

- ѭ���ṹ`��Ҫ��`��

  - ��ʼ������
  - ѭ����������
  - ѭ���岿��
  - ��������
  �﷨��ʽ
  for (�ٳ�ʼ������; ��ѭ����������; �ܵ�������)��
         	��ѭ���岿��;
��*/
//#include <stdio.h>
//int main(){
////    ��ʼ��
//    int i = 0;  //����д���ˣ���Ҫ��ס��С�����ڵĳ�ʼ�����ִ��Ϸֺ�
////    ѭ������
//    for (;i < 10;i++){
//        printf("hello %d\n",i);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main(){
//
////   ��ʼ���� ѭ������������  ����:��ʼ�� -> �������� ->ִ��ѭ���� -> ִ�е���
//    for (int i = 0;i < 10;i++){
//        printf("hello %d\n",i);
//    }
//    return 0;
//}


//��������������һ���ʾ�������֣�����Ҫע�⽵����䣬forѭ����ֻ�������ֺ�!!!
//#include <stdio.h>
//int main(){
//    int num = 0;
//    for (printf("a");num<3;printf("c"),num++){
//        printf("b");
//    }
//    return 0;
//}
//abcbcbc
//����:��ʼ�� -> �������� ->ִ��ѭ���� -> ִ�е���


//С��Ŀ������1-100֮���ż��
//#include <stdio.h>
//int main(){
//    for(int i = 0; i <101;i++){
//        if (i%2==0){
//            printf("%d\n",i);
//        } else{
//            continue; //������ǰѭ��ִ���¸�ѭ��
//        }
//    }
//    return 0;
//}

//����1-100ż���Ͳ�����ж��ٸ�ż��
//#include <stdio.h>
//int main(){
//    int sum = 0;
//    int count = 0;
//    for(int i = 0; i <101;i++){
//        if (i%2==0){
////            printf("%d\n",i);
//            sum+=i;
//            count++;
//        } else{
//            continue; //������ǰѭ��ִ���¸�ѭ��
//        }
//    }
//    printf("%d\n",sum);
//    printf("��%d��ż��\n",count);
//    return 0;
//}
////2550

//���100��999֮���ˮ�ɻ���
//���� ����λ�����ֵ������͵����䱾��
//�� 153 = 1*1*1+5*5*5+3*3*3
//#include <stdio.h>
//int main(){
//    for(int i =100 ; i<1000;i++){
//        int ge = i%10;
//        int shi = i%100/10;
//        int bai = i/100;
//        int ge_3 = ge*ge*ge;
//        int shi_3 = shi*shi*shi;
//        int bai_3 = bai*bai*bai;
//        if (ge_3+shi_3+bai_3 == i){
//            printf("%d\n",i);
//        } else{
//            continue;
//        }
//    }
//    return 0;
//}
//153
//370
//371
//407
//��һ��д��
//#include <stdio.h>
//int main() {
//
//    //����ͳ�Ʊ�������ʼ��ֵ��0
//    int count = 0;
//
//    //��ȡ��λ������forѭ��ʵ��
//    for (int x = 100; x < 1000; x++) {
//        //��ȡ��λ���ĸ�λ��ʮλ����λ
//        int ge = x % 10;
//        int shi = x / 10 % 10;
//        int bai = x / 100;
//
//        //�ж������λ���Ƿ���ˮ�ɻ���������ǣ�ͳ�Ʊ���++
//        if ((ge * ge * ge + shi * shi * shi + bai * bai * bai) == x) {
//            printf("ˮ�ɻ�����%d\n", x);
//            count++;
//        }
//    }
//
//    //���ͳ�ƽ���Ϳ�����
//    printf("ˮ�ɻ�������%d��", count);
//
//    return 0;
//}

//��ϰ ��������������m,n�������Լ������С������
//#include <stdio.h>
//int main(){
//    int m,n;
//    printf("��������������m,n>>");
//    scanf("%d%d",&m,&n);
//    int min = (m<n)? m:n; //��̬��ȡm,n�еĽ�С���Դ�����һ���ж����Լ��
//    for(int i = min;i>=1;i--){
//        if(m%i==0 && n%i==0){
//            printf("m,n���������Լ��Ϊ:%d\n",i);
//            break; //һ��ִ�оͽ���ѭ���ṹ
//        }
//    }
//    return 0;
//}

//����С������
//#include <stdio.h>
//int main(){
//    int m,n;
//    printf("��������������m,n>>");
//    scanf("%d,%d",&m,&n);
//    int max = (m>n)? m:n; //��̬��ȡm,n�еĽϴ����Դ�����һ���ж���С������
//    for(int i = max;i<=m*n;i++){
//        if(i%m==0 && i%n==0){ //���i�ɱ� m,n����
//            printf("m,n��������С������Ϊ:%d\n",i);//��ô������С������
//            break; //һ��ִ�оͽ���ѭ���ṹ
//        }
//    }
//    return 0;
//}

//����
#include <stdio.h>
int main(){
    int m,n;
    printf("��������������m,n>>");
    scanf("%d,%d",&m,&n);
    int min = (m<n)? m:n; //��̬��ȡm,n�еĽ�С���Դ�����һ���ж����Լ��
    for(int i = min;i>=1;i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("m,n���������Լ��Ϊ:%d\n", i);
            break; //һ��ִ�оͽ���ѭ���ṹ
        }
    }
    int max = (m>n)? m:n; //��̬��ȡm,n�еĽϴ����Դ�����һ���ж���С������
    for(int i = max;i<=m*n;i++){
        if(i%m==0 && i%n==0){ //���i�ɱ� m,n����
            printf("m,n��������С������Ϊ:%d\n",i);//��ô������С������
            break; //һ��ִ�оͽ���ѭ���ṹ
        }
    }
    return 0;
}



