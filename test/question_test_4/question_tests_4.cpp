#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

/*
TEST_CASE("Verify get fib seq funtion returns proper string seqeunce")
{
	auto die_roll = 0; // initialize die_roll variable within test case
	die_roll = roll_die(); // assign die_roll to return value of roll_die
	for(int i = 0; i < 15; i++) // write a loop that iterates at least 10 times and validate value return is 1 - 6
	{
		REQUIRE((die_roll) > 0); // red green go
		REQUIRE((die_roll) < 7); // red green go
	}
}
*/

TEST_CASE("Verify get fib seq function returns proper string sequence")
{
	int num_nums = 0;
	std::string fib_seq = get_fib_sequence(num_nums);
	while(num_nums = 5)
	{
		REQUIRE((fib_seq) == "0 1 1 2 3 5");
	}
}
