#include <fstream>
#include <iostream>
#include <string>

int main(void)
{
    {
        std::ofstream file("/tmp/tmp");
        if (file) {
            file << "C++ test";
        }
    }

    {
        std::string str;
        std::ifstream file("/tmp/tmp");
        if (file.good()) {
            std::getline(file, str);

            std::cout << str << std::endl;
        }
    }

    return 0;
}

