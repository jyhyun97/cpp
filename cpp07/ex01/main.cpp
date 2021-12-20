#include <iostream>
#include "iter.hpp"

void print_c(char a)
{
    std::cout << a << " ";
}

void print_i(int a)
{
    std::cout << a << " ";
}

int main()
{
    char test_c[5] = {'a', 'b', 'c', 'd', 'e'};
    int test_i[5] = {1, 2, 3, 4, 5};
    ::Iter(test_c, 5, print_c);
    std::cout << std::endl;
    ::Iter(test_i, 5, print_i);
    std::cout << std::endl;
    
    return (0);
}