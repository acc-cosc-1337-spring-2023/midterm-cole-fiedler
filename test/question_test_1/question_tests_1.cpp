#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp" // compiler does not like this inclusion but I'm not erasing it because I did not write it
#include "question1.h" // includes function prototypes header into test case cpp

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify find_gcd returns correct result") // test gcd function to ensure correct result returned
{
	REQUIRE(find_gcd(15,25) == 5); // red green go
	REQUIRE(find_gcd(16,32) == 16); // red green go
	REQUIRE(find_gcd(159,309) == 3); // red green go
}
// 5 assertions pass in 3 test cases 