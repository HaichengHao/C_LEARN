//
// Created by 郝海程 on 2024/3/26.
//
/*
 * ### 字符串数组的表示

字符串可以使用一维字符数组或字符指针变量等两种方式表示，那么字符串数组如何表示呢？

如果一个数组的每个成员都是一个字符串，则构成了字符串数组。字符串数组有两种表示方式：`① 二维字符数组` ；`②字符指针数组`。*/

//方式1：使用二维字符数组

/*
#include <stdio.h>
int main(){

    char fruit[][7]={"Apple","Orange","Grape","Pear","Peach"};
    char weekdays[][10] = {   //行数7也可以省略
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };
//    字符串数组，一共包含7个字符串，所以第一维的长度是7。其中，最长的字符串"Wednesday"的长度是10（含结尾的终止符 \0 ），所以第二维的长度统一设为10。

    return 0;
}*/

//**思考：数组的第二维，长度统一定为10，有点浪费空间，因为大多数成员的长度都小于10。解决方法就是把数组的第二维，从字符数组改成字符指针。

//方式2，创建指针数组

/*
#include <stdio.h>
int main(){
    char* weekdays[7] = {  //7也可以省略
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };
//    遍历
    for(int i = 0;i<7;i++){
        printf("%s\n",weekdays[i]);
    }
    return 0;
}*/
////上面的字符串数组，其实是一个一维数组，成员就是7个字符指针，每个指针指向一个字符串（字符数组）


//请编写程序，定义一个字符指针数组，用来存储四大名著的书名， 并通过遍历该指针数组，显示字符串信息 ， (即：定义一个指针数组，该数组的每个元素，指向的是一个字符串)

#include <stdio.h>
int main(){
    char* book[4] = {  //4也可以省略
            "三国演义",
            "水浒传",
            "西游记",
            "红楼梦"
    };
for(int i=0;i<4;i++){
    printf("%s\n",book[i]);
}
    return 0;
}
