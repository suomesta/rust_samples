#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char s[] = "abc";

    errno = 0;
    char* p;
    long i = strtol(s, &p, 10);

    if ((p == s) ||
        (*p != '\0') ||
        (errno != 0))
    {
        printf("error\n");
    }

    return 0;
}

