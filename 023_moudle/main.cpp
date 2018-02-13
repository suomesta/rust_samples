#include <iostream>

namespace my_module {

struct Point
{
    int x;
    int y;
};

void output(int x, int y)
{
    std::cout << x << " " << y << std::endl;
}

} // namespace my_module

int main(void)
{
    my_module::Point point = {10, 20};
    my_module::output(point.x, point.y);

    return 0;
}

