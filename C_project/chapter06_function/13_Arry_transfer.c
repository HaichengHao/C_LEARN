//
// Created by �º��� on 2024/3/28.
//�н�12Addressing_passing

/* ����һ�����飬ͨ������������Ԫ�ظ�ֵ
 *
 * */


#include <stdio.h>
#define MAXLEN 10
void setValue(int arr[], int len){
    for(int i=0; i<len; i++){
        arr[i] = i;
    }
}
void reverse_arr(int arr[], int len){
    int temp;
    for(int i=0; i<len/2; i++){
        temp = arr[i]; //�ѵ�i��Ԫ�ص�ֵ����temp
        arr[i] = arr[len-i-1]; //�ѵ�10-i-1(�Ե�һ��Ԫ������i=0Ϊ��,��ô��ʮ����Ԫ�أ���ô������λ�ü�Ϊ10-0-1 = 9)��Ԫ��ֵ����Ϊ��i������λ�õ�ֵ
        arr[len-i-1] = temp; //�����еĽ��ͣ�Ҫ��temp�洢�ĵ�i��Ԫ�ص�ֵ��������λ��Ϊlen-i-1��λ�ã��Ե�һ��Ԫ������λ��Ϊ0Ϊ������temp�洢��0����λ�õ�ֵ�����丳���ʮ����������λ��Ϊ10-0-1=9��Ԫ��
    }
}
//��Ϊ��Ҫ�ظ���������ܲ��������԰�����������Ϊ����ʵ��
void show_arr(int arr[],int len){
    for(int i = 0;i<len;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[MAXLEN] = {0};
    printf("��������\n");
    printf("���ú���ǰ:\n");
//    for(int i = 0;i<MAXLEN;i++){
//        printf("%d ",arr[i]);
//    }
    show_arr(arr,10);
    setValue(arr,10);
    printf("\n���ú�����:\n");
//    for(int i = 0;i<MAXLEN;i++){
//        printf("%d ",arr[i]);
//    }
    show_arr(arr,10);

    printf("\n��תǰ\n");
    show_arr(arr,10);
    printf("\n��ת��\n");
    reverse_arr(arr,10);
    show_arr(arr,10);
    return 0;
}