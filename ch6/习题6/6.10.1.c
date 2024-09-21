#include <stdio.h>
int main(void) {
    int i, j, k, n;
    for (n = 100; n < 1000; n++) {
        i = n / 100;                                    // 分离出百位数字
        j = (n - i * 100) / 10;                         // 分离出十位数字
        k = n % 10;                                     // 分离出个位数字
        if (n == (i * i * i + j * j * j + k * k * k)) { // 判定是否满足水仙花数的条件
            printf("%6d", n);
        }
    }
    printf("\n");
    return 0;
}