//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
bool SortedListIsA<ItemType>::removeSorted(const ItemType& anEntry)
{
   int position = getPosition(anEntry);
   bool ableToRemove = position > 0;
   
   if (ableToRemove)
      ableToRemove = LinkedList<ItemType>::remove(position);
   
   return ableToRemove;
}  // end removeSorted