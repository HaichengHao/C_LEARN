//
// Created by �º��� on 2024/3/24.
//
//��ά���顢��ά���顢...����Ϊ��ά���顣������Ҫ�����ά���飬��ά�����ϵ����飬�Դ����Ƽ��ɡ�
/*
 * ��ά����Ķ��巽ʽ1
 * int a[3][4];  3��4�еĶ�ά����
* */
//#include <stdio.h>
//int main(){
//    int a[3][4]; //�������о���
//    a[0][0] = 5;  //ָ����0��0�и�Ϊ5
//    a[0][1] = 6; //ָ����0�е�1��Ԫ��Ϊ6
//    a[0][2] = 8; //ָ����0�е�2��Ԫ��Ϊ8
//    printf("%d\n",a[0][0]);
//
//    //���Գ���
//    printf("%d\n",sizeof(a)/sizeof(a[0][0]));
////    ����Ԫ��
//    for(int i = 0;i<3;i++){
//        for(int j = 0;j<4;j++){
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//
////    ��ȡ����Ԫ�صĵ�ַ
//    for(int i = 0;i<3;i++){
//        for(int j = 0;j<4;j++){
//            printf("a[%d][%d]�ĵ�ַ:%p ",i,j,&a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//5
//12  3��4�й� 12

//5 6 8 1  <--ǰ������ֵ�ɹ��ģ�ʣ�µ�λ��û��ָ�������Ի�����
//528480816 222 744691688 32758
//-1982590016 592 0 1

//a[0][0]�ĵ�ַ:000000a6321ff750 a[0][1]�ĵ�ַ:000000a6321ff754 a[0][2]�ĵ�ַ:000000a6321ff758 a[0][3]�ĵ�ַ:000000a6321ff
//75c
//a[1][0]�ĵ�ַ:000000a6321ff760 a[1][1]�ĵ�ַ:000000a6321ff764 a[1][2]�ĵ�ַ:000000a6321ff768 a[1][3]�ĵ�ַ:000000a6321ff
//76c
//a[2][0]�ĵ�ַ:000000a6321ff770 a[2][1]�ĵ�ַ:000000a6321ff774 a[2][2]�ĵ�ַ:000000a6321ff778 a[2][3]�ĵ�ַ:000000a6321ff
//77c

//��ά������������巽ʽ

//���巽ʽ2
//#include <stdio.h>
//int main(){
//    int a[3][4]={
//            {1,2,3,4},
//            {1,4,9,16},
//            {1,16,81,256}
//    };
////    ���õ�ַȡֵ
//    printf("%p\n",a[0]);
//    printf("%p\n",a[0]+1);
//    return 0;
//}
//000000c4ccfffc80
//000000c4ccfffc84

//���巽ʽ3 ����Ԫ�ظ�ֵ
#include <stdio.h>
//int main(){
//    int a[2][2] = {[0][0]=1,[1][1]=2};
//    return 0;
//}

//���巽ʽ4����������Ÿ�ֵ
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

//��ʽ����
//�����ȫ��Ԫ�ظ�ֵ����ôһά�ĳ��ȿ��Բ�����

//#include <stdio.h>
//int main(){
////    һ�����в�д���б���ָ������Ȼ��֪�������У���ô����һֱ�ǵ�һ��
//    int a[][2]={1,2,3,4};
//    int b[][3]={{1,2,3},{4,5,6},{7,8,9}};
//    return 0;
//}



//�κ���ϰ
//��ȡarr����������Ԫ�صĺ�
//
//��ʾ��ʹ��for��Ƕ��ѭ�����ɡ�

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

//����2�����ά�������ֵ�Լ���Ӧ�����нǱ�
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

//��һ����ά�����к��е�Ԫ�ػ������浽��һ����ά�����С�

/*#include <stdio.h>
int main(){
    int arr[3][4]={
            {3,5,8,0},
            {12,9,0,0},
            {7,0,6,4}
    };
    int temp[4][3];
//    ����Ԫ�ؿ�ʼ��ֵ
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

//��άchar������
//
//��"Apple"��"Orange"��"Grape"��"Pear"��"Peach"�洢��������
/*
#include <stdio.h>
#include <string.h>
int main(){
    char arr[][7]={"Apple","Orange","Grape","Pear","Peach"};
    printf("%zd\n",sizeof(arr));
    printf("%d", strlen(arr));
    return 0;
}*/
//35 <--Ϊʲô��35����Ϊһ�������ڰ�����Ǹ����ĳ���Ϊ�У�����orangeռ6�У�������ʹ�30���ռ䣬�������಻���ĳ���ҲҪ���룬����Apple��1����grape��1����pear��2����peach��1�������Թ�35��
//5

//����������ǰʮ��

#include <stdio.h>
int main(){
    int  arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            arr[i][0]=1;  //ÿһ�е���Ԫ��Ϊ1
            if(i==j){
                arr[i][j]=1; //ÿһ�е�βԪ�ض���1
            }else{  //��������βԪ�ض����չ���(������һ����һ�е�Ԫ�ص�ǰһ��Ԫ��+��һ����һ�е�Ԫ��)
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