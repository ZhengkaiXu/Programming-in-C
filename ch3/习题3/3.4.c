#include <math.h>
#include <stdio.h>
int main(void) {
    float a, b, c, disc, p, q;
    printf("Please enter the coefficients a, b, c:");
    scanf("%f,%f,%f", &a, &b, &c);                    // 要求输入满足方程有两个不相等实根的条件
    disc = b * b - 4 * a * c;                         // 计算判别式
    p = -b / (2 * a);
    q = sqrt(disc) / (2 * a);
    printf("x1=%7.4f,x2=%7.4f\n", p+q, p-q);
    return 0;
}