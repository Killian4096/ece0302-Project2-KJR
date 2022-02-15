#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "catch.hpp"
#include "FindPalindrome.hpp"

// There should be at least one test per FindPalindrome method

TEST_CASE( "Generic Test 1", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("kayak"));
	REQUIRE(b.add("kayak"));
	REQUIRE(b.number()==2);
	REQUIRE(b.add("kayak"));
	REQUIRE(b.number()==6);
	REQUIRE(b.add("ghj"));
	REQUIRE(b.number()==0);
}

TEST_CASE( "Generic Test 1", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("Race"));
	REQUIRE(b.add("car"));
}

TEST_CASE( "Test FindPalindrome add a non-allowable word", "[FindPalindrome]" )
{
	INFO("Hint: add a single non-allowable word");
	FindPalindrome b;
	REQUIRE(!b.add("kayak1"));
}

