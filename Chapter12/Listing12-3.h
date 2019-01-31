//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** ADT sorted list using the ADT list.
 @file SortedListHasA.h */
#ifndef SORTED_LIST_HAS_A_
#define SORTED_LIST_HAS_A_
#include <memory>
#include "SortedListInterface.h"
#include "ListInterface.h"
#include "Node.h"
#include "PrecondViolatedExcept.h"

template<class ItemType>
class SortedListHasA : public SortedListInterface<ItemType>
{
private:
   std::unique_ptr<ListInterface<ItemType>> listPtr;
   
public:
   SortedListHasA();
   SortedListHasA(const SortedListHasA<ItemType>& sList);
   virtual ~SortedListHasA();
   
   bool insertSorted(const ItemType& newEntry);
   bool removeSorted(const ItemType& anEntry);
   int getPosition(const ItemType& newEntry) const;
   
   // The following methods have the same specifications
   // as given in ListInterface in Chapter 8:
   bool isEmpty() const;
   int getLength() const;
   bool remove(int position);
   void clear();
   ItemType getEntry(int position) const throw(PrecondViolatedExcept);
}; // end SortedListHasA
#include "SortedListHasA.cpp"
#endif