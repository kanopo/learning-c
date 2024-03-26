#include <stdbool.h>
#include <stdio.h>

struct my_struct {
    int x;
    bool y;
};
int main(void) {
    struct my_struct s;

    s.x = 5;
    s.y = true;

    printf("s.x = %d\n", s.x);
    printf("s.y = %d\n", s.y);

    return 0;
}
