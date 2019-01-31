//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
bool LinkedQueue<ItemType>::dequeue()
{
   bool result = false;
   if (!isEmpty())
   {
      // Queue is not empty; remove front
      auto nodeToDeletePtr = frontPtr;
      if (frontPtr == backPtr)
      {  // Special case: one node in queue
         // Set frontPtr and backPtr to nullptr
         frontPtr.reset();
         backPtr.reset();
      }
      else
         frontPtr = frontPtr–>getNext();
      
      // Maintain an accurate reference count for first node
      nodeToDeletePtr –>setNext(nullptr);
      
      // Removed node will be deallocated when method ends
      result = true;
   }  // end if
   
   return result;
}  // end dequeue