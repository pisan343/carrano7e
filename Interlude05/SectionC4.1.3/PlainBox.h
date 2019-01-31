//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Listing C2-4
 @file PlainBox.h */
    
#ifndef _PLAIN_BOX
#define _PLAIN_BOX

template<class ItemType>  // Indicates this is a template
                          // Declaration for the class PlainBox
class PlainBox
{
private:
   // Data field
   ItemType item;
   
public:
   // Default constructor
   PlainBox();
   
   // Parameterized constructor
   PlainBox(const ItemType& theItem);
   
   // Mutator method that can change the value of the data field
   virtual void setItem(const ItemType& theItem);
   
   // Accessor method to get the value of the data field
   virtual ItemType getItem() const;
}; // end PlainBox

#include "PlainBox.cpp" // Include the implementation file
#endif