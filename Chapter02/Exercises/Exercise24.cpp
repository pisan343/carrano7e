//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

int gcd(int a, int b)
{
   if (a % b == 0) // Base case
      return b;
   else
      return gcd(b, a % b);
}  // end gcd