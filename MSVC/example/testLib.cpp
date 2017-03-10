#include "ezStr.hpp"
#include <iostream>
#include <cstdio>

int main()
{
	std::cout << "#############################-THE EZ ASCII STRINGS-#############################\n" << std::endl;

	std::cout << "------------------------------Case-sensitive input:-----------------------------\n" << std::endl;

	std::string testCase = "WElCoMe, to thE teSt pAge: AyYyY lmAoOoOo HopE IT works!";
	std::cout << "Original String: " << testCase << "\n" << std::endl;
	ezStr::ToUpper(testCase);
	std::cout << "Uppercase: " << testCase << std::endl;
	ezStr::ToLower(testCase);
	std::cout << "Lowercase: " << testCase << "\n" << std::endl;

	std::string testCapital = "please capitAlize mE oh my gOd pleAse";
	std::cout << "Original String: " << testCapital << std::endl;
	ezStr::Capitalize(testCapital);
	std::cout << "Capitalized: " << testCapital << std::endl;
	ezStr::Capitalize(testCase);
	std::cout << "Capitalized: " << testCase << "\n" << std::endl;

	std::cout << "------------------------------Characer Removals:--------------------------------\n" << std::endl;

	char removeMe[17] = {"!@#$%^&*()_+-=`~"};
	std::string testRemove = "Pl!@#$#@^ea!&^%@%se !&@%^&*remo!@*^!@*ve a!@*^!@ll th!(@(!@&is.";

	std::cout << "Original String: " << testRemove << std::endl;
	ezStr::RemoveChar(testRemove, removeMe);
	std::cout << "Removed characters: " << testRemove << "\n" << std::endl;

	std::string removeSingle = "Ohhhhhhhhhhhh Mahhhhhhhhhhhh Gahhhhhhhhhhhhhhh.";
	std::cout << "Original String: " << removeSingle << std::endl;
	ezStr::ReplaceAll('h', 'n', removeSingle);
	std::cout << "\"h\" replaced with \"n\": " << removeSingle << "\n" << std::endl;

	std::cout << "---------------------------------Comparisons:-----------------------------------\n" << std::endl;

	bool isEqual = true;
	std::string stringOne = "Thanks for installing.";
	std::string stringTwo = "This library.";
	std::cout << "String 1: " << stringOne << "\tString 2: " << stringTwo << "\n" << std::endl;
	isEqual = ezStr::Compare(stringOne, stringTwo);
	std::cout << "Equal? No, but check anyway(zero is false, one is true): " << isEqual << "\n" << std::endl;

	std::cout << "------------------------------Vector Conversion:--------------------------------\n" << std::endl;

	std::vector<std::string> testVector;
	std::string testList = "I am a single cohesive sentense. I am one.";
	std::cout << "Original String: " << testList << "\n" << std::endl;
	
	testVector = ezStr::ToVector(testList);
	std::cout << "Tokenized String:\n" << std::endl;
	for (size_t i = 0; i < testVector.size(); i++)
	{
	
		std::cout << "ELEMENT[" << i << "]:\t" << testVector[i] << std::endl;
	}

	std::cout << "\n" << std::endl;

	std::cout << "-----------------------------End of Demonstration-------------------------------\n" << std::endl;

	getchar();
	return 0;
}