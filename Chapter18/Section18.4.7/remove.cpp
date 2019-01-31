//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template <class KeyType, class ValueType>
bool HashedDictionary<KeyType, ValueType>::remove(const KeyType& searchKey)
{
   bool isSuccessful = false;
   
   // Compute the hashed index into the array
   int hashIndex = getHashIndex(searchKey);
   if (hashTable[hashIndex] != nullptr)
   {
      // Special case - first node has target
      if (searchKey == hashTable[hashIndex]->getKey())
      {
         hashTable[hashIndex] = hashTable[hashIndex]->getNext();
         isSuccessful = true;
      }
      else // Search the rest of the chain
      {
         auto prevPtr = hashTable[hashIndex];
         auto curPtr = prevPtr->getNext();
         while ((curPtr != nullptr) && !isSuccessful)
         {
            if (searchKey == curPtr->getKey())
            {
               // Found item in chain so remove that node
               prevPtr->setNext(curPtr->getNext());
               isSuccessful = true;
            }
            else // Look at next entry in chain
            {
               prevPtr = curPtr;
               curPtr = curPtr->getNext();
            }  // end if
         }  // end while
      }  // end if
   }  // end if
   
   return isSuccessful;
}  // end remove

