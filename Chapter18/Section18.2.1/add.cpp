//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template <class KeyType, class ValueType>
bool ArrayDictionary<KeyType, ValueType>::add(const KeyType& searchKey,
                                              const ValueType& newValue)
                                              throw(PrecondViolatedExcept)
{
   bool ableToInsert = (itemCount < maxItems);
   if (ableToInsert)
   {
      // Make room for new entry by shifting all entries at
      // positions >= newPosition toward the end of the array
      // (no shift if newPosition == itemCount + 1). Performing
      // a binary search doesn't help here, because we need to
      // shift the entries while looking for the location of the addition.
      int index = itemCount;
      
      // Short-circuit evaluation is important
      while ( (index > 0) && (searchKey < items[index – 1].getKey()) )
      {
         items[index] = items[index–1];
         index--;
      } // end while
      
      // Enforce precondition: Ensure distinct search keys
      if (searchKey != items[index – 1].getKey())
      {
         // Insert new entry
         items[index] = Entry<KeyType, ValueType>(searchKey, newValue);
         itemCount++; // Increase count of entries
      }
      else
      {
         auto message = "Attempt to add an entry whose search key exists in dictionary.";
         throw(PrecondViolatedExcept(message));
      }  // end if
   }  // end if
   
   return ableToInsert;
}  // end add