//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 12-5.

/** ADT sorted list using ADT list.
 @file SortedListAsA.h */
#ifndef SORTED_LIST_AS_A_
#define SORTED_LIST_AS_A_
#include <memory>
#include "SortedListInterface.h"
#include "ListInterface.h"
#include "Node.h"
#include "PrecondViolatedExcept.h"

template<class ItemType>
class SortedListAsA : public SortedListInterface<ItemType>,
private LinkedList<ItemType>
{
public:
   SortedListAsA();
   SortedListAsA(const SortedListAsA<ItemType>& sList);
   virtual ~SortedListAsA();
   
   // <The rest of the public section is the same as in SortedListHasA in Listing 12-3.>
   
}; // end SortedListAsA
#include "SortedListAsA.cpp"
#endif