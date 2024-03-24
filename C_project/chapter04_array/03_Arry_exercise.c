//
// Created by 郝海程 on 2024/3/24.
//一维数组的练习
#include <stdio.h>

int main()
{
    //定义一个int型的一维数组，包含10个元素，然后求出数组中的最大值，最小值，总和，平均值，并输出出来。
    int arr[] = {1, 34, 44, 55, 66, 90, 22, 35, 65, 123};
    int length=sizeof(arr)/sizeof(int);
    int max=arr[0];
    int sum = 0;

    for(int i=0;i<length;i++){
        if(arr[i]>max){
            max=arr[i];
            sum+=arr[i];
        }
    }
    printf("%d\n",max);

    int min = arr[0];
    for(int i= 0;i<length;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    float avg=(float)sum/length;
//    模拟去掉最高分去掉最低分后的得分
    float n_avg = (float)(sum-max-min)/(length-2);
    printf("%d\n",sum);
    printf("%d\n",min);
    printf("%.4f\n",avg);

    return 0;
}