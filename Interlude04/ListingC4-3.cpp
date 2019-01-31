//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C4-3

template<class ItemType>
bool LinkedList<ItemType>::insert(int newPosition,
                                  const ItemType& newEntry)
{
   bool ableToInsert = (newPosition >= 1) &&
                       (newPosition <= itemCount + 1);
   if (ableToInsert)
   {
      // Create a new node containing the new entry
      auto newNodePtr = std::make_shared<Node<ItemType>>(newEntry);
      
      // Attach new node to chain
      if (newPosition == 1)
      {
         // Insert new node at beginning of chain
         newNodePtr–>setNext(headPtr);
         headPtr = newNodePtr;
      }
      else
      {
         // Find node that will be before new node
         auto prevPtr = getNodeAt(newPosition – 1);
         
         // Insert new node after node to which prevPtr points
         newNodePtr–>setNext(prevPtr –>getNext());
         prevPtr–>setNext(newNodePtr);
      } // end if
      
      itemCount++; // Increase count of entries
   }  // end if
   
   return ableToInsert;
}  // end insert