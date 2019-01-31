//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
bool SortedListHasA<ItemType>::insertSorted(const ItemType& newEntry)
{
   int newPosition = std::abs(getPosition(newEntry));
   return listPtr–>insert(newPosition, newEntry);
}  // end insertSorted