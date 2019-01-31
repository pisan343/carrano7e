//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C8-2.

#include <iostream>
#include <string>
#include <list>

int main()
{
   std::list<string> groceryList; // Create an empty list
   std::list<string>::iterator myPosition = groceryList.begin();
   
   groceryList.insert(myPosition, "apples");
   groceryList.insert(myPosition, "bread");
   groceryList.insert(myPosition, "juice");
   groceryList.insert(myPosition, "carrots");
   
   std::cout << "Number of items on my grocery list: "
             << groceryList.size() << std::endl;
   
   groceryList.sort();
   
   std::cout << "Items are:" << std::endl;
   for (auto groceryItem : groceryList)
   {
      std::cout << groceryItem << std::endl;
   }  // end for
}  // end main