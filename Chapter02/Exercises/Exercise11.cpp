//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

int getValue(int a, int b, int n);

int main()
{
   std::cout << getValue(1, 7, 7) << std::endl;
   return 0;
}  // end main

int getValue(int a, int b, int n)
{
   int returnValue = 0;
   
   std::cout << "Enter: a = " << a << " b = " << b << std::endl;
   int c = (a + b)/2;
   if (c * c <= n)
      returnValue = c;
   else
      returnValue = getValue(a, c-1, n);
   
   std::cout << "Leave: a = " << a << " b = " << b << endl;
   
   return returnValue;
}  // end getValue