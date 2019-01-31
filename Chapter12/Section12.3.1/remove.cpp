//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
bool SortedListHasA<ItemType>::remove(int position)
{
   return listPtr–>remove(position);
}  // end remove