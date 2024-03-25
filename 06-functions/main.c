#include <stdbool.h>
#include <stdio.h>

// declare the function prototype
int double_number(int number);

int main(void) {

    int number = 5;
    int doubled_number = double_number(number);

    printf("The double of %d is %d\n", number, doubled_number);
    return 0;
}

// define the function
int double_number(int number) {
    return number * 2;
}
