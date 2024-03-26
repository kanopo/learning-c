#include <stdbool.h>
#include <stdio.h>

int main(void) {

    int x = 5;

    // Explanation:
    // (void*)&x is a typecast to void* of the address of x.
    // the cast is necessary because the %p format specifier expects a void*.
    printf("The address of x is %p\n", (void*)&x);

    return 0;
}
