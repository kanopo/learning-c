#include <stdbool.h>
#include <stdio.h>

int main(void) {

    int i = 0;

    while (i < 5) {
        // exlude 5
        // [0, 5)
        printf("i: %d\n", i);
        i++;
    }

    return 0;
}
