#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int my_array_a[5];
    int my_array_b[] = {1, 2, 3, 4, 5};

    size_t my_array_a_size = sizeof(my_array_a) / sizeof(my_array_a[0]);

    for (size_t i = 0; i < my_array_a_size; i++) {
        printf("my_array_b at index %zu: %d\n", i, my_array_b[i]);
        my_array_a[i] = my_array_b[i];
    }

    printf("my_array_a at index 0: %d\n", my_array_a[0]);

    return 0;
}
