#include <stdio.h>
#include "IsRight.h"
int IsRight(int number, const int guess) {
    if (guess < number) { // 若猜小了
        printf("Wrong!Too small!\n");
        return 0;
    } else if (guess > number) { // 若猜大了，输出相应的提示信息
        printf("Wrong!Too big!\n");
        return 0;
    } else {
        return 1;
    }
}