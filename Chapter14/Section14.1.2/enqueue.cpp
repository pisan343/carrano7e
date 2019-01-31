//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
bool LinkedQueue<ItemType>::enqueue(const ItemType& newEntry)
{
   auto newNodePtr = std::make_shared<Node<ItemType>>(newEntry);
   
   // Insert the new node
   if (isEmpty())
      frontPtr = newNodePtr;        // The queue was empty
   else
      backPtr–>setNext(newNodePtr); // The queue was not empty
   
   backPtr = newNodePtr;            // New node is at back
   return true;
}  // end enqueue

