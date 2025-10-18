

#include "question1.h"

int binary_to_decimal(std::string binary)
{
    int decimal = 0;
    for (int i = 0; i < 8; i++)
    {
        if (binary[i] == '1')
        {
            decimal += (1 << (7 - i)); // shift left = 2^(7-i)
        }
    }
    return decimal;
}
