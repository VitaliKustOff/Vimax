#include "vimax/core/core.hpp"

#include <iostream>


int main()
{
    vimax::Core core;

    core.initialize();

    std::cout << "Vimax Core test passed\n";

    return 0;
}