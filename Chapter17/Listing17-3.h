//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 17-3.

/** ADT priority queue: Heap-based implementation.
 @file HeapPriorityQueue.h */

#ifndef HEAP_PRIORITY_QUEUE_
#define HEAP_PRIORITY_QUEUE_

#include "ArrayMaxHeap.h"
#include "PriorityQueueInterface.h"

template<class ItemType>
class Heap_PriorityQueue : public PriorityQueueInterface<ItemType>,
                           private ArrayMaxHeap<ItemType>
{
public:
   Heap_PriorityQueue();
   bool isEmpty() const;
   bool enqueue(const ItemType& newEntry);
   bool dequeue();
   
   /** @pre  The priority queue is not empty. */
   ItemType peekFront() const throw(PrecondViolatedExcept);
}; // end Heap_PriorityQueue

#include "Heap_PriorityQueue.cpp"
#endif
