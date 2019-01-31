//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
void LinkedList<ItemType>::clear()
{
   headPtr = nullptr;
   itemCount = 0;
}  // end clear