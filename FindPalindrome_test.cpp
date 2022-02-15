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

TEST_CASE( "Generic Test 2", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("Race"));
	REQUIRE(b.add("car"));
	REQUIRE(b.number()==1);
	REQUIRE(!(b.add("racecar1")));
	REQUIRE(b.number()==1);
	REQUIRE(b.add("rAcEcAr"));
	REQUIRE(b.number()==2);
}

TEST_CASE("Test for shortcut 1", "[FindPalindrome]" )
{
	FindPalindrome b;
	std::vector<std::string> input;
	input.push_back("aaaa");
	input.push_back("aaaa");
	input.push_back("aaaa");
	REQUIRE(b.cutTest1(input));
	input.push_back("aaaab");
	REQUIRE(b.cutTest1(input));
	input.push_back("aabb");
	input.push_back("aaccc");
	REQUIRE(!(b.cutTest1(input)));
	input.push_back("aac");
	REQUIRE(b.cutTest1(input));
}

TEST_CASE("Test for shortcut 2", "[FindPalindrome]" )
{
	FindPalindrome b;
	std::vector<std::string> input1;
	std::vector<std::string> input2;
	input1.push_back("aaaaabbbb");
	input2.push_back("aaaaabbbbb");
	REQUIRE(b.cutTest2(input1, input2));
	input1.push_back("abc");
	REQUIRE(!(b.cutTest2(input1, input2)));
}

TEST_CASE( "Test FindPalindrome add a non-allowable word", "[FindPalindrome]" )
{
	INFO("Hint: add a single non-allowable word");
	FindPalindrome b;
	REQUIRE(!b.add("kayak1"));
}

