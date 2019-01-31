//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template <class KeyType, class ValueType>
bool TreeDictionary<KeyType, ValueType>::remove(const KeyType& searchKey)
{
   return itemTree.remove(Entry<KeyType, ValueType>(searchKey, valueType()));
}  // end remove