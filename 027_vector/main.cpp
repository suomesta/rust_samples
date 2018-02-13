#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v)
{
    std::cout << "[";
    for (auto i = v.cbegin(); i != v.cend(); ++i) {
        if (i != v.cbegin()) {
            std::cout << ", ";
        }
        std::cout << *i;
    }
    std::cout << "]" << std::endl;
}

int main(void)
{
    std::cout << "initialize vector" << std::endl;
    std::vector<int> v{1, 2, 3};
    print_vector(v);
    std::cout << std::endl;

    std::cout << "get length" << std::endl;
    std::cout << "length is " << v.size() << std::endl;
    std::cout << std::endl;

    std::cout << "push" << std::endl;
    v.push_back(4);
    print_vector(v);
    std::cout << std::endl;

    std::cout << "pop" << std::endl;
    v.pop_back();
    print_vector(v);
    std::cout << std::endl;

    std::cout << "accessor []" << std::endl;
    std::cout << "[0] is " << v[0] << std::endl;
    std::cout << std::endl;

    std::cout << "range for" << std::endl;
    for (const auto& x: v) {
        std::cout << x << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

