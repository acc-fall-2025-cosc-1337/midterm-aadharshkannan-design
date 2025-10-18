#include <iostream>
#include "question3.h"

int main()
{
    int num1, num2;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y')
    {
        std::cout << "Enter two integers (1–200): ";
        std::cin >> num1 >> num2;

        if (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200)
        {
            std::cout << "Numbers must be between 1 and 200.\n";
        }
        else
        {
            std::cout << "GCD: " << find_gcd(num1, num2) << "\n";
        }

        std::cout << "Try again? (y/n): ";
        std::cin >> cont;
    }

    return 0;
}
