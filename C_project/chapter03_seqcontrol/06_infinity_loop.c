//
// Created by �º��� on 2024/3/22.
//
/*
 *
 * ���"����"ѭ����ʽ��`while(1)` , `for(;;)`
 *
 * - �����У���ʱ����ȷ����Ҫѭ�����ٴΣ���Ҫ����ѭ�����ڲ�ĳЩ������������ѭ���Ľ�����ʹ��break����
- �����ѭ���ṹ������ֹ���򹹳�����ѭ����������Ҫ���������ѭ����
 */

//�Ӽ��̶��������ȷ�������������ж϶���������͸����ĸ���������Ϊ0ʱ��������
#include <stdio.h>
int main(){
    int num;
    int count_positive = 0;
    int count_negative =0;
    for(;;){
        printf("������һ������������0ʱ������:");
        scanf("%d",&num);
        if(num == 0){
            printf("����������%d,����������%d",count_positive,count_negative);
            break;
        } else if(num>0){
            count_positive++;

        }else if(num<0){
            count_negative++;
        }

    }
    return 0;
}