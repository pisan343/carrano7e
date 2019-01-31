//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Listing C4-3.
 @file BoxInterface.h */
 
#ifndef _BOX_INTERFACE
#define _BOX_INTERFACE

template <class ItemType>
class BoxInterface
{
public:
   virtual ~BoxInterface() { } // Empty implementation   
   virtual void setItem(const ItemType& theItem) = 0;
   virtual ItemType getItem() const = 0;
}; // end BoxInterface
#endif