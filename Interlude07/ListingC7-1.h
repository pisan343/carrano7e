//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C7-1.

#ifndef LINKED_ITERATOR_
#define LINKED_ITERATOR_

#include <iterator>
#include "Node.h"

template <class ItemType>
class LinkedIterator : public std::iterator<std::input_iterator_tag, int>
{
private:
   // ADT associated with iterator
   const std::shared_ptr<LinkedList<ItemType>> containerPtr;
   
   // Current location in collection
   std::shared_ptr<Node<ItemType>> currentItemPtr;
   
public:
   LinkedIterator(std::shared_ptr<LinkedList<ItemType>> someList,
                  std::shared_ptr<Node<ItemType>> nodePtr = nullptr);
   
   /** Overloaded dereferencing operator.
    @return  The item at the position referenced by iterator. */
   const ItemType operator*();
   
   /** Overloaded prefix increment operator.
    @return  The iterator referencing the next position in the list. */
   LinkedIterator<ItemType> operator++();
   
   /** Overloaded equality operator.
    @param LinkedList  The iterator for comparison.
    @return  True if this iterator references the same list and
       the same position as rightHandSide, false otherwise. */    
    bool operator==(const LinkedIterator<ItemType>& rightHandSide) const;
   
    /** Overloaded inequality operator.
     @param LinkedList  The iterator for comparison.
     @return  True if this iterator does not reference the same list and the
        same position as rightHandSide, false otherwise. */
   bool operator!=(const LinkedIterator<ItemType>& rightHandSide) const;
}; // end LinkedIterator

#include "LinkedIterator.cpp"
#endif