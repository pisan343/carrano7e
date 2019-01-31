//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 14-2.

/** ADT queue: ADT list implementation.
 @file ListQueue.cpp */
#include "ListQueue.h" // Header file
#include <memory>

template<class ItemType>
ListQueue<ItemType>::ListQueue()
                   : listPtr(std::make_unique<LinkedList<ItemType>>())
{
}  // end default constructor

template<class ItemType>
ListQueue<ItemType>::ListQueue(const ListQueue& aQueue)
                   : listPtr(aQueue.listPtr)
{
}  // end copy constructor

template<class ItemType>
ListQueue<ItemType>::~ListQueue()
{
}  // end destructor

template<class ItemType>
bool ListQueue<ItemType>::isEmpty() const
{
   return listPtr–>isEmpty();
}  // end isEmpty

template<class ItemType>
bool ListQueue<ItemType>::enqueue(const ItemType& newEntry)
{
   return listPtr–>insert(listPtr–>getLength() + 1, newEntry);
}  // end enqueue

template<class ItemType>
bool ListQueue<ItemType>::dequeue()
{
   return listPtr–>remove(1);
}  // end dequeue

template<class ItemType>
ItemType ListQueue<ItemType>::peekFront() const throw(PrecondViolatedExcept)
{
   if (isEmpty())
      throw PrecondViolatedExcept("peekFront() called with empty queue.");
      
   // Queue is not empty; return front
   return listPtr–>getEntry(1);
}  // end peekFront
// end of implementation file