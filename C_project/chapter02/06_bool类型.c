//
// Created by �º��� on 2024/3/19.
//
/*
 * C���Ա�׼��C89��û��Ϊ����ֵ��������һ�����ͣ��������ж����ʱ��ʹ������ 0 ��ʾ�٣����з�0��ʾ�档
 * */

//#include <stdio.h>
//int main(){
////    �����ʹ��bool���͵Ļ���ʹ��0��ʾ�٣���0��ʾ��
//    int handsome = 1; //1Ϊ��0����Ϊ�棬ֻҪ����0�ͱ��棬����д2��3...�������
//    if (handsome) {
//        printf("���˧!\n");
//    }
//    else {
//        printf("�㲻˧!\n");
//    }
//    return 0;
//}


//����������ֱ�ۣ����Խ�����C���Եĺ궨�崦��
// ���岼�����͵ĺ�
//#include <stdio.h>
////�������ú궨�壬����BOOLΪint
//#define BOOL int   //����ʹ�� typedef int BOOL; �滻
//#define TRUE 1   //����TrueΪ1
//#define FALSE 0  //����FalseΪ0
//
//int main(){
////    int handsome = TRUE;
////    int handsome = FALSE;
//    BOOL handsome = TRUE;
//    BOOL a = FALSE;
//    if(handsome){
//        printf("��˧~");
//        printf("%d",a); //�����ֵΪ0�����Ƕ���BOOLΪ int��,�൱������д�� BOOL a = FALSE �ײ���˼����int a = 0
//    } else{
//        printf("�㲻˧~");
//    }
//
//    return 0;
//}


//����C99
//C99 ��׼��������� `_Bool`����ʾ����ֵ�����߼�ֵtrue��false��
// ���ǣ�������͵�ֵ��ʵֻ���������͵ı�����
// ����ʹ�� 0 ��ʾfalse��1 ��ʾtrue��
// ������0��ֵ���ᱻ�洢Ϊ1������_Bool����ʵ����Ҳ��һ����������

//#include <stdio.h>
//
//int main() {
//    _Bool isFlag = 1;
//    if (isFlag){
//        printf("��ö�~~\n");
//    }else{
//        printf("�㲻��\n");
//    }
//
//    return 0;
//}

//���ͬʱ��C99���ṩ��һ��ͷ�ļ� stdbool.h��
// �ļ��ж�����`bool`����`_Bool`��
// ���Ҷ����� true ���� 1 �� false ���� 0 ��
// ֻҪ�������ͷ�ļ����Ϳ���ʹ�� bool ���岼��ֵ���ͣ��Լ� false �� true ��ʾ��١�
//
//#include <stdio.h>
//#include <stdbool.h>
//
//int main(){
//    bool ishandsome = true;
//    if (ishandsome) {
//        printf("���˧!\n");
//    } else{
//        printf("�㲻˧!\n");
//    }
//}
