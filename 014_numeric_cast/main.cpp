#include <cstdint>
#include <limits>
#include <iostream>

int main(void)
{
    int32_t i = 5;
    double d = 1.9;
    uint32_t ui = 10;
    int32_t negative_i = -1;
    uint32_t large_ui = 4294967295;

    std::cout << i << " -> " << static_cast<double>(i) << std::endl;
    std::cout << d << " -> " << static_cast<int32_t>(d) << std::endl;
    std::cout << i << " -> " << static_cast<uint32_t>(i) << std::endl;
    std::cout << ui << " -> " << static_cast<int32_t>(ui) << std::endl;
    std::cout << negative_i << " -> " << static_cast<uint32_t>(negative_i) << std::endl;
    std::cout << large_ui << " -> " << static_cast<int32_t>(large_ui) << std::endl;

    return 0;
}

