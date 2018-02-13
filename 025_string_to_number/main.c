#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char s[] = "15";
    long i = strtol(s, NULL, 10);

    printf("%ld\n", i);

    return 0;
}

