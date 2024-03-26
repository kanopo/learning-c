#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int* x = (int*)malloc(sizeof(int));
    // print pointer value

    printf("%p\n", (void*)x);

    // test if memory is allocated
    if (x) {
        // add a number to the storage the pointer point at

        *x = 2;

        printf("Value of pointer x is %d\n", *x);

        // increment the size of the heap allocation for a new number

        x = realloc(x, sizeof(int) * 2);

        printf("Reallocated %p\n", (void*)x);
        int* second_x = x + sizeof(int);

        *second_x = 10;

        printf("Value of pointer x2 is %d\n", *second_x);
        printf("Size of an int value %zu\n", sizeof(int));
        printf("Pointer to x2 %p\n", (void*)second_x);

        free(x);
    }

    return 0;
}
