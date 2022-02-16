#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "catch.hpp"
#include "FindPalindrome.hpp"

// https://github.com/Killian4096/ece0302-Project2-KJR

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

TEST_CASE( "Generic Test 3", "[FindPalindrome]" )
{
	FindPalindrome b;
	std::vector<std::string> input;
	input.push_back("race ");
	input.push_back("car");
	REQUIRE(b.add(input));
	REQUIRE(b.number()==1);

}

TEST_CASE( "Generic Test 4", "[FindPalindrome]" )
{
	FindPalindrome b;
	std::vector<std::string> input;
	input.push_back("taco");
	input.push_back("cat");
	REQUIRE(b.add(input));
	REQUIRE(b.number()==1);
}

TEST_CASE( "Generic Test 5", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("Was it a rat I saw?"));
	REQUIRE(b.number()==1);
}

TEST_CASE( "Generic Test 6", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("Was it a rat I saw?"));
	REQUIRE(b.number()==1);
}

TEST_CASE( "Generic Test 7", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("A"));
	REQUIRE(b.add("nut"));
	REQUIRE(b.add("fOr"));
	REQUIRE(b.add("a"));
	REQUIRE(b.add("JAR"));
	REQUIRE(b.add("of    "));
	REQUIRE(b.add("TunA"));
	REQUIRE(b.number()==4);
}

TEST_CASE( "Generic Test 8", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("Oozy"));
	REQUIRE(b.add("rat"));
	REQUIRE(b.add("in"));
	REQUIRE(b.add("a"));
	REQUIRE(b.add("sanITARY"));
	REQUIRE(b.add("zoo"));
	REQUIRE(b.number()==1);
}

TEST_CASE( "Clear Test", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("Ozzy"));
	REQUIRE(b.add("rat"));
	REQUIRE(b.add("in"));
	REQUIRE(b.add("a"));
	REQUIRE(b.add("sanITARY"));
	REQUIRE(b.add("zoo   s "));
	REQUIRE(b.number()==0);
	b.clear();
	REQUIRE(b.number()==0);
	REQUIRE(b.toVector().size()==0);
}

TEST_CASE( "toVector Test", "[FindPalindrome]" )
{
	FindPalindrome b;
	REQUIRE(b.add("Oozy"));
	REQUIRE(b.add("rat"));
	REQUIRE(b.add("in"));
	REQUIRE(b.add("A"));
	REQUIRE(b.add("sanITARY"));
	REQUIRE(b.add("zoo    "));
	REQUIRE(b.number()==1);
	std::vector<std::vector<std::string>> out = b.toVector();
	REQUIRE(out[0].size()==6);
	REQUIRE(out[0][0]=="Oozy");
	REQUIRE(out[0][1]=="rat");
	REQUIRE(out[0][2]=="in");
	REQUIRE(out[0][3]=="A");
	REQUIRE(out[0][4]=="sanITARY");
	REQUIRE(out[0][5]=="zoo");
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
	input2.push_back("aaaaabbbbbd");
	REQUIRE(b.cutTest2(input1, input2));
	input1.push_back("abcccc");
	REQUIRE(!(b.cutTest2(input1, input2)));
}

TEST_CASE( "Test FindPalindrome add a non-allowable word", "[FindPalindrome]" )
{
	INFO("Hint: add a single non-allowable word");
	FindPalindrome b;
	REQUIRE(!b.add("kayak1"));
}

