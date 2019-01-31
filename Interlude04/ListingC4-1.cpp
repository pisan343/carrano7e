//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C4-1

#include <memory>

template<class ItemType>
class Node
{
private:
   ItemType item;                        // A data item
   std::shared_ptr<Node<ItemType>> next; // Pointer to next node
public:
   Node();
   Node(const ItemType& anItem);
   Node(const ItemType& anItem,
        std::shared_ptr<Node<ItemType>> nextNodePtr);
   void setItem(const ItemType& anItem);
   void setNext(std::shared_ptr<Node<ItemType>> nextNodePtr);
   ItemType getItem() const;
   auto getNext() const;
}; // end Node