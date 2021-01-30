#include "lib.hpp"

#include <iostream>

int main()
{
    int a = 2, b = 3;
    std::cout << a << "x" << b << "=" << multiply(a, b) << std::endl;
    return 0;
}