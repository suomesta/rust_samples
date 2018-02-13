#include <iostream>
#include <map>

void print_map(const std::map<char, int>& m)
{
    std::cout << "{";
    for (auto i = m.begin(); i != m.end(); ++i) {
        if (i != m.begin()) {
            std::cout << ", ";
        }
        std::cout << "'" << i->first << "': " << i->second;
    }
    std::cout << "}" << std::endl;
}

int main(void)
{
    std::cout << "initialize map" << std::endl;
    std::map<char, int> m = {{'A', 10}, {'B', 11}, {'C', 12}};
    print_map(m);
    std::cout << std::endl;

    std::cout << "get length" << std::endl;
    std::cout << "length is " << m.size() << std::endl;
    std::cout << std::endl;

    std::cout << "find" << std::endl;
    auto i = m.find('A');
    if (i != m.end()) {
        std::cout << "'A' is " << i->second << std::endl;
    }
    else {
        std::cout << "Not found 'A'" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "not find" << std::endl;
    auto j = m.find('D');
    if (i != m.end()) {
        std::cout << "'D' is " << i->second << std::endl;
    }
    else {
        std::cout << "Not found 'D'" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "remove" << std::endl;
    m.erase('A');
    print_map(m);
    std::cout << std::endl;

    std::cout << "range for" << std::endl;
    for (const auto& k: m) {
        std::cout << k.first << ": " << k.second << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
