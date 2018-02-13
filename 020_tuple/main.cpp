#include <iostream>
#include <tuple>

int main(void)
{
    std::tuple<bool, int, double> t{true, 5, 1.5};

    std::cout << std::boolalpha
              << std::get<0>(t) << " "
              << std::get<1>(t) << " "
              << std::get<2>(t) << std::endl;

    return 0;
}

