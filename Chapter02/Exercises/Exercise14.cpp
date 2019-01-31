//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

int f(int n);

int main()
{
   std::cout << "The value of f(8) is " << f(8) << std::endl;
   return 0;
}  // end main

/** @pre n >= 0. */
int f(int n)
{
   std::cout << "Function entered with n = " << n << std::endl;
   switch (n)
   {
      case 0: case 1: case 2:
         return n + 1;
      default:
         return f(n-2) * f(n-4);
   }  // end switch
}  // end f