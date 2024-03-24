//
// Created by 郝海程 on 2024/3/24.
//
//数组的反转
#include <stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for(i=0,j=9;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}