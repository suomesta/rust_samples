#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

int main(void)
{
    Point point = {10, 20};
    point.x += 5;

    printf("%d %d\n", point.x, point.y);

    return 0;
}

