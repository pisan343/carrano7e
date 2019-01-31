//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

#include "ArrayList.h"
#include <iostream>
#include <string>

int main()
{
   ListInterface<std::string>* listPtr = new ArrayList<std::string>();
   std::string data[] = {"one", "two", "three", "four", "five", "six"};
   std::cout << "isEmpty: returns " << listPtr –>isEmpty()
             << "; should be 1 (true)" << std::endl;
   for (int i = 0; i < ITEM_COUNT; i++)
   {
      if (listPtr –>insert(i + 1, data[i]))
      {
         try
         {
            std::cout << "Inserted " << listPtr –>getEntry(i + 1)
                      << " at position " << (i + 1) << std::endl;
         }
         catch (std::logic_error except)
         {
            std::cout << "Failed to get entry at position "
                      << (i + 1) << std::endl;
         }
      }
      else
         std::cout << "Cannot insert " << data[i] << " at position " << (i + 1)
                   << std::endl;
   }  // end for
   return 0;
}  // end main

