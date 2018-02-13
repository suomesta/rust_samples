#include <iostream>

int main(void)
{
    auto i = 5;
    auto d = 1.25;
    auto t = true;
    auto s = "string";
    auto a = {1, 2, 3}; // a is std::intializer_list<int>

    std::cout << std::boolalpha
              << i << " "
              << d << " "
              << t << " "
              << s << " "
              << *a.begin() << std::endl;

    return 0;
}

