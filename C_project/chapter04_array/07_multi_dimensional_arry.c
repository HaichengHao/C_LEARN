//
// Created by 郝海程 on 2024/3/24.
//
//二维数组、三维数组、...都称为多维数组。本节主要讲解二维数组，三维及以上的数组，以此类推即可。
/*
 * 二维数组的定义方式1
 * int a[3][4];  3行4列的二维数组
* */
//#include <stdio.h>
//int main(){
//    int a[3][4]; //三行四列矩阵
//    a[0][0] = 5;  //指定第0行0列个为5
//    a[0][1] = 6; //指定第0行第1列元素为6
//    a[0][2] = 8; //指定第0行第2列元素为8
//    printf("%d\n",a[0][0]);
//
//    //测试长度
//    printf("%d\n",sizeof(a)/sizeof(a[0][0]));
////    遍历元素
//    for(int i = 0;i<3;i++){
//        for(int j = 0;j<4;j++){
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//
////    获取各个元素的地址
//    for(int i = 0;i<3;i++){
//        for(int j = 0;j<4;j++){
//            printf("a[%d][%d]的地址:%p ",i,j,&a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//5
//12  3行4列共 12

//5 6 8 1  <--前三个赋值成功的，剩下的位置没有指定，所以会乱来
//528480816 222 744691688 32758
//-1982590016 592 0 1

//a[0][0]的地址:000000a6321ff750 a[0][1]的地址:000000a6321ff754 a[0][2]的地址:000000a6321ff758 a[0][3]的地址:000000a6321ff
//75c
//a[1][0]的地址:000000a6321ff760 a[1][1]的地址:000000a6321ff764 a[1][2]的地址:000000a6321ff768 a[1][3]的地址:000000a6321ff
//76c
//a[2][0]的地址:000000a6321ff770 a[2][1]的地址:000000a6321ff774 a[2][2]的地址:000000a6321ff778 a[2][3]的地址:000000a6321ff
//77c

//二维数组的其它定义方式

//定义方式2
//#include <stdio.h>
//int main(){
//    int a[3][4]={
//            {1,2,3,4},
//            {1,4,9,16},
//            {1,16,81,256}
//    };
////    利用地址取值
//    printf("%p\n",a[0]);
//    printf("%p\n",a[0]+1);
//    return 0;
//}
//000000c4ccfffc80
//000000c4ccfffc84

//定义方式3 部分元素赋值
#include <stdio.h>
//int main(){
//    int a[2][2] = {[0][0]=1,[1][1]=2};
//    return 0;
//}

//定义方式4：单层大括号赋值
#include <stdio.h>
//int main(){
//    int a[2][2]={0,1,2,3};
//    for(int i =0;i<2;i++){
//        for(int j =0;j<2;j++){
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//0 1
//2 3

//方式引申
//如果对全部元素赋值，那么一维的长度可以不给出

//#include <stdio.h>
//int main(){
////    一般是行不写，列必须指定，不然不知道多少列，那么就是一直是第一行
//    int a[][2]={1,2,3,4};
//    int b[][3]={{1,2,3},{4,5,6},{7,8,9}};
//    return 0;
//}



//课后练习
//获取arr数组中所有元素的和
//
//提示：使用for的嵌套循环即可。

//#include <stdio.h>
//int main(){
//    int sum=0;
//    int arr[3][4]={
//            {3,5,8,0},
//            {12,9,0,0},
//            {7,0,6,4}
//    };
//    for(int i = 0;i<3;i++){
//        for(int j = 0;j<4;j++){
//            sum+=arr[i][j];
//        }
//    }
//    printf("%d",sum);
//
//    return 0;
//}

//举例2：求二维数组最大值以及对应的行列角标
//#include <stdio.h>
//int main(){
//    int max_line_pos;
//    int max_col_pos;
//    int arr[3][4]={
//            {3,5,8,0},
//            {12,9,0,0},
//            {7,0,6,4}
//    };
//    int max = arr[0][0];
//    for(int i = 0;i<3;i++){
//        for(int j = 0;j<4;j++){
//            if(max<arr[i][j]){
//                max=arr[i][j];
//                max_line_pos=i;
//                max_col_pos=j;
//            }
//        }
//    }
//    printf("max_mum:%d\n",max);
//    printf("position:[%d][%d]\n",max_line_pos,max_col_pos);
//
//    return 0;
//}
//max_mum:12
//position:[1][0]

//将一个二维数组行和列的元素互换，存到另一个二维数组中。

/*#include <stdio.h>
int main(){
    int arr[3][4]={
            {3,5,8,0},
            {12,9,0,0},
            {7,0,6,4}
    };
    int temp[4][3];
//    遍历元素开始赋值
    for (int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            temp[j][i]=arr[i][j];
        }

    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%d ",temp[i][j]);
        }printf("\n");
    }
    return 0;
}
 */
//3 12 7
//5 9 0
//8 0 6
//0 0 4

//二维char型数组
//
//将"Apple"、"Orange"、"Grape"、"Pear"、"Peach"存储在数组中
/*
#include <stdio.h>
#include <string.h>
int main(){
    char arr[][7]={"Apple","Orange","Grape","Pear","Peach"};
    printf("%zd\n",sizeof(arr));
    printf("%d", strlen(arr));
    return 0;
}*/
//35 <--为什么是35，因为一个数组内按最长的那个串的长度为列，所以orange占6列，五个单词共30个空间，但是其余不够的长度也要补齐，所以Apple补1个，grape补1个，pear补2个，peach补1个，所以共35个
//5

//输出杨辉三角前十行

#include <stdio.h>
int main(){
    int  arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            arr[i][0]=1;  //每一行的首元素为1
            if(i==j){
                arr[i][j]=1; //每一行的尾元素都是1
            }else{  //其它非首尾元素都按照规律(等于上一行这一列的元素的前一列元素+上一行这一列的元素)
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//1 6 15 20 15 6 1
//1 7 21 35 35 21 7 1
//1 8 28 56 70 56 28 8 1
//1 9 36 84 126 126 84 36 9 1