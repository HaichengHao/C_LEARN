//
// Created by �º��� on 2024/3/29.
//
//C�����������ķ���ֵ��һ��ָ�루��ַ���������ĺ�����Ϊ`ָ�뺯��`
/*һ���ʽ:
 ����ֵ���� *������(�β��б�) {
	������
��*/


//��ȡ�����ַ����нϳ����ַ���
/*
#include <stdio.h>
#include <string.h>
char *getMaxlenString(char *str1 ,char *str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1>len2){
        return str1;
    }else{
        return str2;
    }

}
int main(){
    char str_1[]="hello bob";
    char str_2[]="hello mamamiya";
    char *str = getMaxlenString(str_1,str_2);
    printf("�ϳ����ַ�����:\n");
    printf("%s",str);
    return 0;
}*/

//���ر����ĵ�ַ
#include <stdio.h>
#include <stdlib.h> //����malloc��Ҫ����
//�龰1 ���ص��Ǳ���
int func1(){
    int m = 10;
    return m;
}
//�龰2 ���ص��ǵ�ַ ���µ�ָ�뺯����ʹ�����Ǵ����
//int *func2(){
//    int m = 10;//m��һ���ֲ����������ź�����ִ�н������͵���ջ
//    return &m;
//}
//�龰3������龰�����޸�
//ֻ����Ҫ���صı�����ǰ�����static����

int *func2(){
//    static int m = 10;//����static���εı���������̬�ֲ�������������洢��ȫ�����ж�������ջ�У������������ջ�ռ���ͷŶ��ͷţ�����ȫ�ִ������н���������ȫ�ֿռ���ͷŶ��ͷ�
    //��һ�ַ�ʽ��ʹ��malloc(),�����ڶ���(heap)�з���һ������Ϊsize�Ŀռ䣬ֻ�б�free()�ͷŲŻ��ͷ�
    int *m = (int *)malloc(sizeof(int));
    if(m!=NULL){ //ֻҪ����ɹ�
        *m = 10;  //�ͽ�m��ֵΪ10
    }
    return &m; //������m�ĵ�ַ
}
int main(){
    int n = func1();
    printf("%d\n",n);
    int *p = func2();
    printf("%p\n",p);
    printf("%d\n",*p); //�����龰�����д���û���ã���Ϊ��func2ִ����Ϻ����ջ�ռ䱻�ͷ��ˣ���֮���ص��β�m�ĵ�ַҲ���ͷ� �������龰�����޸ĺ���龰���ٴγ������д��뷢�����гɹ�

    return 0;
}
//���н��
//10
//00007ff741c0a000
//10