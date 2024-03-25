#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int a = 0;
    char greating_a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greating_b[] = "Hello";
    char* greating_c = "Hello";

    printf("a: %d\n", a);
    printf("greating_a: %s\n", greating_a);
    printf("greating_b: %s\n", greating_b);
    printf("greating_c: %s\n", greating_c);


    return 0;
}
