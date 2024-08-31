#include <stdio.h>
int main(void) {
    char ch;
    printf("Please a key and then press Enter:");
    ch = getchar();
    ch = ch - 32;
    printf("%c, %d\n", ch, ch);                     // 输出ch中的字符及其ASCII码值
    return 0;
}