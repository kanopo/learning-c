#include <stdbool.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    // argc is the number of arguments
    // argv is an array of strings

    if (argc == 1) {
        printf("No arguments provided\n");
    } else {
        for (int i = 1; i < argc; i++) {
            printf("argv[%d]: %s\n", i, argv[i]);
        }
    }

    return 0;
}
