#include<stdio.h>
int main(void) {
    int data1, data2;
    char op;
    printf("Please enter the expression data1+data2\n");
    scanf("%d%c%d", &data1, &op, &data2);
    printf("%d%c%d = %d\n", data1, op, data2, data1 + data2);
    return 0;
}