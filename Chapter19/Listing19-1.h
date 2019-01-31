//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 19-1.

/** A class of nodes for a link-based 2-3 tree.
 @file TriNode.h */
 
#ifndef TRI_NODE_
#define TRI_NODE_

template<class ItemType>
class TriNode
{
private:
   ItemType smallItem;                               // Data portion
   ItemType largeItem;                               // Data portion
   std::shared_ptr<TriNode<ItemType>> leftChildPtr;  // Left-child pointer
   std::shared_ptr<TriNode<ItemType>> midChildPtr;   // Middle-child pointer
   std::shared_ptr<TriNode<ItemType>> rightChildPtr; // Right-child pointer
   
public:
   TriNode();
   
   bool isLeaf() const;
   bool isTwoNode() const;
   bool isThreeNode() const;
   
   ItemType getSmallItem() const;
   ItemType getLargeItem() const;
   
   void setSmallItem(const ItemType& anItem);
   void setLargeItem(const ItemType& anItem);
   
   auto getLeftChildPtr() const;
   auto getMidChildPtr() const;
   auto getRightChildPtr() const;
   
   void setLeftChildPtr(std::shared_ptr<TriNode<ItemType>> leftPtr);
   void setMidChildPtr(std::shared_ptr<TriNode<ItemType>> midPtr);
   void setRightChildPtr(std::shared_ptr<TriNode<ItemType>> rightPtr);
}; // end TriNode
#include “TriNode.cpp”
#endif