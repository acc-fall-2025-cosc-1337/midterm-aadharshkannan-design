#include <iostream>
#include "question4.h"

int main()
{
    int n;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y')
    {
        std::cout << "Enter a number (1–15): ";
        std::cin >> n;

        if (n < 1 || n > 15)
        {
            std::cout << "Invalid range.\n";
        }
        else
        {
            std::cout << "Fibonacci sequence: " << get_fib_sequence(n) << "\n";
        }

        std::cout << "Try again? (y/n): ";
        std::cin >> cont;
    }

    return 0;
}
