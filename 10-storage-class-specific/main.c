#include <stdbool.h>
#include <stdio.h>

int main(void) {

    extern int i; // define i in another file
    static int j = 0; // hold value between calls
    register int k = 0; // store in register
    auto int l = 0; // automatic storage duration

    return 0;
}
