#include <stdbool.h>
#include <stdio.h>

union my_union {
    int x;
    bool y;
    char z[20];
};

/*
    A union is a special data type that can store different data types at the
   same memory location. You can define a union with many members, but only one
   member can contain a value at any given time. Unions provide an efficient way
   of using the same memory location for multiple purposes. A union’s size will
   be the size of the largest constituent type.
*/

int main(void) {
    union my_union u;

    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(bool) = %zu\n", sizeof(bool));
    printf("sizeof(char[20]) = %zu\n", sizeof(char[20]));

    printf("sizeof(u) = %zu\n", sizeof(u));

    return 0;
}
