//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C4-5

template<class ItemType>
class DoubleNode
{
private:
   ItemType item;                                // A data item
   std::shared_ptr<DoubleNode<ItemType>> next;   // Pointer to next node
   std::weak_ptr<DoubleNode<ItemType>> previous; // Pointer to previous node
public:
   // Constructors, destructors, and methods
}; // end DoubleNode