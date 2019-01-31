//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template <class KeyType, class ValueType>
int HashedDictionary<KeyType, ValueType>::getHashIndex(const KeyType& searchKey) const
{
   // We are creating a hash function type called hashFunction that hashes
   // a search key. First we create an unordered_map object for our KeyType
   // and ValueType.
   std::unordered_map<KeyType, ValueType> mapper;
   
   // Then we invoke the method hash_function to return the hash function
   // for the KeyType and assign it to 'hashFunction'.
   typename std::unordered_map<KeyType, ValueType>::hasher hashFunction = mapper.hash_function();
   
   // Need static_cast because hashFunction returns an unsigned long.
   return static_cast<int>(hashFunction(searchKey) % hashTableSize);
}  // end getHashIndex