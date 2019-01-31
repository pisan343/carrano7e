//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

// Section C4.1.3: is-a demo

#include <iostream>
#include <string>
#include "PlainBox.h"
#include "MagicBox.h"

using namespace std;

void displayBoxItem(PlainBox<string> thing)
{
   cout << "The item stored in the box is "
        << thing.getItem() << ".\n";
} // end displayBoxItem

int main()
{
   PlainBox<string> myPlainBox("Basketball");
   MagicBox<string> myMagicBox("Volleyball");
   
   displayBoxItem(myPlainBox); // myPlainBox's item is displayed
   displayBoxItem(myMagicBox); // myMagicBox's item is displayed
   
   return 0;
}  // end main

/*

 The item stored in the box is Basketball.
 The item stored in the box is Volleyball.

*/
