//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Listing C1-2
    @file PlainBox.cpp */
    
#include "PlainBox.h"

PlainBox::PlainBox()
{
}  // end default constructor

PlainBox::PlainBox(const ItemType& theItem)
{
   item = theItem;
}  // end constructor

void PlainBox::setItem(const ItemType& theItem)
{
   item = theItem;
}  // end setItem

ItemType PlainBox::getItem() const
{
   return item;
}  // end getItem