#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_cookie_ingredients"){

	vector<double> vec1 = get_cookie_ingredients(48);
	vector<double> vec2 = get_cookie_ingredients(96);
	vector<double> vec3 = get_cookie_ingredients(24);

	REQUIRE(vec1[0] == 1.5);
	REQUIRE(vec1[1] == 1);
	REQUIRE(vec1[2] == 2.75);

	REQUIRE(vec2[0] == 3);
	REQUIRE(vec2[1] == 2);
	REQUIRE(vec2[2] == 5.5);

	REQUIRE(vec3[0] == 0.75);
	REQUIRE(vec3[1] == 0.5);
	REQUIRE(vec3[2] == 1.375);

}