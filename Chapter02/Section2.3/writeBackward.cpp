//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Writes a character string backward.
 @pre  The string s to write backward.
 @post  None.
 @param s  The string to write backward. */
void writeBackward(std::string s)
{
   int length = s.size(); // Length of string
   if (length > 0)
   {
      // Write the last character
      std::cout << s.substr(length - 1, 1);
      
      // Write the rest of the string backward
      writeBackward(s.substr(0, length - 1)); // Point A
   } // end if
   
   // length == 0 is the base case - do nothing
}  // end writeBackward