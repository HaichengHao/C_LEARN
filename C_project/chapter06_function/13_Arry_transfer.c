//
// Created by 郝海程 on 2024/3/28.
//承接12Addressing_passing

/* 定义一个数组，通过函数给数组元素赋值
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
        temp = arr[i]; //把第i个元素的值赋给temp
        arr[i] = arr[len-i-1]; //把第10-i-1(以第一个元素索引i=0为例,那么第十个个元素，那么其索引位置即为10-0-1 = 9)个元素值赋予为第i个索引位置的值
        arr[len-i-1] = temp; //看上行的解释，要把temp存储的第i个元素的值赋给索引位置为len-i-1的位置，以第一个元素索引位置为0为例，即temp存储第0索引位置的值，将其赋予第十个，即索引位置为10-0-1=9的元素
    }
}
//因为需要重复遍历数组很不方便所以把冗余代码块作为函数实现
void show_arr(int arr[],int len){
    for(int i = 0;i<len;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[MAXLEN] = {0};
    printf("遍历数组\n");
    printf("调用函数前:\n");
//    for(int i = 0;i<MAXLEN;i++){
//        printf("%d ",arr[i]);
//    }
    show_arr(arr,10);
    setValue(arr,10);
    printf("\n调用函数后:\n");
//    for(int i = 0;i<MAXLEN;i++){
//        printf("%d ",arr[i]);
//    }
    show_arr(arr,10);

    printf("\n反转前\n");
    show_arr(arr,10);
    printf("\n反转后\n");
    reverse_arr(arr,10);
    show_arr(arr,10);
    return 0;
}