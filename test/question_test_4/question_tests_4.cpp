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

TEST_CASE("Verify get fib seq function returns proper string sequence")
{
	std::string fib_seq = " ";
	int num_nums = 0;
	fib_seq = get_fib_sequence(num_nums);
	
	REQUIRE(get_fib_sequence(5) == "");
}