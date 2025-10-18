#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify modify_values")
{
    int a = 10;
    int b = 10;
    modify_values(a, b);
    REQUIRE(a == 10);
    REQUIRE(b == 15);
}

