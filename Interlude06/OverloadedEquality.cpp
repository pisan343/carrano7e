//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template <class ItemType>
bool LinkedList<ItemType>::operator==(const LinkedList<ItemType>& rightHandSide) const
{
   bool isEqual = true; // Assume equal
   
   // First check whether the number of items is the same
   if (itemCount != rightHandSide.getLength())
      isEqual = false;
   else
   {  // Then compare items
      auto leftSidePtr = headPtr;
      auto rightSidePtr = rightHandSide.headPtr;
      
      while ((leftSidePtr != nullptr) && (rightSidePtr != nullptr) && isEqual)
      {
         ItemType leftItem = leftSidePtr– >getItem();
         ItemType rightItem = rightSidePtr– >getItem();
         isEqual = (leftItem == rightItem);
         
         leftSidePtr = leftSidePtr– >getNext();
         rightSidePtr = rightSidePtr– >getNext();
      }  // end whiile
   }  // end if
   
   return isEqual;
}  // end operator==