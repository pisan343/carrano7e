//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
class ListNode // A node on the list
{
private:
   ItemType item;                        // A data item on the list
   std::shared_ptr<Node<ItemType>> next; // Pointer to next node
   
   Node();
   Node(const ItemType& nodeItem, std::shared_ptr<Node<ItemType>> nextNode);
   
   // Friend class – can access private parts
   template<class friendItemType>
   friend class LinkedList<friendItemType>;
}; // end ListNode