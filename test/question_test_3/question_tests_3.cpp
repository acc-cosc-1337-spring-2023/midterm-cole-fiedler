#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify that roll die function returns a random number between 1 and 6")
{
	auto die_roll = 0; // initialize die_roll variable within test case
	die_roll = roll_die(); // assign die_roll to return value of roll_die
	for(int i = 0; i < 15; i++) // write a loop that iterates at least 10 times and validate value return is 1 - 6
	{
		REQUIRE((die_roll) > 0); // red green go
		REQUIRE((die_roll) < 7); // red green go
	}
}
// 32 assertions pass in 3 cases
