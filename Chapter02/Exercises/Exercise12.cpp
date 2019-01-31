//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

int search(int first, int last, int n);
int mystery(int n);

int main()
{
   std::cout << "mystery(30) produces the following output: \n";
   int result = mystery(30);
   std::cout << "mystery(30) = " << result << "; should be 5\n";
   return 0;
}  // end main

int search(int first, int last, int n)
{
   int returnValue = 0;
   std::cout << "Enter: first = " << first << " last = "
             << last << std::cendl;
   
   int mid = (first + last)/2;
   if ( (mid * mid <= n) && (n < (mid+1) * (mid+1)) )
      returnValue = mid;
   else if (mid * mid > n)
      returnValue = search(first, mid-1, n);
   else
      returnValue = search(mid+1, last, n);
   
   std::cout << "Leave: first = "
             << first << " last = " << last << std::endl;
   return returnValue;
}  // end search

int mystery(int n)
{
   return search(1, n, n);
}  // end mystery