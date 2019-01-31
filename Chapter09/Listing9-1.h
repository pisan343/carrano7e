//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** ADT list: Array-based implementation.
    Listing 9-1.
    @file ArrayList.h */

#ifndef ARRAY_LIST_
#define ARRAY_LIST_

#include "ListInterface.h"
#include "PrecondViolatedExcept.h"

template<class ItemType>
class ArrayList : public ListInterface<ItemType>
{
private:
	static const int DEFAULT_CAPACITY = 100; // Default capacity of the list
	ItemType items[DEFAULT_CAPACITY + 1];    // Array of list items (ignore items[0]
   int itemCount;                           // Current count of list items
   int maxItems;                            // Maximum capacity of the list
   
public:
   ArrayList();
   // Copy constructor and destructor are supplied by compiler
   
   bool isEmpty() const;
   int getLength() const;
   bool insert(int newPosition, const ItemType& newEntry);
   bool remove(int position);
   void clear();
   
   /** @throw  PrecondViolatedExcept if position < 1 or position > getLength(). */
   ItemType getEntry(int position) const throw(PrecondViolatedExcept);

   /** @throw  PrecondViolatedExcept if position < 1 or position > getLength(). */
   void setEntry(int position, const ItemType& newEntry) 
                               throw(PrecondViolatedExcept);
}; // end ArrayList

#include "ArrayList.cpp"
#endif 
