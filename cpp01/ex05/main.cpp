#include "karen.hpp"

int main(void)
{
    Karen karen;
    std::string level;
    while(1)
    {
        std::cin >> level;
        karen.complain(level);
    }
    return (0);
}