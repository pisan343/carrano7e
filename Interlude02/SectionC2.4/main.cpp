//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Section C2.4

#include <iostream>
#include <string>
#include "PlainBox.h"
#include "MagicBox.h"

void placeInBox(PlainBox<std::string>* theBox, std::string theItem)
{
   theBox->setItem(theItem);
} // end placeInBox

int main()
{
   std::string specialItem = "Riches beyond compare!";
   std::string hammerItem = "Hammer";
   
   PlainBox<std::string>* myPlainBoxPtr = new PlainBox<std::string>();
   placeInBox(myPlainBoxPtr, hammerItem);               // Stores hammerItem
   placeInBox(myPlainBoxPtr, specialItem);              // Stores specialItem
   std::cout << myPlainBoxPtr–>getItem() << std::endl;  // Displays specialItem
   
   MagicBox<std::string>* myMagicBoxPtr = new MagicBox<std::string>();
   placeInBox(myMagicBoxPtr, hammerItem);               // Stores hammerItem
   placeInBox(myMagicBoxPtr, specialItem);              // Ignores specialItem
   std::cout << myMagicBoxPtr –>getItem() << std::endl; // Displays hammerItem
   
   delete myPlainBoxPtr;
   myPlainBoxPtr = nullptr;
   delete myMagicBoxPtr;
   myMagicBoxPtr = nullptr;     
   
   return 0;
}  // end main
