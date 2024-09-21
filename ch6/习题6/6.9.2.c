#include <math.h>
#include <stdio.h>
int main(void) {
    int n = 1, count = 1;
    double e = 1.0, term = 1.0;
    do {
        term = term / n;         // 计算累加项
        e = e + term;            // 累加
        n++;
        count++;                 // 记录累加的项数
    } while (fabs(term) >= 1e-5);
    printf("e=%f, count=%d", e, count);
    return 0;
}