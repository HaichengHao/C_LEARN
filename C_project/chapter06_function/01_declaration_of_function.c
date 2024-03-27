//
// Created by 郝海程 on 2024/3/26.
//
/*
 *
返回值类型 函数名(数据类型1 形参1,数据类型2 形参2,…,数据类型n 形参n){
	函数体;
}
 */

/*
#include <stdio.h>
//定义一个函数add_num,有两个参数a,b函数体是实现a+b并返回
int add_num(int a, int b){
    int c = a+b;
    return c;
}
int max_num(int a,int b){
    int temp = a;
    if(a<b){
        temp = b;
    }
    return temp;
}
//定义一个函数，计算两个整数的较小值并打印
void min_nunm(int a, int b){
    int temp = a;
    if(a>b){
        temp = b;
    }
    printf("%d\n",temp);
}
int main(){
    int num_1 = add_num(2,9);
    int max_number = max_num(5,6);
    printf("%d\n",max_number);
    printf("%d\n",num_1);
    min_nunm(121,98);
    return 0;
}*/


#include <stdio.h>
//打印5行6列的*型矩形并返回面积
void print(){
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 6;j++){
            printf("*");
        }
        printf("\n");
    }
}

//打印m行n列的*型矩形,并返回其面积
int printGraphandArea(int m,int n){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            printf("*");
        }
        printf("\n");
    }
    return m*n;
}

int main() {
//    print();

    int area=printGraphandArea(5,10);
    printf("%d\n",area);

}