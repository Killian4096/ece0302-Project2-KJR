#include <string>
#include <vector>
#include <iostream>
#include <locale> 
#include "FindPalindrome.hpp"

// Github: https://github.com/Killian4096/ece0302-Project2-KJR.git

using namespace std;

//------------------- HELPER FUNCTIONS -----------------------------------------

// non-class helper functions go here, should be declared as "static" so that
// their scope is limited

// helper function to convert string to lower case
static void convertToLowerCase(string & value)
{
	locale loc;
	for (int i=0; i<value.size(); i++) {
		value[i] = tolower(value[i],loc);
	}
}

// convert vector to string
static string vectorToString(const std::vector<std::string> inputVector){
	string outputString;
	for(int i=0;i<inputVector.size();i++){
		outputString += inputVector[i];
	}
	return outputString;
}

static bool checkChars(const string & value){
	for(int i=0;i<value.size();i++){
		if( !( ((value[i]>=97) && (value[i]<=122)) || ((value[i]>=65) && (value[i]<=90)) ) ){
			return false;
		}
	}
	return true;
}

static string sentenceToString(const string & value){
	string output;
	for(int i=0;i<value.length();i++){
		if( (value[i]=='?') || (value[i]=='.') || (value[i]==' ') ){}
		else{output += value[i];}
	}
	return output;
}

//------------------- PRIVATE CLASS METHODS ------------------------------------

// private recursive function. Must use this signature!
void FindPalindrome::recursiveFindPalindromes(vector<string>
        candidateStringVector, vector<string> currentStringVector)
{
	if(currentStringVector.size()==0){
		string candidateString = vectorToString(candidateStringVector);
		if(isPalindrome(candidateString)){
			palindromeVector.push_back(candidateStringVector);
		}
	}
	else{
		if(!(cutTest2(candidateStringVector, currentStringVector))){
			return;
		}
		//Put in values and what is left in that vector are the panlindronmes
		vector<string> candidateStringBufferVector;
		vector<string> currentStringBufferVector;
		for(int i=0;i<currentStringVector.size();i++){
			candidateStringBufferVector = candidateStringVector;
			currentStringBufferVector = currentStringVector;
			candidateStringBufferVector.push_back(currentStringBufferVector[i]);
			currentStringBufferVector.erase(currentStringBufferVector.begin() + i);
			recursiveFindPalindromes(candidateStringBufferVector, currentStringBufferVector);
		}
	}
}

// private function to determine if a string is a palindrome (given, you
// may change this if you want)
bool FindPalindrome::isPalindrome(string currentString) const
{
	locale loc;
	// make sure that the string is lower case...
	convertToLowerCase(currentString);
	// see if the characters are symmetric...
	int stringLength = currentString.size();
	for (int i=0; i<stringLength/2; i++) {
		if (currentString[i] != currentString[stringLength - i - 1]) {
			return false;
		}
	}
	return true;
}

//Simple function to set up and call Palindromess
void FindPalindrome::getPalindromes(){
	palindromeVector.clear();
	if(!cutTest1(wordVector)){
		return;
	}
	vector<string> candidateStringVector;
	recursiveFindPalindromes(candidateStringVector, wordVector);
}

//------------------- PUBLIC CLASS METHODS -------------------------------------

FindPalindrome::FindPalindrome()
{
	// TODO need to implement this...
	// Nothing to do :( ..
}

FindPalindrome::~FindPalindrome()
{
	// TODO need to implement this...
	// Hello there
	// Nothing...
}

int FindPalindrome::number() const
{
	/*for(int i=0;i<palindromeVector.size();i++){
		cout << "List:\n";
		for(int j=0;j<palindromeVector[i].size();j++){
			cout << "Item: " << palindromeVector[i][j] << "\n";
		}
	}*/
	return palindromeVector.size();
}

void FindPalindrome::clear()
{
	palindromeVector.clear();
	wordVector.clear();
}

bool FindPalindrome::cutTest1(const vector<string> & stringVector)
{
	string testString = vectorToString(stringVector);
	convertToLowerCase(testString);
	int odds = 0;
	int total;
	for(char i='a';i<='z';i++){
		total = 0;
		for(int j=0;j<testString.size();j++){
			total += (testString[j]==i);
		}
		if(total%2==1){odds++;}
		if(odds>1){return false;}
	}
	return true;
}

bool FindPalindrome::cutTest2(const vector<string> & stringVector1,
                              const vector<string> & stringVector2)
{
	string testString1 = vectorToString(stringVector1);
	convertToLowerCase(testString1);
	string testString2 = vectorToString(stringVector2);
	convertToLowerCase(testString2);
	int total1;
	int total2;
	for(char i=97;i<122;i++){
		total1=0;
		for(int j=0;j<testString1.size();j++){
			if(testString1[j]==i){total1++;}
		}
		total2=0;
		for(int j=0;j<testString2.size();j++){
			if(testString2[j]==i){total2++;}
		}
		if(vectorToString(stringVector1).size() < vectorToString(stringVector2).size()){
			if(total1>total2){
				return false;
			}
		}
		else{
			if(total1<total2){
				return false;
			}
		}
			
	}

	return true;
}

bool FindPalindrome::add(const string & value)
{
	string word = sentenceToString(value);
	if( !(checkChars(word)) ){
		return false;
	}
	try{
		wordVector.push_back(word);
		getPalindromes();
		return true;
	}
	catch(...){
		return false;
	}
}

bool FindPalindrome::add(const vector<string> & stringVector)
{
	try{
		for(int i=0;i<stringVector.size();i++){
			if( !(checkChars(sentenceToString(stringVector[i]))) ){
				return false;
			}
		}
		for(int i=0;i<stringVector.size();i++){
			wordVector.push_back(sentenceToString(stringVector[i]));
		}
		getPalindromes();
		return true;
	}
	catch(...){
		return false;
	}
}

vector< vector<string> > FindPalindrome::toVector() const
{
	return palindromeVector;
}

