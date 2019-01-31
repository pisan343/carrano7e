//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C4-4

template<class ItemType>
bool LinkedList<ItemType>::remove(int position)
{
   bool ableToRemove = (position >= 1) && (position <= itemCount);
   if (ableToRemove)
   {
      if (position == 1)
      {
         // Remove the first node in the chain
         headPtr = headPtr –>getNext();
      }
      else
      {
         // Find node that is before the one to delete
         auto prevPtr = getNodeAt(position – 1);
         
         // Point to node to delete
         auto curPtr = prevPtr –>getNext();
         
         // Disconnect indicated node from chain by connecting the
         // prior node with the one after
         prevPtr –>setNext(curPtr –>getNext());
      } // end if
      
      itemCount––; // Decrease count of entries
   }  // end if
   
   return ableToRemove;
}  // end remove