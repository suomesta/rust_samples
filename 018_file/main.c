#include <stdio.h>

int main(void)
{
    {
        FILE* fp = fopen("/tmp/tmp", "w");
        if (fp != NULL) {
            fputs("C test", fp);
            fclose(fp);
        }
    }

    {
        FILE* fp = fopen("/tmp/tmp", "r");
        if (fp != NULL) {
            char buf[256];
            fgets(buf, sizeof(buf) - 1, fp);
            fclose(fp);

            printf("%s\n", buf);
        }
    }

    return 0;
}

