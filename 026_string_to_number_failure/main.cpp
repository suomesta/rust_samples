#include <iostream>
#include <string>

int main(void)
{
    std::string s = "abc";
    try {
        int i = stoi(s);
    }
    catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

