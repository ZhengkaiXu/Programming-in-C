#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "guess.h" // 此头文件将在全部代码编写完毕后添加
int main(void) {
    int number; // 计算机生成的随机数
    char reply; // 用户对于是否继续猜数的回答
    srand(time(NULL)); // 初始化随机种子
    do {
        number = MakeNumber(); // 计算机生成一个随机数
        GuessNumber(number); // 用户猜数字
        printf("Do you want to continue(Y/N or y/n)?"); // 提示是否继续
        scanf(" %c",&reply); // %c前有一个空格
    } while (reply == 'Y' || reply == 'y'); // 输入Y或y则程序继续
    return 0;
}