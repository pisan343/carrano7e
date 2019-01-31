//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template <class ItemType>
LinkedList<ItemType>& LinkedList<ItemType>::operator=(const LinkedList<ItemType>& rightHandSide)
{
   // Check for assignment to self
   if (this != &rightHandSide)
   {
      this->clear();                       // Deallocate left-hand side
      copyListNodes(rightHandSide);        // Copy list nodes
      itemCount = rightHandSide.itemCount; // Copy size of list
   }  // end if
   
   return *this;
}  // end operator=
