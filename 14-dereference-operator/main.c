#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int x = 5;
    int* ptr = &x;

    printf("The value stored at x is %d\n", *ptr);

    return 0;
}
