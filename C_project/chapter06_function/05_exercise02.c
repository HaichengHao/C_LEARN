//
// Created by �º��� on 2024/3/27.
//��Ŀ��Ӧ������1.6��ϰ5

// ������getWeekName
// �����������������������������Ӧ����������
// ������week - �������ڵ�������1��ʾ����һ��7��ʾ�����գ�
// ����ֵ�����ر�ʾ�������Ƶ��ַ��������������Ч�򷵻ؿ��ַ���
#include <stdio.h>
char *getWeekName(int week) {
//    switch (week) {
//        case 1:
//            return "����һ";
//        case 2:
//            return "���ڶ�";
//        case 3:
//            return "������";
//        case 4:
//            return "������";
//        case 5:
//            return "������";
//        case 6:
//            return "������";
//        case 7:
//            return "������";
//        default:
//            return "";
//    }

//��ʽ2��ָ������
    char * weeks[] ={"����һ", "���ڶ�", "������", "������","������","������","������"};
    if(week>=1||week<=7){
        return weeks[week-1];
    } else{
        return "";
    }
}



// ������getMonthName
// ����������������·�����������Ӧ���·�����
// ������month - �����·ݵ�������1��ʾһ�£�12��ʾʮ���£�
// ����ֵ�����ر�ʾ�·����Ƶ��ַ��������������Ч�򷵻ؿ��ַ���
char *getMonthName(int month) {
    char * months[] ={"һ��", "����", "����", "����","����","����","����","����","����","ʮ��","ʮһ��","ʮ����"};
    if(month>=1||month<=12){
        return months[month-1];
    } else{
        return "";
    }
}

// ������isLeapYear
// ������������������Ƿ�Ϊ����
// ������year - ���������
// ����ֵ������������򷵻�1�����򷵻�0���������Ϊ�����򷵻�-1��Ϊ�����־
//��ʾ���ܱ�4���������ܱ�100�����������ܱ�400��������ݣ���Ϊ���ꡣ
int isLeapYear(int year) {
    if(year > 0) { //�����ݴ���0����������ȷ�ٽ�����һ�����ж�
            if (year % 4 == 0 && year % 100 != 0 || year % 400==0)
            {
//                printf("%d ��������\n", year);
                return 1;
            } else
            {
//                printf("%d �겻������\n", year);
                return 0;
            }
        }
    return -1;//���������Ǹ����򷵻�-1

}

// ������getTotalDaysOfMonth
// ��������ȡָ����ݺ��·ݵ�������
// ������year - ��ݣ�month - �·�
// ����ֵ�����ظ��·ݵ������������������Ч�򷵻�-1��Ϊ�����־
int getTotalDaysOfMonth(int year, int month) {
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(isLeapYear(year)==1){//����������꣬2�¾�ֻ��29��
        days[1]++;
    }
    if(month>=1&&month<=12){
        return days[month-1];//���ض�Ӧ����λ�õ�ֵ
    }

}


// ������getTotalDaysOfYear
// ��������ȡָ����ݵ�������
// ������year - ���
// ����ֵ�����ظ���ݵ������������������Ч�򷵻�-1��Ϊ�����־
int getTotalDaysOfYear(int year) {
    if(year>0){
        if (isLeapYear(year))
        {
            return 366;
        }return 365;//���򷵻�365
    }else if (year<0){
        return -1;//���������Ǹ����򷵻�-1
    }
}


//����������
int main(){
    int day = 1;
//    ���ص����ַ������ͣ����Կ�������ָ��ָ����ַ������׵�ַ
    char *week = getWeekName(day);
    printf("%d��Ӧ����%s", day,week);

    int month = 3;
    char *monthName = getMonthName(month);
    printf("%d��Ӧ����%s", month,monthName);

    int year = 2024;
    int isLeap = isLeapYear(year);
    printf("%d����%s��\n", year, isLeap == 1? "����" : "ƽ��");

    int totalDays = getTotalDaysOfMonth(year, month);
    printf("%d����%d��\n", month, totalDays);

    int totalDaysOfYear = getTotalDaysOfYear(year);
    printf("%d����%d��\n", year, totalDaysOfYear);
}