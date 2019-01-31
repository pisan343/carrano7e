//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C8-1.

#include <iostream>
#include <stack>
int main()
{
   std::stack<int> aStack;
   
   // Right now, the stack is empty
   if (aStack.empty())
   
      std::cout << "The stack is empty." << std::endl;
   for (int j = 0; j < 5; j++)
      aStack.push(j); // Places items on top of stack
   
   while (!aStack.empty())
   {
      std::cout << aStack.top() << " ";
      aStack.pop();
   }  // end while
   
   return 0;
}  // end main