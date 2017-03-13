#pragma once

#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <cstring>

namespace ezStr
{
	// common delimiters
	const char space = ' ';
	const char newline = '\n';

	// converts characters to upper-case
	void ToUpper(std::string &inputStr);

	// converts characters to lower-case
	void ToLower(std::string &inputStr);

	// converts the first letter of every word to upper-case
	void Capitalize(std::string &inputStr);

	// replace all of one character with one other character
	void ReplaceAll(char charToReplace, char charReplacement, std::string &inputStr);

	// remove a character or a C-array of characters
	void RemoveChar(std::string &inputStr, char* removeChar_Array);
   // remove a string of characters from a string
   void RemoveChar(std::string& inputStr, std::string removeChar_Str);
   // remove a vector of characters from a string
   void RemoveChar(std::string& inputStr, std::vector<char> removeChar_Vec);

	// compare two strings and return a boolean depending on their parity
	bool Compare(const std::string &firstString, const std::string &secondString);

	// convert words in string to list based on a delimiter, defaults to space
	std::vector<std::string> ToVector(const std::string &inputStr, const char &delim = space);
}