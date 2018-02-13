#include <stdio.h>

int square(int x)
{
    return x * x;
}

int main(void)
{
    int x = 2;

    printf("%d\n", square(x));

    return 0;
}

