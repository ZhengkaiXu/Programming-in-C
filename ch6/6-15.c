#include <stdio.h>
int main(void) {
    float term, result = 1;
    int n;
    for (n = 2; n <= 100; n = n + 2) {
        term = (n * n) / ((n - 1) * (n + 1));
        result = result * term;
    }
    printf("pi = %f\n", 2 * result);
    return 0;
}