#include <iostream>
#include "question2.h"

int main()
{
    int a = 10, b = 10;
    modify_values(a, b);

    std::cout << "Value parameter (a): " << a << "\n";
    std::cout << "Reference parameter (b): " << b << "\n";

    return 0;
}
