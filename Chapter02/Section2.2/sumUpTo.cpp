//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Computes the sum of the integers from 1 through n.
 @pre  n > 0.
 @post  None.
 @param n  A positive integer.
 @return  The sum 1 + 2 + . . . + n. */
int sumUpTo(int n)
{
   int sum = 0;
   if (n == 1)
      sum = 1;
   else // n > 1
      sum = n + sumUpTo(n − 1);
   return sum;
} // end sumUpTo