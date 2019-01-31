//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Listing C2-4
 @file PlainBox.h */
    
#ifndef PLAIN_BOX_
#define PLAIN_BOX_

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