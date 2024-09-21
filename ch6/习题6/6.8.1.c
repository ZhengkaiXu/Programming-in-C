#include <math.h>
#include <stdio.h>
int main (void) {
    double pi, sum = 0, term, sign = 1;
    int count = 0, n = 1;
    do {
        term = sign / n;                      // 计算累加项
        sum = sum + term;                     // 累加
        count++;                              // 记录累加的项数
        sign = -sign;                         // 累加项分子的变化规律
        n = n + 2;                            // 累加项分母的变化规律
    } while (fabs(term) >= 1e-4);             // 判断累加项是否满足循环终止条件
    pi = sum * 4;
    printf("pi = %f\ncount = %d\n", pi, count);
    return 0;
}