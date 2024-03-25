#include <stdbool.h>
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        // exlude 5
        // [0, 5)
        printf("i: %d\n", i);
    }

    for (int i = 0; i <= 5; i++) {
        // include 5
        // [0, 5]
        printf("i: %d\n", i);
    }

    return 0;
}
