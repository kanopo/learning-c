#include <stdbool.h>
#include <stdio.h>

int main(void) {
    unsigned char a = 5;  // 0000 0101
    unsigned char b = 1;  // 0000 0001

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("a & b = %d\n", a & b);  // 0000 0001
    printf("a | b = %d\n", a | b);  // 0000 0101
    printf("a ^ b = %d\n", a ^ b);  // 0000 0100
    printf("~a = %d\n", a = ~a);    // 1111 1010

    return 0;
}
