#include <array>
#include <iostream>

int main(void)
{
    std::array<int, 3> a = {1, 2, 3};

    for (int i: a) {
        std::cout << i << std::endl;
    }

    return 0;
}

