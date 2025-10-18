#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify get_fib_sequence")
{
    REQUIRE(get_fib_sequence(5) == "0 1 1 2 3 5");
    REQUIRE(get_fib_sequence(7) == "0 1 1 2 3 5 8");
    REQUIRE(get_fib_sequence(10) == "0 1 1 2 3 5 8 13 21 34 55");
}

