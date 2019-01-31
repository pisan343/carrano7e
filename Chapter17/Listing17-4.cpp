//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 17-4.

/** Heap-based implementation of the ADT priority queue.
 @file HeapPriorityQueue.cpp */

#include "HeapPriorityQueue.h"

template<class ItemType>
HeapPriorityQueue<ItemType>::HeapPriorityQueue()
{
   ArrayMaxHeap<ItemType>();
}  // end constructor

template<class ItemType>
bool HeapPriorityQueue<ItemType>::isEmpty() const
{
   return ArrayMaxHeap<ItemType>::isEmpty();
}  // end isEmpty

template<class ItemType>
bool HeapPriorityQueue<ItemType>::enqueue(const ItemType& newEntry)
{
   return ArrayMaxHeap<ItemType>::add(newEntry);
}  // end enqueue

template<class ItemType>
bool HeapPriorityQueue<ItemType>::dequeue()
{
   return ArrayMaxHeap<ItemType>::remove();
}  // end dequeue

template<class ItemType>
ItemType HeapPriorityQueue<ItemType>::peekFront() const throw(PrecondViolatedExcept)
{
   try
   {
      return ArrayMaxHeap<ItemType>::peekTop();
   }
   catch (PrecondViolatedExcept e)
   {
      throw PrecondViolatedExcept("Attempted peek into an empty priority queue.");
   }  // end try/catch
}  // end peekFront