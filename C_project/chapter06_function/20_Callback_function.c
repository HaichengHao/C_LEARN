//
// Created by �º��� on 2024/3/29.
//
/*
 *ָ����a��ָ�������һ����Ҫ��;�ǰѺ���a����ڵ�ַ��Ϊ�������ݵ���������b�У���ʱ�ĺ���b�ͳ�Ϊ`�ص�����`���ڴ˻����ϣ����ǾͿ����ڻص�����b��ʹ��ʵ�κ���a��

����ԭ����Լ�������: ��һ�����������躯����Ϊfun�������������βΣ�x1��x2��������x1��x2Ϊָ������ָ��������ڵ��ú���funʱ��ʵ��Ϊ����������f1��f2�����βδ��ݵ��Ǻ���f1��f2����ڵ�ַ�������ں���fun�оͿ��Ե���f1��f2�����ˡ�
 * */

//����������a��b�����û�����1,2��3��������1������͸���a��b�еĴ��ߣ�����2���͸���a��b�е�С�ߣ�����3������a��b֮�͡�

#include <stdio.h>

int fun(int x, int y,int(*p)(int,int)){
    //ͨ������ָ�����ָ��ĺ���
    int result = (*p)(x,y);
    return result;

}
int max(int x,int y){
    if(x>y){
        return x;
    }
    return y;
}
int min(int x,int y){
    if(x>y){
        return y;
    }
    return x;
}
int sum(int x , int y){
    int sum = x+y;
    return sum;
}


int main(){
    int a = 10,b=20;
    int m;
    printf("������һ������(1,2��3)");
    scanf("%d",&m);
    int result;
    switch(m){
        case 1:
            result = fun(a,b,max);
            break;
        case 2:
            result = fun(a,b,min);
            break;
        case 3:
            result = fun(a,b,sum);
            break;
    }
    printf("result = %d",result);

    return 0;
}