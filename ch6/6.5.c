#include <stdio.h>
int main(void) {
    int i, j;
    for (i = 0; i < 3; i++) { // 控制外层循环执行3次
        printf("i = %d: ", i);
        for (j = 0; j < 4; j++) { // 控制内层循环执行4次
            printf("j = %d ", j);
        }
        printf("\n");
    }
    return 0;
}