//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 12-4.

/** ADT sorted list using ADT list.
 @file SortedListIsA.h */
#ifndef SORTED_LIST_IS_A_
#define SORTED_LIST_IS_A_
#include <memory>
#include "LinkedList.h"
#include "Node.h"
#include "PrecondViolatedExcept.h"

template<class ItemType>
class SortedListIsA : public LinkedList<ItemType>
{
public:
   SortedListIsA();
   SortedListIsA(const SortedListIsA<ItemType>& sList);
   virtual ~SortedListIsA();
   
   bool insertSorted(const ItemType& newEntry);
   bool removeSorted(const ItemType& anEntry);
   int getPosition(const ItemType& anEntry) const;
   
   // The inherited methods remove, clear, getEntry, isEmpty, and
   // getLength have the same specifications as given in ListInterface.
   
   // The following methods must be overridden to disable their
   // effect on a sorted list:
   bool insert(int newPosition, const ItemType& newEntry) override;
   void replace(int position, const ItemType& newEntry)
        throw(PrecondViolatedExcept) override;
}; // end SortedListIsA
#include "SortedListIsA.cpp"
#endif