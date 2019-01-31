//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
void LinkedSortedList<ItemType>::insertSorted(const ItemType& newEntry)
{
   auto newNodePtr(std::make_shared<Node<ItemType>>(newEntry));
   auto prevPtr = getNodeBefore(newEntry);
   
   if (isEmpty() || (prevPtr == nullptr)) // Add at beginning
   {
      newNodePtr–>setNext(headPtr);
      headPtr = newNodePtr;
   }
   else                                   // Add after node before
   {
      auto aftPtr = prevPtr–>getNext();
      newNodePtr–>setNext(aftPtr);
      prevPtr–>setNext(newNodePtr);
   } // end if
   
   itemCount++;
   return true;
}  // end insertSorted

template<class ItemType>
auto LinkedSortedList<ItemType>::
     getNodeBefore(const ItemType& anEntry) const
{
   auto curPtr = headPtr;
   std::shared_ptr<Node<ItemType>> prevPtr;
   
   while ( (curPtr != nullptr) && (anEntry > curPtr–>getItem()) )
   {
      prevPtr = curPtr;
      curPtr = curPtr–>getNext();
   }  // end while
   
   return prevPtr;
}  // end getNodeBefore