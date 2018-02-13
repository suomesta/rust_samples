#include <iostream>

int main(void)
{
    auto square = [](double d) -> double { return d * d; };

    std::cout << square(2.0) << std::endl;

    return 0;
}

