#include <stdio.h>
int main(void) {
    int i, n;
    for (i = 1; i < 5; i++) {
        printf("Please enter n: ");
        scanf("%d", &n);
        if (n < 0) {
            break;
        }
        printf("n = %d\n", n);
    }
    printf("Program is over!\n");
    return 0;
}