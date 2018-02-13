#include <iostream>

int square(int x)
{
    return x * x;
}

int main(void)
{
    int x = 2;

    std::cout << square(x) << std::endl;

    return 0;
}

