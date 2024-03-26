#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

int sum(int count, ...);

int main(void) {
    int s = sum(3, 1, 2, 3);
    printf("sum = %d\n", s);

    return 0;
}

int sum(int count, ...) {
    int total = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}
