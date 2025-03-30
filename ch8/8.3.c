#include <stdio.h>
#define MONTHS 12
int main(void) {
    int days[2][MONTHS] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                           {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int year, month;
    do {
        printf("Input your month:");
        scanf("%d,%d", &year, &month);
    } while (month < 1 || month > 12); // 处理不合法数据的输入
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))  { /* 闰年 */
        printf("The number of days is %d\n", days[1][month - 1]);
    } else { // 非闰年
        printf("The number of days is %d\n", days[0][month - 1]);
    }
    return 0;
}