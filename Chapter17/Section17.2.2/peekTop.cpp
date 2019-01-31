//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
ItemType ArrayMaxHeap<ItemType>::peekTop() const throw(PrecondViolatedExcept)
{
   if (isEmpty())
      throw PrecondViolatedExcept("Attempted peek into an empty heap.");
      
   return items[0];
}  // end peekTop