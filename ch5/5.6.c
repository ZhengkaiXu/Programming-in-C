#include <stdio.h>
#include <math.h>
int main(void) {
    float data1, data2;
    char op;
    printf("Please enter an expression:");
    scanf("%f %c%f", &data1, &op, &data2);                             // 输入运算表达式，%c前有一个空格
    switch (op) {                                                      // 根据输入的运算符确定执行的运算
        case '+':                                                      // 加法运算
            printf("%f+%f = %f\n", data1, data2, data1+data2);
            break;
        case '-':                                                      // 减法运算
            printf("%f-%f = %f\n", data1, data2, data1-data2);
            break;
        case '*':                                                      // 在输入的乘法算式中，可以使用*作为乘法运算符
        case 'x':                                                      // 在输入的乘法算式中，可以使用x作为乘法运算符
        case 'X':                                                      // 在输入的乘法算式中，可以使用X作为乘法运算符
            printf("%f* %f = %f\n", data1, data2, data1*data2);
            break;
        case '/':                                                      // 除法运算
            if (fabs(data2) < 1e-7) {                                  // 为避免除0错误，检验除数是否为0，实数与0比较
                printf("Division by zero!\n");
            } else {
                printf("%f/%f = %f\n", data1, data2, data1/data2);
            }
            break;
        default:                                                       // 处理非法运算符
            printf("Invalid operator!\n");
    }
    return 0;
}