//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
LinkedSortedList<ItemType>::LinkedSortedList(const LinkedSortedList<ItemType>& aList)
{
	headPtr = copyChain(aList.headPtr);
   itemCount = aList.itemCount;
}  // end copy constructor

template<class ItemType>
auto LinkedSortedList<ItemType>::
     copyChain(const std::shared_ptr<Node<ItemType>>& origChainPtr)
{
   std::shared_ptr<Node<ItemType>> copiedChainPtr; // Initial value is nullptr
   if (origChainPtr != nullptr)
   {
      // Build new chain from given one
      // Create new node with the current item
      copiedChainPtr = std::make_shared<Node<ItemType>>(origChainPtr–>getItem());
      
      // Make the node point to the rest of the chain
      copiedChainPtr–>setNext(copyChain(origChainPtr–>getNext()));
   } // end if
   
   return copiedChainPtr;
} // end copyChain