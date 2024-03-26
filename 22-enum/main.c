#include <stdbool.h>
#include <stdio.h>

enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(void) {

    for (int i = MONDAY; i < SUNDAY; i++) {
        printf("Day %d\n", i);
    }
    return 0;
}
