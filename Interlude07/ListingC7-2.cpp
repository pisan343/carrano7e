//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C7-2.

#include "LinkedIterator.h"

template <class ItemType>
LinkedIterator<ItemType>::
LinkedIterator(std::shared_ptr<LinkedList<ItemType>> someList,
               std::shared_ptr<Node<ItemType>> nodePtr)
                  : containerPtr(someList), currentItemPtr(nodePtr)
{
}  // end constructor

template <class ItemType>
const ItemType LinkedIterator<ItemType>::operator*()
{
   return currentItemPtr->getItem();
}  // end operator*

template <class ItemType>
LinkedIterator<ItemType> LinkedIterator<ItemType>::operator++()
{
   currentItemPtr = currentItemPtr->getNext();
   return *this;
}  // end prefix operator++

template <class ItemType>
bool LinkedIterator<ItemType>::operator==(const LinkedIterator<ItemType>& rightHandSide) const
{
   return ((containerPtr == rightHandSide.containerPtr) &&
           (currentItemPtr == rightHandSide.currentItemPtr));
}  // end operator==

template <class ItemType>
bool LinkedIterator<ItemType>::operator!=(const LinkedIterator<ItemType>& rightHandSide) const
{
   return ((containerPtr != rightHandSide.containerPtr) ||
           (currentItemPtr != rightHandSide.currentItemPtr));
}  // end operator!=