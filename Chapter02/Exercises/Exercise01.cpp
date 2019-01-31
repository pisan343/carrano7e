//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

int getNumberEqual(const int x[], int n, int desiredValue)
{
   int count = 0;
   
   if (n <= 0)
      return 0;
   else
   {
      if (x[n - 1] == desiredValue)
         count = 1;
      
      return getNumberEqual(x, n - 1, desiredValue) + count;
   }  // end else
}  // end getNumberEqual