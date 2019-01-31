//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// One definition:
template <class KeyType, class ValueType>
bool TreeDictionary<KeyType, ValueType>::add(const KeyType& searchKey,
                                             const ValueType& newValue)
                                             throw(PrecondViolatedExcept)
{
   return itemTree.add(Entry<KeyType, ValueType>(searchKey, newValue));
}  // end add

// Another definition:
template <class KeyType, class ValueType>
bool TreeDictionary<KeyType, ValueType>::add(const KeyType& searchKey,
                                             const ValueType& newValue)
                                             throw(PrecondViolatedExcept)
{
   Entry<KeyType, ValueType> newEntry(searchKey, newValue);
   
   // Enforce precondition: Ensure distinct search keys
   if (!itemTree.contains(newEntry))
   {
      // Add new entry and return boolean result
      return itemTree.add(Entry<KeyType, ValueType>(searchKey, newValue));
   }
   else
   {
      auto message = "Attempt to add an entry whose search key exists in dictionary.";
      throw(PrecondViolatedExcept(message)); // Exit the method
   }  // end if
}  // end add

