#include <stdio.h>
int main(void) {
    int i, j, k;
    for (i=1; i<=9; i++) {                  // 遍历百位数字的所有可能取值
        for (j=0; j<=9;j++) {               // 遍历十位数字的所有可能取值
            for (k=0;k<=9;k++) {            // 遍历个位数字的所有可能取值
                // 水仙花数判定
                if (i * 100 + j * 10 + k == (i * i * i + k * k * k + j * j * j)) {
                    printf("%6d", i * 100 + j * 10 + k);
                }
            }
        }
    }
    printf("\n");
    return 0;
}