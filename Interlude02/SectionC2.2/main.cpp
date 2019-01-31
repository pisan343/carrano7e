//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Section C2.2

#include <iostream>
#include <string>
#include "PlainBox.h"
#include "MagicBox.h"

void placeInBox(PlainBox<std::string>& theBox, std::string theItem)
{
   theBox.setItem(theItem);
} // end placeInBox

int main()
{
   std::string specialItem = "Riches beyond compare!";
   std::string hammerItem = "Hammer";
   
   PlainBox<std::string> myPlainBox;
   placeInBox(myPlainBox, hammerItem);               // Stores hammerItem
   placeInBox(myPlainBox, specialItem);              // Stores specialItem
   std::cout << myPlainBox.getItem() << std::endl;   // Displays specialItem
   
   MagicBox<std::string> myMagicBox;
   placeInBox(myMagicBox, hammerItem);               // Stores hammerItem
   placeInBox(myMagicBox, specialItem);              // Stores specialItem
   std::cout << myMagicBox.getItem() << std::endl;   // Displays specialItem
   
   PlainBox<std::string> mySpecialBox = MagicBox<std::string>();
   mySpecialBox.setItem(hammerItem);                 // Stores hammerItem
   mySpecialBox.setItem(specialItem);                // Stores specialItem
   std::cout << mySpecialBox.getItem() << std::endl; // Displays specialItem
   
   return 0;
}  // end main
