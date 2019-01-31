//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Iterative version. */
void writeBackward(std::string s)
{
   int length = s.size();
   while (length > 0)
   {
      std::cout << s.substr(length - 1, 1);
      length--;
   }  // end while
}  // end writeBackward