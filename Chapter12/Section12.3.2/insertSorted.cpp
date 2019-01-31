//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
bool SortedListIsA<ItemType>::insertSorted(const ItemType& newEntry)
{
   int newPosition = std::abs(getPosition(newEntry));
   // We need to call the LinkedList version of insert, since the
   // SortedListIsA version does nothing but return false
   return LinkedList<ItemType>::insert(newPosition, newEntry);
}  // end insertSorted
