#include <stdio.h>

typedef enum {
    NUMBER_ZERO,
    NUMBER_ONE,
    NUMBER_TWO
} Number;

int main(void)
{
    printf("%d\n", NUMBER_ZERO);
    printf("%d\n", NUMBER_ONE);
    printf("%d\n", NUMBER_TWO);

    return 0;
}

