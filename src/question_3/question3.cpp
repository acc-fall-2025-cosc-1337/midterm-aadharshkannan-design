#include "question3.h"

int find_gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    if (a > 1)
        return a;
    return -1;
}
