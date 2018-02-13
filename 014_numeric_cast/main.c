#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int32_t i = 5;
    double d = 1.9;
    uint32_t ui = 10;
    int32_t negative_i = -1;
    uint32_t large_ui = 4294967295;

    printf("%d -> %f\n", i, (double)i);
    printf("%f -> %d\n", d, (int32_t)d);
    printf("%d -> %u\n", i, (uint32_t)i);
    printf("%u -> %d\n", ui, (int32_t)ui);
    printf("%d -> %u\n", negative_i, (uint32_t)negative_i);
    printf("%u -> %d\n", large_ui, (int32_t)large_ui);

    return 0;
}

