//
// Created by �º��� on 2024/3/21.
//
/*
 *switch ��������ж������ж����������������
 * ���Ѷ��ص� else if �ĳɸ����á��ɶ��Ը��õ���ʽ��
 * ��ʽ
 * switch(���ʽ ע�⣬�����Ǹ�������){
	case ����ֵ1:
        ����1;
        //break;
	case ����ֵ2:
        ����2;
        //break;
	�� ��
	case ����ֵn:
        ����n;
        //break;
	[default:
        ����n+1;
    ]
}
 *
 * **ִ�й��̣�**

��1��������switch�б��ʽ��ֵ������ƥ�����case��������ʽ��ֵ����ĳ��case�еĳ���ֵ����ִ�ж�Ӧcase�е�ִ����䡣

��2����ִ�����case��ִ������Ժ�
          ���1���������break����ִ��break��������ǰ��switch-case�ṹ
	        ���2�����û������break��������ִ�е�ǰcase֮�������case�е�ִ����䡣--->`case��͸`
	         ...
	        ֱ������break�ؼ��ֻ�ִ�������е�case��default��ִ����䣬������ǰ��switch-case�ṹ

**ʹ��ע��㣺**

- case�Ӿ��е�ֵ�����ǳ����������Ǳ�������ȷ���ı��ʽֵ��Χ��

- ͬһ��switch��䣬����case�Ӿ��еĳ���ֵ������ͬ��
- ���û��break�������˳��ִ�е�switch��β����ʹ��Ƶ��˵��һ��switch-case�ṹ�У�����Ҫ��дbreak��
- default�Ӿ��ǿ�ѡ�ġ�ͬʱ��λ��Ҳ�����ġ���û��ƥ���caseʱ��ִ��default��䡣

 **ִ�й��̣�**

��1��������switch�б��ʽ��ֵ������ƥ�����case��������ʽ��ֵ����ĳ��case�еĳ���ֵ����ִ�ж�Ӧcase�е�ִ����䡣

��2����ִ�����case��ִ������Ժ�
            ���1���������break����ִ��break��������ǰ��switch-case�ṹ
	        ���2�����û������break��������ִ�е�ǰcase֮�������case�е�ִ����䡣--->`case��͸`
	         ...
	        ֱ������break�ؼ��ֻ�ִ�������е�case��default��ִ����䣬������ǰ��switch-case�ṹ*/

//#include <stdio.h>
//int main(){
//    int num = 2;
//    switch(num){
//        case 0:
//            printf("0\n");
//            break;
//        case 1:
//            printf("1\n");
//            break;
//        case 2:
//            printf("2\n");
//
//        case 3:
//            printf("3\n");
//        default:
//            printf("default\n");
//    }
//    return 0;
//}

//switch case����ϰ
//case��͸
//#include <stdio.h>
//int main(){
//    int score;
//    printf("���������Ŀ��Գɼ�>>>");
//    scanf("%d",&score);
//    switch(score/10){
//        case 0:
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("������");
//            break;
//        case 6:
//        case 7:
//        case 8:
//        case 9:
//        case 10:
//            printf("����");
//            break;
//        default:
//            printf("�ɼ���������");
//            break;
//    }
//    return 0;
//}
//���õĽⷨ
#include <stdio.h>
int main(){
    int score;
    printf("���������Ŀ��Գɼ�>>>");
    scanf("%d",&score);
    switch(score/60){  //������һ��������int�ض�����λ�����С��60��������λ��С��1����ʱ���������
        case 0:
            printf("������");
            break;
        case 1:  //���Ϊ1�����ʾ������Ϊ100���ڴ���60������60������1
            printf("����");
            break;
        default:
            printf("�ɼ���������");
            break;

    }
    return 0;
}

/*
 * #### if-else��switch-case�Ƚ�

- ���ۣ�����ʹ��switch-case�Ľṹ������ת��Ϊif-else�ṹ����֮����������
- �������飺����ȿ���ʹ��switch-case���ֿ���ʹ��if-else������ʹ��switch-case����ΪЧ���Ըߡ�

- ϸ�ڶԱȣ�
  - if-else�������
    - if���������������ڷ�Χ���жϣ�Ҳ�������ڵ�ֵ���жϣ�`ʹ�÷�Χ����`��
    - switch����������һ������ֵ��ֻ���ж�ĳ����������ʽ�Ľ���Ƿ����ĳ������ֵ��`ʹ�ó�������խ`��
  - switch�������
    - ���������ж�ĳ����������ʽ�Ƿ����ĳ���̶��ĳ���ֵʱ��ʹ��if��switch�����ԣ�ϰ����ʹ��switch���ࡣ��Ϊ`Ч���Ը�`�������������䷶Χ���ж�ʱ��ֻ��ʹ��if��䡣
    - ʹ��switch��������`��͸��`��ͬʱִ�ж����֧����if...elseû�д�͸�ԡ�

*/