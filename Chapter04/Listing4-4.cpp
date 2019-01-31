//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Listing 4-4. */
#include "BagInterface.h"
#include "ArrayBag.h"
#include "LinkedBag.h"
#include <iostream>
#include <string>

void displayBag(BagInterface<std::string>* bagPtr)
{
   std::cout << "The bag contains " << bagPtr– >getCurrentSize()
             << " items:" << std::endl;
   std::vector<std::string> bagItems = bagPtr– >toVector();
   int numberOfEntries = bagItems.size();
   for (int i = 0; i < numberOfEntries; i++)
   {
      std::cout << bagItems[i] << " ";
   } // end for
   std::cout << std::endl << std::endl;
} // end displayBag

void bagTester(BagInterface<std::string>* bagPtr)
{
   std::cout << "isEmpty: returns " << bagPtr– >isEmpty()
             << "; should be 1 (true)" << std::endl;
   std::string items[] = {"one", "two", "three", "four", "five", "one"};
   std::cout << "Add 6 items to the bag: " << std::endl;
   for (int i = 0; i < 6; i++)
   {
      bagPtr– >add(items[i]);
   } // end for
   
   displayBag(bagPtr);
   std::cout << "isEmpty: returns " << bagPtr– >isEmpty()
             << "; should be 0 (false)" << std::endl;
   std::cout << "getCurrentSize returns : " << bagPtr– >getCurrentSize()
             << "; should be 6" << std::endl;
   std::cout << "Try to add another entry: add(\"extra\") returns "
             << bagPtr– >add("extra") << std::endl;
} // end bagTester

int main()
{
   BagInterface<std::string>* bagPtr = nullptr;
   char userChoice;
   std::cout << "Enter 'A' to test the array-based implementation\n"
             << " or 'L' to test the link-based implementation: ";
   std::cin >> userChoice;
   if (toupper(userChoice) == 'A')
   {
      bagPtr = new ArrayBag<std::string>();
      std::cout << "Testing the Array-Based Bag:" << std::endl;
   }
   else
   {
      bagPtr = new LinkedBag<std::string>();
      std::cout << "Testing the Link-Based Bag:" << std::endl;
   } // end if
   
   std::cout << "The initial bag is empty." << std::endl;
   bagTester(bagPtr);
   delete bagPtr;
   bagPtr = nullptr;
   std::cout << "All done!" << std::endl;
   
   return 0;
} // end main