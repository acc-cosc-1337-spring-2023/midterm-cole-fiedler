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
	REQUIRE(roll_die() > 0 && roll_die() < 7); // require roll die function to produce result between 1 and 6
											   // function iterates 10 times using for loop within a do/while loop
}
