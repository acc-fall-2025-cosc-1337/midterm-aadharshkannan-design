

#include <iostream>
#include "question1.h"

int main()
{
    std::string binary;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y')
    {
        std::cout << "Enter 8-bit binary number: ";
        std::cin >> binary;

        if (binary.size() != 8 || binary.find_first_not_of("01") != std::string::npos)
        {
            std::cout << "Invalid input. Must be 8 characters of only 0 or 1.\n";
        }
        else
        {
            std::cout << "Decimal value: " << binary_to_decimal(binary) << "\n";
        }

        std::cout << "Try again? (y/n): ";
        std::cin >> cont;
    }

    return 0;
}
