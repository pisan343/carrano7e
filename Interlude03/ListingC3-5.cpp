//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C3-5

#include <iostream>
#include <string>

// Encodes the character at index i of the string str.
void encodeChar(int i, std::string& str)
{
   int base = static_cast<int>('a');
   if (isupper(str[i]))
      base = int('A');
   char newChar = (static_cast<int>(str[i]) — base + 3) % 26 + base;
   str.replace(i, 1, 1, newChar); // Method replace can throw exception
} // end encodeChar

// Encodes numChar characters within a string.
void encodeString(int numChar, std::string& str)
{
   for (int j = numChar − 1; j >= 0; j––)
      encodeChar(j, str);
}  // end encodeString

int main()
{
   std::string str1 = "Sarah";
   encodeString(99, str1);
   return 0;
}  // end main