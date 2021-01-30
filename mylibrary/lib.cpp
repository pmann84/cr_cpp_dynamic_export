#include "lib.hpp"

int multiply(int a, int b)
{
    return a * b;
}

class number
{
public:
    number(int value) : value(value) {}

    int value = 0;
};