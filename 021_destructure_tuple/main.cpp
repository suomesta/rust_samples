#include <iostream>
#include <tuple>

int main(void)
{
    std::tuple<bool, int, double> t{true, 5, 1.5};

    bool b;
    int i;
    double d;
    std::tie(b, i, d) = t;

    std::cout << std::boolalpha
              << b << " "
              << i << " "
              << d << std::endl;

    return 0;
}

