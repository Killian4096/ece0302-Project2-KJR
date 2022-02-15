#include <string>
#include <vector>
#include <iostream>
#include <locale> 
#include "FindPalindrome.hpp"

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

//------------------- PRIVATE CLASS METHODS ------------------------------------

// private recursive function. Must use this signature!
void FindPalindrome::recursiveFindPalindromes(vector<string>
        candidateStringVector, vector<string> currentStringVector)
{
	if(currentStringVector.size()==0){
		std::string candidateString;
		for(int i=0;i<candidateStringVector.size();i++){
			candidateString += candidateStringVector[i];
		}
		if(isPalindrome(candidateString)){
			palindromeVector.push_back();
		}
	}
	else{
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

void FindPalindrome::getPalindromes(){
	vector<string> ioVector;
	recursiveFindPalindromes(ioVector, wordVector);
	cout << "------------------\n";
	for(int i=0;i<ioVector.size();i++){
		cout << "List: " << ioVector[i] << "\n";
	}
	bool word = false;
	int wordStart;
	palindromeVector.clear();
	for(int i=0;i<ioVector.size();i++){
		if( !(word) && !(ioVector[i].empty())){
			word = true;
			wordStart=i;
			cout << "hi";
		}
		else if( word && ioVector[i].empty() ){
			cout << "ho";
			word = false;
			vector<string> b;
			for(int j=wordStart;j<i;j++){
				b.push_back(ioVector[j]);
			}
			palindromeVector.push_back(b);
		}
	}
}

//------------------- PUBLIC CLASS METHODS -------------------------------------

FindPalindrome::FindPalindrome()
{
	// TODO need to implement this...
}

FindPalindrome::~FindPalindrome()
{
	// TODO need to implement this...
}

int FindPalindrome::number() const
{
	return palindromeVector.size();
}

void FindPalindrome::clear()
{
	palindromeVector.clear();
	wordVector.clear();
}

bool FindPalindrome::cutTest1(const vector<string> & stringVector)
{
	// TODO need to implement this...
	return false;
}

bool FindPalindrome::cutTest2(const vector<string> & stringVector1,
                              const vector<string> & stringVector2)
{
	// TODO need to implement this...
	return false;
}

bool FindPalindrome::add(const string & value)
{
	/*try{
		wordVector.push_back(value);
		getPalindromes();
		return true;
	}
	catch(...){
		return false;
	}*/
	wordVector.push_back(value);
	getPalindromes();
	return true;
}

bool FindPalindrome::add(const vector<string> & stringVector)
{
	try{
		for(int i=0;i<stringVector.size();i++){
			wordVector.push_back(stringVector[i]);
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
	vector<vector<string>> returner = palindromeVector;
	return returner;
}

