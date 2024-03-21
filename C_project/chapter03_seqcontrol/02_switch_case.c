//
// Created by 郝海程 on 2024/3/21.
//
/*
 *switch 语句用于判断条件有多个常量结果的情况。
 * 它把多重的 else if 改成更易用、可读性更好的形式。
 * 格式
 * switch(表达式 注意，不能是浮点类型){
	case 常量值1:
        语句块1;
        //break;
	case 常量值2:
        语句块2;
        //break;
	┇ ┇
	case 常量值n:
        语句块n;
        //break;
	[default:
        语句块n+1;
    ]
}
 *
 * **执行过程：**

第1步：根据switch中表达式的值，依次匹配各个case。如果表达式的值等于某个case中的常量值，则执行对应case中的执行语句。

第2步：执行完此case的执行语句以后，
          情况1：如果遇到break，则执行break并跳出当前的switch-case结构
	        情况2：如果没有遇到break，则会继续执行当前case之后的其它case中的执行语句。--->`case穿透`
	         ...
	        直到遇到break关键字或执行完所有的case及default的执行语句，跳出当前的switch-case结构

**使用注意点：**

- case子句中的值必须是常量，不能是变量名或不确定的表达式值或范围。

- 同一个switch语句，所有case子句中的常量值互不相同。
- 如果没有break，程序会顺序执行到switch结尾；从使用频率说，一般switch-case结构中，都需要编写break。
- default子句是可选的。同时，位置也是灵活的。当没有匹配的case时，执行default语句。

 **执行过程：**

第1步：根据switch中表达式的值，依次匹配各个case。如果表达式的值等于某个case中的常量值，则执行对应case中的执行语句。

第2步：执行完此case的执行语句以后，
            情况1：如果遇到break，则执行break并跳出当前的switch-case结构
	        情况2：如果没有遇到break，则会继续执行当前case之后的其它case中的执行语句。--->`case穿透`
	         ...
	        直到遇到break关键字或执行完所有的case及default的执行语句，跳出当前的switch-case结构*/

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

//switch case的练习
//case穿透
//#include <stdio.h>
//int main(){
//    int score;
//    printf("请输入您的考试成绩>>>");
//    scanf("%d",&score);
//    switch(score/10){
//        case 0:
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("不及格");
//            break;
//        case 6:
//        case 7:
//        case 8:
//        case 9:
//        case 10:
//            printf("及格");
//            break;
//        default:
//            printf("成绩输入有误");
//            break;
//    }
//    return 0;
//}
//更好的解法
#include <stdio.h>
int main(){
    int score;
    printf("请输入您的考试成绩>>>");
    scanf("%d",&score);
    switch(score/60){  //和上面一样，利用int截断整数位，如果小于60，则整数位就小于1，这时候代表不及格，
        case 0:
            printf("不及格");
            break;
        case 1:  //如果为1，则表示及格，因为100以内大于60的数除60都大于1
            printf("及格");
            break;
        default:
            printf("成绩输入有误");
            break;

    }
    return 0;
}

/*
 * #### if-else与switch-case比较

- 结论：凡是使用switch-case的结构都可以转换为if-else结构。反之，不成立。
- 开发经验：如果既可以使用switch-case，又可以使用if-else，建议使用switch-case。因为效率稍高。

- 细节对比：
  - if-else语句优势
    - if语句的条件可以用于范围的判断，也可以用于等值的判断，`使用范围更广`。
    - switch语句的条件是一个常量值，只能判断某个变量或表达式的结果是否等于某个常量值，`使用场景较狭窄`。
  - switch语句优势
    - 当条件是判断某个变量或表达式是否等于某个固定的常量值时，使用if和switch都可以，习惯上使用switch更多。因为`效率稍高`。当条件是区间范围的判断时，只能使用if语句。
    - 使用switch可以利用`穿透性`，同时执行多个分支，而if...else没有穿透性。

*/