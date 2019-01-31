//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Listing C1-7.
    @file MagicBox */

#ifndef MAGIC_BOX_
#define MAGIC_BOX_
#include "PlainBox.h"

template<class ItemType>
class MagicBox : public PlainBox<ItemType>
{
private:
   bool firstItemStored;
   
public:
   MagicBox();
   MagicBox(const ItemType& theItem);
   void setItem(const ItemType& theItem);
}; // end MagicBox

#include "MagicBox.cpp"
#endif

