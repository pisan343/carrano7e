//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Third version
template <class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const
{
   bool isFound = false;
   int curIndex = 0; // Current array index
   while (!isFound && (curIndex < itemCount))
   {
      isFound = (anEntry == items[curIndex]);
      if (!isFound)
         curIndex++; // Increment to next entry
   } // end while
   
   return isFound;
} // end contains
