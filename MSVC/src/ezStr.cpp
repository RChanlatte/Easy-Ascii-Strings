#include "ezStr.hpp"

void ezStr::ToUpper(std::string &inputStr)
{
	for (size_t charIndex = 0; charIndex < inputStr.length(); charIndex++)
	{
		if (islower(inputStr[charIndex]))
		{
			inputStr[charIndex] = toupper(inputStr[charIndex]);
		}
	}
}

void ezStr::ToLower(std::string &inputStr)
{
	for (size_t charIndex = 0; charIndex < inputStr.length(); charIndex++)
	{
		if (isupper(inputStr[charIndex]))
		{
			inputStr[charIndex] = tolower(inputStr[charIndex]);
		}
	}
}

void ezStr::Capitalize(std::string &inputStr)
{
	for (size_t charIndex = 0; charIndex < inputStr.length(); charIndex++)
	{
		if (charIndex == 0 && islower(inputStr[charIndex]))
		{
			inputStr[charIndex] = toupper(inputStr[charIndex]);
			continue;
		}
		else if (inputStr[charIndex - 1] == newline && islower(inputStr[charIndex]))
		{
			inputStr[charIndex] = toupper(inputStr[charIndex]);
			continue;
		}
		else if (inputStr[charIndex - 1] == space && islower(inputStr[charIndex]))
		{
			inputStr[charIndex] = toupper(inputStr[charIndex]);
			continue;
		}
		else
		{
			inputStr[charIndex] = tolower(inputStr[charIndex]);
			continue;
		}
	}
}

void ezStr::ReplaceAll(char charToReplace, char charReplacement, std::string &inputStr)
{
	std::replace(inputStr.begin(), inputStr.end(), charToReplace, charReplacement);
}

void ezStr::RemoveChar(std::string &inputStr, char* removeChar)
{
	for (size_t charIndex = 0; charIndex < strlen(removeChar); charIndex++)
	{
		inputStr.erase(remove(inputStr.begin(), inputStr.end(), removeChar[charIndex]), inputStr.end());
	}
}

bool ezStr::Compare(const std::string &firstString, const std::string &secondString)
{
	return firstString == secondString ? true : false;
}

std::vector <std::string> ezStr::ToVector(const std::string &inputStr, const char &delim)
{
	std::vector<std::string> tempVec;
	std::string tempSubStr;

	for (size_t charIndex = 0; charIndex < inputStr.length(); charIndex++)
	{
		if (inputStr[charIndex] != delim)
		{
			tempSubStr += inputStr[charIndex];
		}
		else if (inputStr[charIndex] == delim)
		{
			tempVec.push_back(tempSubStr);
			tempSubStr.clear();
		}
	}

	tempVec.push_back(tempSubStr);
	return tempVec;
}