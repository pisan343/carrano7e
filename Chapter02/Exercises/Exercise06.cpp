//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void printNum(int n)
{
   std::cout << n << std::endl;
   printNum(n − 1);
} // end printNum