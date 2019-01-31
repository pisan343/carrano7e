//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const
{
	return countFrequency(anEntry, 0);
}  // end getFrequencyOf

// With multiple return statments
template<class ItemType>
int ArrayBag<ItemType>::countFrequency(const ItemType& target,
                                       int searchIndex) const
{
   if (searchIndex < itemCount)
   {
      if (items[searchIndex] == target)
      {
         return 1 + countFrequency(target, searchIndex + 1);
      }
      else
      {
         return countFrequency(target, searchIndex + 1);
      } // end if
   }
   else
      return 0; // Base case
} // end countFrequency

// With one return statement
template<class ItemType>
int ArrayBag<ItemType>::countFrequency(const ItemType& anEntry, int searchIndex) const
{
   int frequency = 0;
   if (searchIndex < itemCount)
   {
      if (items[searchIndex] == anEntry)
      {
         frequency = 1 + countFrequency(anEntry, searchIndex + 1);
      }
      else
      {
         frequency = countFrequency(anEntry, searchIndex + 1);
      }  // end if
   }  // end if
   
   return frequency;
}  // end countFrequency

