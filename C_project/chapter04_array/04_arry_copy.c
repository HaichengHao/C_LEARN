//
// Created by �º��� on 2024/3/24.
//
//������������ָ�룬���Ը������鲻�ܼ򵥵ظ�����������


//��ʽ1��������ֵ��ʽ����

//#include <stdio.h>
//int main(){
//    int arr[]={1,2,3};
//    int length =sizeof(arr)/sizeof(arr[0]);
//    int copy[3];
//    for (int i = 0;i<length;i++){
//        copy[i]=arr[i];
//    }
////    �鿴copy�����ڵ�Ԫ��
//    for (int i=0;i<length;i++){
//        printf("%d",copy[i]);
//    }
//    printf("\n");
//
////    �����޸�����copy
//    copy[0]=2;
//    for (int i=0;i<length;i++){
//        printf("%d",copy[i]);
//    }
//    return 0;
//}
//123
//223


//��ʽ2 ʹ�� memcpy() ���� ��memory_copy
// memcpy() ����������ͷ�ļ� string.h �У�ֱ�Ӱ��������ڵ���һ���ڴ棬
// �ٸ���һ�ݡ�
//memcpy(Ŀ�����飬Դ���飬���Ƶ��ֽ���)
#include <string.h>
#include <stdio.h>
int main(){
    int arr[] = {0,1,2,3,4,5,6};//Դ����
    int length =sizeof(arr)/sizeof(arr[0]);
    int arr2[length]; //Ŀ������
//    3����������Ϊ��`Ŀ������`��`Դ����`�Լ�`Ҫ���Ƶ��ֽ���`��
    memcpy(arr2,arr,sizeof(arr));
//    ��������
    for (int i=0;i<length;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}

