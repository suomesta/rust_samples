#include <cstdint>
#include <limits>
#include <iostream>

int main(void)
{
    // plain example
    int i = 5;

    std::cout << i << std::endl;

    // use all integer types
    std::int8_t int8 = std::numeric_limits<std::int8_t>::max();
    std::int16_t int16 = std::numeric_limits<std::int16_t>::max();
    std::int32_t int32 = std::numeric_limits<std::int32_t>::max();
    std::int64_t int64 = std::numeric_limits<std::int64_t>::max();
    std::uint8_t uint8 = std::numeric_limits<std::uint8_t>::max();
    std::uint16_t uint16 = std::numeric_limits<std::uint16_t>::max();
    std::uint32_t uint32 = std::numeric_limits<std::uint32_t>::max();
    std::uint64_t uint64 = std::numeric_limits<std::uint64_t>::max();

    std::cout << (int8 + 0) << " "
              << int16 << " "
              << int32 << " "
              << int64 << " "
              << (uint8 + 0) << " "
              << uint16 << " "
              << uint32 << " "
              << uint64 << std::endl;

    return 0;
}

