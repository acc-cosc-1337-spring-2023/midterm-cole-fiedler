#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h" // include question 2 header file 

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_earned_points function returns correct results")
{
	REQUIRE(get_earned_points(3) == 3); // red green go
	REQUIRE(get_earned_points(9) == 45); // red green go
	REQUIRE(get_earned_points(11) == 110); // red green go
	REQUIRE(get_earned_points(20) == 300); // red green go
}
// 6 assertions pass in 3 test cases