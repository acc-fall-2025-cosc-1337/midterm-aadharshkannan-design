#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify find_gcd")
{
    REQUIRE(find_gcd(15, 25) == 5);
    REQUIRE(find_gcd(16, 32) == 16);
    REQUIRE(find_gcd(159, 309) == 3);
}

