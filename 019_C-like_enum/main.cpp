#include <iostream>

enum class Number
{
    Zero,
    One,
    Two
};

int main(void)
{
    std::cout << static_cast<int>(Number::Zero) << std::endl;
    std::cout << static_cast<int>(Number::One) << std::endl;
    std::cout << static_cast<int>(Number::Two) << std::endl;

    return 0;
}

