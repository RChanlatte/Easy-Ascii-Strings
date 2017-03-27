#pragma once

#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <cstring>

namespace ezStr
{
	// common delimiters or common characters people may want to remove
   const char SPACE = ' ';
   const char NEWLINE = '\n';
   const char WHITESPACE[5] = { '\t', '\n', ' ', '\r', '\v' };
   const char LOWERCASE_ALPHABET[27] = {"abcdefghijklmnopqrstuvwxyz"};
   const char UPPERCASE_ALPHABET[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
   const char ALPHABET[54] = { "abcdefghijklmnopqrstuvwxyz"
                               "ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
   const char ALPHANUMERIC[63] = {"abcdefghijklmnopqrstuvwxyz"
                                   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                   "1234567890"};
   const char PUNCTUATION[33] = {"`~!@#$%^&*()-_=+[{]}\\|'\";:,<.>/?"};
   const char NUMBERS_10[11] = {"0123456789"};
   const char NUMBERS_16[17] = {"0123456789ABCDEF"};

   // converts characters to upper-case
   void To_Upper(std::string &inputStr);

   // converts characters to lower-case
   void To_Lower(std::string &inputStr);

   // converts the first letter of every word to upper-case
   void Capitalize(std::string &inputStr);

   // replace all of one character with one other character
   void Replace_All(char charToReplace, char charReplacement, std::string &inputStr);

   // strip whitespace from string
   void Strip_Whitespace(std::string &inputStr);
   // remove a single character
   void Remove_Char(std::string &inputStr, char& removeSng_Char);
   // remove a C-array of characters
   void Remove_Chars(std::string &inputStr, char* removeChar_Array);
   // remove a string of characters from a string
   void Remove_Chars(std::string& inputStr, std::string removeChar_Str);
   // remove a vector of characters from a string
   void Remove_Chars(std::string& inputStr, std::vector<char> removeChar_Vec);
   // cleanses input to easily handle input, strictly letters only
   void Cleanse_Alpha(std::string& inputStr, char letter_case = 'd');
   // cleanses input to easily handle input, strictly numbers only
   void Cleanse_Num(std::string& inputStr);

   // compare two strings and return a boolean depending on their parity
   bool Compare(const std::string &firstString, const std::string &secondString);

   // adds a newline as per the console buffer
   std::string ConsoleBuffer_Newline(std::string const &inputStr, size_t const &buffer);

   // convert words in string to list based on a delimiter, defaults to space
   std::vector<std::string> To_Vector(const std::string &inputStr, const char &delim = SPACE);
}