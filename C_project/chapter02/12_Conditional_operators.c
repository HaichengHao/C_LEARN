//
// Created by �º��� on 2024/3/21.
//
/*���������
 * (��������ʽ)? ����ʽ1:����ʽ2
 * ��������ʽ�����Ϊ true (��0ֵ)����ִ�б���ʽ1������ִ�б���ʽ2��
 * eg:(a>b)? ����ʽ1:����ʽ2 a>bô��������ڣ���ִ�б���ʽ1������ִ�б���ʽ2
 *��������Ľ�������µı�����Ҫ�����ʽ1�ͱ���ʽ2Ϊͬ�ֻ���ݵ�����
 */
//#include <stdio.h>
//int main() {
//    //��ȡ�������Ľϴ�ֵ
//    int m1 = 10;
//    int m2 = 20;
////��������Ľ�������µı�����Ҫ�����ʽ1�ͱ���ʽ2Ϊͬ�ֻ���ݵ����� !!!
//    int max1 = (m1 > m2)? m1 : m2;
//    printf("m1��m2�еĽϴ�ֵΪ%d\n",max1);
//
//    return 0;
//
//}

//��ȡ�����������ֵ
#include <stdio.h>
int main(){
    int a , b ,c;
    a = 10,b=20,c=2;
//    int max = (a>b)? a : b;
//    int final_max = (max > c)? max:c;
//    printf("���ֵΪ%d\n",final_max);

//Ҳ�ɺϲ���д
    int max = (((a>b)? a : b)>c)? ((a>b)? a : b) :c;
    printf("max = %d\n",max);
    return 0;
}