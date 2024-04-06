//
// Created by 郝海程 on 2024/3/29.
//
//课后练习

//1 定义函数，求一维数组元素的最大值
/*
#include <stdio.h>
int get_max(int *,int);
int main(){
    int arr[] = {0,1,10,3,4,5,6};
    int arrlen=sizeof(arr)/sizeof(arr[0]);
    int maxnum=get_max(arr,arrlen);
    printf("%d",maxnum);
    return 0;
}
int get_max(int arr[],int len){
    int temp=arr[0];//将数组首元素的值赋予temp
    for(int i = 0;i<len;i++){ //对数组进行遍历
        if(arr[i]>temp){ //让每个元素都与temp对比，如果元素值大于temp
            temp = arr[i]; //那就把这个较大的元素的值赋予temp
        }
    }
    return temp;//返回temp的值，让main函数进行接收
}*/

/*
#include <stdio.h>
int get_max(int *,int);
int main(){
    int arr[5];
    int arrlen=sizeof(arr)/sizeof(arr[0]);
    for(int j =0;j<arrlen;j++){
        scanf("%d",&arr[j]);
    }
    int maxnum=get_max(arr,arrlen);
    printf("%d",maxnum);
    return 0;
}
int get_max(int arr[],int len){
    int temp=arr[0];//将数组首元素的值赋予temp
    for(int i = 0;i<len;i++){ //对数组进行遍历
        if(arr[i]>temp){ //让每个元素都与temp对比，如果元素值大于temp
            temp = arr[i]; //那就把这个较大的元素的值赋予temp
        }
    }
    return temp;//返回temp的值，让main函数进行接收
}*/

//多维数组名作为形参
//有一个3×4的矩阵，求所有元素中的最大值。
/*
#include <stdio.h>
int show_arr(int arr[][4],int line,int colum){ //针对二维数组一定要声明为二维数组，第一维可以不写，但是第二维要写
    for(int i = 0;i<line;i++){
        for(int j = 0;j<colum;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int get_maxnum(int arr[][4],int line,int colum){
    int temp= arr[0][0];
    for(int i = 0;i<line;i++){
        for(int j = 0;j<colum;j++){
            if(arr[i][j]>temp){
                temp = arr[i][j];
            }
        }

    }
    return temp;

}
int main(){
    int arr[3][4]={

            {1,3,123,54},
            {120,353,21,45},
            {143,134,52,13}
    };
    show_arr(arr,3,4);
    int maxnum=get_maxnum(arr,3,4);
    printf("max num in arr = %d",maxnum);

}*/

//变长数组作为参数
#include <stdio.h>

//int sum_array(int a[n],int n) { //报错
//    // ...
//}
//数组 a[n] 是一个变长数组，它的长度取决于变量 n 的值，只有运行时才能知道。所以，变量 n 作为参数时，顺序一定要在变长数组前面，这样运行时才能确定数组 a[n] 的长度，否则就会报错。
//
//因为函数原型可以省略参数名，所以变长数组的原型中，可以使用 * 代替变量名，也可以省略变量名。
//int sumArray(int, int [*]);  //即可以加上*
int sumArray(int, int []); //也可以不加
int sumArray(int n, int a[n]) {
    // ...
}

int main() {
    int a[] = {1, 3, 5, 7};
    int sum = sumArray(4, a);
    return 0;
}