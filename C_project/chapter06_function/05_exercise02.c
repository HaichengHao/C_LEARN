//
// Created by �º��� on 2024/3/27.
//��Ŀ��Ӧ������1.6��ϰ5

// ������getWeekName
// �����������������������������Ӧ����������
// ������week - �������ڵ�������1��ʾ����һ��7��ʾ�����գ�
// ����ֵ�����ر�ʾ�������Ƶ��ַ��������������Ч�򷵻ؿ��ַ���
#include <stdio.h>
char *getWeekName(int week) {
    switch (week) {
        case 1:
            return "����һ";
        case 2:
            return "���ڶ�";
        case 3:
            return "������";
        case 4:
            return "������";
        case 5:
            return "������";
        case 6:
            return "������";
        case 7:
            return "������";
        default:
            return "";
    }
}



// ������getMonthName
// ����������������·�����������Ӧ���·�����
// ������month - �����·ݵ�������1��ʾһ�£�12��ʾʮ���£�
// ����ֵ�����ر�ʾ�·����Ƶ��ַ��������������Ч�򷵻ؿ��ַ���
char *getMonthName(int month) {

}

// ������isLeapYear
// ������������������Ƿ�Ϊ����
// ������year - ���������
// ����ֵ������������򷵻�1�����򷵻�0���������Ϊ�����򷵻�-1��Ϊ�����־
//��ʾ���ܱ�4���������ܱ�100�����������ܱ�400��������ݣ���Ϊ���ꡣ
int isLeapYear(int year) {

}

// ������getTotalDaysOfMonth
// ��������ȡָ����ݺ��·ݵ�������
// ������year - ��ݣ�month - �·�
// ����ֵ�����ظ��·ݵ������������������Ч�򷵻�-1��Ϊ�����־
int getTotalDaysOfMonth(int year, int month) {

}

// ������getTotalDaysOfYear
// ��������ȡָ����ݵ�������
// ������year - ���
// ����ֵ�����ظ���ݵ������������������Ч�򷵻�-1��Ϊ�����־
int getTotalDaysOfYear(int year) {

}


//����������
int main(){
    int day = 1;
//    ���ص����ַ������ͣ����Կ�������ָ��ָ����ַ������׵�ַ

    char *week = getWeekName(day);
    printf("%d��Ӧ����%s", day,week);
    return 0;
}