//
// Created by �º��� on 2024/3/29.
//�ݹ� recursion

//��1,����n���ۼӺ�
/*
#include <stdio.h>
int get_sumup(int num){
    if(num>0){
        return num+get_sumup(num-1);
    } else{ //�����С�ڻ����0�������Ǿͷ��������
        return num;
    }
}
int main(){
    int num;
    printf("������һ������,�ҽ�����������ۼӺ�:");
    scanf("%d",&num);
    int sumup=get_sumup(num);
    printf("%d",sumup);
    return 0;
}
*/

//��2������׳�
/*
#include <stdio.h>
int factorical(int num){
    if(num>1){
        return num*factorical(num-1);
    } else if(num==0||num==1){ //����ǵ���0��1���Ǿͷ���1
        return 1;
    }
}
int main(){
    int num;
    printf("������һ������,�ҽ����������׳�:");
    scanf("%d",&num);
    int sumup=factorical(num);
    printf("%d",sumup);
    return 0;
}*/

//쳲���������
#include <stdio.h>
//���庯��������ӡ��nλ��쳲�������
int fibonacciRecursion(int n){
    if(n == 1 || n ==2){
        return 1;
    } else{
        return fibonacciRecursion(n-1)+fibonacciRecursion(n-2);
    }

}
int main(){
    int num;
    scanf("%d",&num);
    int fibonum= fibonacciRecursion(num);
    printf("%d",fibonum);


}