//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Listing C1-4
 @file PlainBox.cpp */
    
#include "PlainBox.h"

template<class ItemType>
PlainBox<ItemType>::PlainBox()
{
} // end default constructor

template<class ItemType>
PlainBox<ItemType>::PlainBox(const ItemType& theItem)
{
   item = theItem;
} // end constructor

template<class ItemType>
void PlainBox<ItemType>::setItem(const ItemType& theItem)
{
   item = theItem;
} // end setItem

template<class ItemType>
ItemType PlainBox<ItemType>::getItem() const
{
   return item;
} // end getItem