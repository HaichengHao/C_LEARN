//
// Created by 郝海程 on 2024/3/26.
//二维数组与指针


/*
#include <stdio.h>
int main(){

    int a[3][4] = {{1, 2,  3,  4},
                   {5, 6,  7,  8},
                   {9, 10, 11, 12}};

    printf("%d\n",a[0][0]);  //二维数组中元素a[0][0]的值
    printf("%p\n",&a[0][0]); //二维数组中元素a[0][0]的值对应的地址
    printf("%p\n",a[0]);     //二维数组中a[0][0]的地址
    printf("%p\n",a);        //二维数组中a[0]的地址,即第0行的首地址
    printf("%p\n",&a);       //二维数组a的地址
    //    1
    //0000007a6c9ff7b0
    //0000007a6c9ff7b0
    //0000007a6c9ff7b0
//0000007a6c9ff7b0
    return 0;
}*/

//用指针访问二维数组，求二维数组元素的最大值
#include <stdio.h>
int main(){
    int a[3][4] = {{1, 2,  3,  4},
                   {5, 6,  7,  8},
                   {9, 10, 11, 12}};
//    方式1
//    int *p;
//    int max = 0;
//    p = &a[0][0];
//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < 4; j++){
//            if(*p > max){
//                max = *p;
//            }
//            p++;
//        }
//    }
//    printf("%d\n",max);


//方式2：
//        int *p = a[0];
//        int max;
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 4; j++) {
//                if (max < *(p + i * 4 + j)) {
//                    max = *(p + i * 4 + j);
//                }
//            }
//        }
//        printf("max=%d\n", max);

//方式3：
        int *q, max1;
        for (q = a[0], max1 = *q; q < a[0] + 3 * 4; q++)
        {
            if (max1 < *q)
            {
                max1 = *q;
            }
        }
        printf("Max=%d\n", max1);


    return 0;
}