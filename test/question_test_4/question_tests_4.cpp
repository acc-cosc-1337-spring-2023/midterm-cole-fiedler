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
	REQUIRE(get_fib_sequence(5) == "0 1 1 2 3 5"); // red green go
	REQUIRE(get_fib_sequence(7) == "0 1 1 2 3 5 8 13"); // red green go											  0 1 2 3 4 5 6 <- only 6 values
														// question 4 on test states get_fib_seq(7) should return 0 1 1 2 3 5 8 
														// however that only includes 6 values and does not match the fibb pattern
	REQUIRE(get_fib_sequence(10) == "0 1 1 2 3 5 8 13 21 34 55"); // red green go
	REQUIRE(get_fib_sequence(12) == "0 1 1 2 3 5 8 13 21 34 55 89 144"); // red green go
}
// 6 assertions pass in 3 test cases
