#include "IsValidNum.h";
// 函数功能：判断用户的输入是否在合法的数值范围（1-100）之内
// 函数参数：number是用户输入的数
// 函数返回值：若合法，则返回非0的值；否则，返回0
 int IsValidNum(int number) {
    if (number >= MIN_NUMBER && number <= MAX_NUMBER)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}