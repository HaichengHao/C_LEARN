//
// Created by �º��� on 2024/3/15.
//
#include <stdio.h>

int main(){
    printf("hello world\n");
    /*
     * 1.printf()��׼��ʽ
     *
     * */
    printf("hello python\n");
    /*
     * 2.������ռλ��
     * %d  int ����
     * %ld ʮ���Ƶ�long����
     * %f  float����
     * %lf double����
     * %c  �ַ�����
     * %s �ַ�������
     * %u unsigned ʮ���Ƶ��޷�������
     * %p pointer ָ������
     * ��ʽ�����ַ�����ռλ���ĸ���������б��б��������ĸ�����ͬ������Ҫһһ��Ӧ
     * %x ʮ�����Ʊ�ʾ
     * */
    int num = 10;
    printf("hello %d \n",num);

    int score =97;
    printf("��ķ�ĳɼ���:%d\n",score);

//    �����ʽ˵��
// 1 �޶����
    printf("num is %d\n",123);
    printf("num is %5d\n",123);
//    num is 123
//    num is   123 <--���Կ���123ǰ��2λ�ո�,��Ϊ��ȹ�5λ  ��Ĭ���Ҷ��룬���ұ߿�

// 2 �޸�Ϊ����� ,����%�������ϸ��žͿ�����
    printf("num is %d\n",123);
    printf("num is %-5d\n",123);
//    num is 123
//    num is 123  <--�޸ĳ������Ҳ�Ϳ�����ʲô�����
// 3 ��ʾ������
    printf("num is %d\n",123);
    printf("num is %+d\n",123); //��ʾ���ž�Ҫ��%d֮ǰ����+
    printf("num is %d\n",-10);  // ��ʾ����ֱ��д�������У�ע����%-d����޸�ΪĬ���������
//    num is 123
//    num is +123
//    num is -10
//4 �޶�С��λ��
    printf("float is %f\n",12.5);
//    float is 12.500000 Ĭ�ϱ�����λС��
//  ���Ҫָ��������λ����ֻ����� .���� ����
    printf("float is %.2f\n",12.5);
//    float is 12.50

// �����ƿ�������Ʊ���λ�� ֻ�� %���.Ҫ������λ�� ����
    printf("float is %.2f\n",123.4);
    printf("float is %7.2f\n",123.4);
//    float is 123.40
//    float is  123.40 <--����С��λ��С���㹲6λ��ָ�����Ϊ�ߣ���Ĭ��Ϊ�Ҷ��룬����ǰ��ֻ��һ��λ��

//Сϸ��
float f = 3.1415926535;
double d = 3.1415926535;
//ʹ��%f��������ȸ�����
//ʹ��%lf��������ȸ�����
    printf("Float:%f\n",f);
    printf("Double:%lf\n",d);
//    Float:123.456789
//    Double:123.456789
// �ɼ�Ĭ�ϵ���������¶��Ǳ���6λС����
//�������ָ������
    printf("Float:%.8f\n",f);
    printf("Double:%.8lf\n",d);
//    Float:3.14159274  <--�ɼ���λС��֮��float���ȾͲ�׼�ˣ���ʹָ��
//    Double:3.14159265
//

}