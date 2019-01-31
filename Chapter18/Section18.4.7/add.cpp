//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template <class KeyType, class ValueType>
bool HashedDictionary<KeyType, ValueType>::add(const KeyType& searchKey, const ValueType& newValue)
{
   // Create entry to add to dictionary
   auto entryToAddPtr = std::make_shared<HashedEntry<KeyType, ValueType>>(searchKey, newValue);
   
   // Compute the hashed index into the array
   int hashIndex = getHashIndex(searchKey);
   
   // Add the entry to the chain at hashIndex
   if (hashTable[hashIndex] == nullptr)
   {
      hashTable[hashIndex] = entryToAddPtr;
   }
   else
   {
      entryToAddPtr->setNext(hashTable[hashIndex]);
      hashTable[hashIndex] = entryToAddPtr;
   }  // end if
   
   return true;
}  // end add
