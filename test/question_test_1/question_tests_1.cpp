#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h" // includes function prototypes into test case

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify find_gcd returns accurate result") // test gcd function to ensure correct result returned
{
	REQUIRE(find_gcd(15,25) == 5);
}