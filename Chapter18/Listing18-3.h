//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 18-3.

/** An array-based implementation of the ADT dictionary
 that organizes its entries in sorted search-key order.
 Search keys in the dictionary are unique.
 @file ArrayDictionary.h */
 
#ifndef ARRAY_DICTIONARY_
#define ARRAY_DICTIONARY_

#include "DictionaryInterface.h"
#include "Entry.h"
#include "NotFoundException.h"
#include "PrecondViolatedExcept.h"

template <class KeyType, class ValueType>
class ArrayDictionary : public DictionaryInterface<KeyType, ValueType>
{
private:
   static const int DEFAULT_CAPACITY = 21;               // Small capacity to test for a full dictionary
   std::unique_ptr<Entry<KeyType, ValueType>[]> entries; // Array of dictionary entries
   int entryCount;                                       // Current count of dictionary entries
   int maxEntries;                                       // Maximum capacity of the dictionary
   
   void destroyDictionary();
   int findEntryIndex(int firstIndex, int lastIndex, const KeyType& searchKey) const;
   
public:
   ArrayDictionary();
   ArrayDictionary(int maxNumberOfEntries);
   ArrayDictionary(const ArrayDictionary<KeyType, ValueType>& dictionary);
   virtual ~ArrayDictionary();
   
   bool isEmpty() const;
   int getNumberOfEntries() const;
   
   bool add(const KeyType& searchKey, const ValueType& newValue) throw(PrecondViolatedExcept);
   bool remove(const KeyType& searchKey);
   void clear();
   
   ValueType getValue(const KeyType& searchKey) const throw(NotFoundException);
   bool contains(const KeyType& searchKey) const;
   
   /** Traverses the entries in this dictionary in sorted search-key order
    and calls a given client function once for the value in each entry. */
   void traverse(void visit(ValueType&)) const;
}; // end ArrayDictionary

#include "ArrayDictionary.cpp"
#endif