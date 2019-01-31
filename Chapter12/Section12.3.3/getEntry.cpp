//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
ItemType SortedListAsA<ItemType>::getEntry(int position) const
                                  throw(PrecondViolatedExcept)
{
   return LinkedList<ItemType>::getEntry(position);
}  // end getEntry