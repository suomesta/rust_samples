#include <iostream>

struct Point
{
    int x;
    int y;

    friend std::ostream& operator<<(std::ostream& os, const Point& self)
    {
        os << self.x << " " << self.y;
        return os;
    }
};

int main(void)
{
    Point point = {10, 20};

    std::cout << point << std::endl;

    return 0;
}

