//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
bool LinkedList<ItemType>::remove(int position)
{
   bool ableToRemove = (position >= 1) && (position <= itemCount);
   if (ableToRemove)
   {
      Node<ItemType>* curPtr = nullptr;
      if (position == 1)
      {
         // Remove the first node in the chain
         curPtr = headPtr; // Save pointer to node
         headPtr = headPtr –>getNext();
      }
      else
      {
         // Find node that is before the one to remove
         Node<ItemType>* prevPtr = getNodeAt(position − 1);
         
         // Point to node to remove
         curPtr = prevPtr –>getNext();
         
         // Disconnect indicated node from chain by connecting the
         // prior node with the one after
         prevPtr –>setNext(curPtr –>getNext());
      } // end if
      
      // Return node to system
      curPtr –>setNext(nullptr);
      delete curPtr;
      curPtr = nullptr;
      itemCount––; // Decrease count of entries
   } // end if
   
   return ableToRemove;
} // end remove