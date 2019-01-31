//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 14-1.

/** ADT queue: ADT list implementation.
 @file ListQueue.h */
#ifndef LIST_QUEUE_
#define LIST_QUEUE_
#include "QueueInterface.h"
#include "LinkedList.h"
#include "PrecondViolatedExcept.h"
#include <memory>

template<class ItemType>
class ListQueue : public QueueInterface<ItemType>
{
private:
   std::unique_ptr<LinkedList<ItemType>> listPtr; // Pointer to list of queue items
public:
   ListQueue();
   ListQueue(const ListQueue& aQueue);
   ~ListQueue();
   
   bool isEmpty() const;
   bool enqueue(const ItemType& newEntry);
   bool dequeue();
   
   /** @throw  PrecondViolatedExcept if this queue is empty. */
   ItemType peekFront() const throw(PrecondViolatedExcept);
}; // end ListQueue
#include "ListQueue.cpp"
#endif