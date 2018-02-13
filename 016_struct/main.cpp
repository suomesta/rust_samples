#include <iostream>

struct Point
{
    int x;
    int y;
};

int main(void)
{
    Point point = {10, 20};
    point.x += 5;

    std::cout << point.x << " " << point.y << std::endl;

    return 0;
}

