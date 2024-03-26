#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int x[3];

    x[0] = 5;
    x[1] = 10;
    x[2] = 5;

    int* ptr = &x[0];  // ptr points to the first element of x

    printf("The address of x[0] is %p\n", (void*)ptr);
    printf("The address of x[0] is %p\n", (void*)(ptr + 1));

    printf("Value at ptr: %d\n", *ptr);
    printf("Value at ptr: %d\n", *(ptr + 1));

    return 0;
}
