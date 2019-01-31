//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void encodeChar(int i, std::string& str)
{
   int base = static_cast<int>('a');
   if (isupper(str[i]))
      base = int('A');
   char newChar = (static_cast<int>(str[i]) − base + 3) % 26 + base;
   try
   {
      str.replace(i, 1, 1, newChar);
   }
   catch (std::out_of_range e)
   {
      std::cout << "No character at position " << i << std::endl;
   }  // end try-catch
}  // end encodeChar