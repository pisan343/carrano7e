//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 16-2.

/** A class of nodes for a link-based binary tree.
 @file BinaryNode.h */
 
#ifndef BINARY_NODE_
#define BINARY_NODE_
#include <memory>

template<class ItemType>
class BinaryNode
{
private:
   ItemType                              item;          // Data portion
   std::shared_ptr<BinaryNode<ItemType>> leftChildPtr;  // Pointer to left child
   std::shared_ptr<BinaryNode<ItemType>> rightChildPtr; // Pointer to right child
   
public:
   BinaryNode();
   BinaryNode(const ItemType& anItem);
   BinaryNode(const ItemType& anItem,
              std::shared_ptr<BinaryNode<ItemType>> leftPtr,
              std::shared_ptr<BinaryNode<ItemType>> rightPtr);
   
   void setItem(const ItemType& anItem);
   ItemType getItem() const;
   
   bool isLeaf() const;
   
   auto getLeftChildPtr() const;
   auto getRightChildPtr() const;
   
   void setLeftChildPtr(std::shared_ptr<BinaryNode<ItemType>> leftPtr);
   void setRightChildPtr(std::shared_ptr<BinaryNode<ItemType>> rightPtr);
}; // end BinaryNode

#include "BinaryNode.cpp"
#endif 
