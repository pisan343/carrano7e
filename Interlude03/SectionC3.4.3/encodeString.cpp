//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void encodeString(int numChar, std::string& str)
{
   try
   {
      for (int i = numChar − 1; i >= 0; i––)
         encodeChar(i, str);
   }
   catch (std::out_of_range e)
   {
      std::cout << "The string does not contain " << numChar;
      std::cout << " characters." << std::endl;
      std::cout << e.what() << std::endl;
   }  // end try-catch
}  // end encodeString