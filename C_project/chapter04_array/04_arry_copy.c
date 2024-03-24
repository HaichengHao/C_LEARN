//
// Created by 郝海程 on 2024/3/24.
//
//由于数组名是指针，所以复制数组不能简单地复制数组名。


//方式1，遍历赋值方式复制

//#include <stdio.h>
//int main(){
//    int arr[]={1,2,3};
//    int length =sizeof(arr)/sizeof(arr[0]);
//    int copy[3];
//    for (int i = 0;i<length;i++){
//        copy[i]=arr[i];
//    }
////    查看copy数组内的元素
//    for (int i=0;i<length;i++){
//        printf("%d",copy[i]);
//    }
//    printf("\n");
//
////    尝试修改数组copy
//    copy[0]=2;
//    for (int i=0;i<length;i++){
//        printf("%d",copy[i]);
//    }
//    return 0;
//}
//123
//223


//方式2 使用 memcpy() 函数 即memory_copy
// memcpy() 函数定义在头文件 string.h 中，直接把数组所在的那一段内存，
// 再复制一份。
//memcpy(目标数组，源数组，复制的字节数)
#include <string.h>
#include <stdio.h>
int main(){
    int arr[] = {0,1,2,3,4,5,6};//源数组
    int length =sizeof(arr)/sizeof(arr[0]);
    int arr2[length]; //目标数组
//    3个参数依次为：`目标数组`、`源数组`以及`要复制的字节数`。
    memcpy(arr2,arr,sizeof(arr));
//    遍历数组
    for (int i=0;i<length;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}

