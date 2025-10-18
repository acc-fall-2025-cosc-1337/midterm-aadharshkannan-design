//
bool test_config()
{
    return true;
}

#include "question4.h"

std::string get_fib_sequence(int n)
{
    if (n < 1)
        return "";

    int a = 0, b = 1;
    std::string seq = "0 1";

    for (int i = 2; i <= n; i++)
    {
        int next = a + b;
        seq += " " + std::to_string(next);
        a = b;
        b = next;
    }
    return seq;
}
