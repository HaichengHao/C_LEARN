//
// Created by 郝海程 on 2024/3/27.
//题目对应第六章1.6练习5

// 函数：getWeekName
// 描述：根据输入的星期数，返回相应的星期名称
// 参数：week - 代表星期的整数（1表示星期一，7表示星期日）
// 返回值：返回表示星期名称的字符串，如果输入无效则返回空字符串
#include <stdio.h>
char *getWeekName(int week) {
//    switch (week) {
//        case 1:
//            return "星期一";
//        case 2:
//            return "星期二";
//        case 3:
//            return "星期三";
//        case 4:
//            return "星期四";
//        case 5:
//            return "星期五";
//        case 6:
//            return "星期六";
//        case 7:
//            return "星期日";
//        default:
//            return "";
//    }

//方式2，指针数组
    char * weeks[] ={"星期一", "星期二", "星期三", "星期四","星期五","星期六","星期日"};
    if(week>=1||week<=7){
        return weeks[week-1];
    } else{
        return "";
    }
}



// 函数：getMonthName
// 描述：根据输入的月份数，返回相应的月份名称
// 参数：month - 代表月份的整数（1表示一月，12表示十二月）
// 返回值：返回表示月份名称的字符串，如果输入无效则返回空字符串
char *getMonthName(int month) {
    char * months[] ={"一月", "二月", "三月", "四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
    if(month>=1||month<=12){
        return months[month-1];
    } else{
        return "";
    }
}

// 函数：isLeapYear
// 描述：检查输入的年份是否为闰年
// 参数：year - 待检查的年份
// 返回值：如果是闰年则返回1，否则返回0，如果输入为负数则返回-1作为错误标志
//提示：能被4整除但不能被100整除，或者能被400整除的年份，即为闰年。
int isLeapYear(int year) {
    if(year > 0) { //如果年份大于0表明输入正确再进行下一步的判断
            if (year % 4 == 0 && year % 100 != 0 || year % 400==0)
            {
//                printf("%d 年是闰年\n", year);
                return 1;
            } else
            {
//                printf("%d 年不是闰年\n", year);
                return 0;
            }
        }
    return -1;//如果输入的是负数则返回-1

}

// 函数：getTotalDaysOfMonth
// 描述：获取指定年份和月份的总天数
// 参数：year - 年份，month - 月份
// 返回值：返回该月份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfMonth(int year, int month) {
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(isLeapYear(year)==1){//即如果是闰年，2月就只有29天
        days[1]++;
    }
    if(month>=1&&month<=12){
        return days[month-1];//返回对应索引位置的值
    }

}


// 函数：getTotalDaysOfYear
// 描述：获取指定年份的总天数
// 参数：year - 年份
// 返回值：返回该年份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfYear(int year) {
    if(year>0){
        if (isLeapYear(year))
        {
            return 366;
        }return 365;//否则返回365
    }else if (year<0){
        return -1;//如果输入的是负数则返回-1
    }
}


//定义主函数
int main(){
    int day = 1;
//    返回的是字符串类型，所以可以利用指针指向该字符串的首地址
    char *week = getWeekName(day);
    printf("%d对应的是%s", day,week);

    int month = 3;
    char *monthName = getMonthName(month);
    printf("%d对应的是%s", month,monthName);

    int year = 2024;
    int isLeap = isLeapYear(year);
    printf("%d年是%s年\n", year, isLeap == 1? "闰年" : "平年");

    int totalDays = getTotalDaysOfMonth(year, month);
    printf("%d月有%d天\n", month, totalDays);

    int totalDaysOfYear = getTotalDaysOfYear(year);
    printf("%d年有%d天\n", year, totalDaysOfYear);
}