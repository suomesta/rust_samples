#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // plain example
    int i = 5;

    printf("%d\n", i);

    // use all integer types
    int8_t int8 = 127;
    int16_t int16 = 32767;
    int32_t int32 = 2147483647;
    int64_t int64 = 9223372036854775807LL;
    uint8_t uint8 = 255;
    uint16_t uint16 = 65535;
    uint32_t uint32 = 4294967295;
    uint64_t uint64 = 18446744073709551615ULL;

    printf("%d %d %d %lld %u %u %u %llu\n",
           int8, int16, int32, int64, uint8, uint16, uint32, uint64);

    return 0;
}

