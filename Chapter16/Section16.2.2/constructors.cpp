//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree() : rootPtr(nullptr)
{
}  // end default constructor

template<class ItemType>
BinaryNodeTree<ItemType>::
BinaryNodeTree(const ItemType& rootItem)
      : rootPtr(std::make_shared<BinaryNode<ItemType>>(rootItem, nullptr, nullptr))
{
} // end constructor

template<class ItemType>
BinaryNodeTree<ItemType>::
BinaryNodeTree(const ItemType& rootItem,
               const std::shared_ptr<BinaryNodeTree<ItemType>> leftTreePtr,
               const std::shared_ptr<BinaryNodeTree<ItemType>> rightTreePtr)
      : rootPtr(std::make_shared<BinaryNode<ItemType>>(rootItem,
                                                       copyTree(leftTreePtr–>rootPtr),
                                                       copyTree(rightTreePtr–>rootPtr))
{
} // end constructor

template<class ItemType>
BinaryNodeTree<ItemType>::
BinaryNodeTree(const BinaryNodeTree<ItemType>& treePtr)
{
   rootPtr = copyTree(treePtr.rootPtr);
}  // end copy constructor

template<class ItemType>
std::shared_ptr<BinaryNode<ItemType>> BinaryNodeTree<ItemType>::copyTree(
     const std::shared_ptr<BinaryNode<ItemType>> oldTreeRootPtr) const
{
   std::shared_ptr<BinaryNode<ItemType>> newTreePtr;
   
   // Copy tree nodes during a preorder traversal
   if (oldTreeRootPtr != nullptr)
   {
      // Copy node
      newTreePtr = std::make_shared<BinaryNode<ItemType>>(oldTreeRootPtr–>getItem(),
                                                          nullptr, nullptr);
      newTreePtr–>setLeftChildPtr(copyTree(oldTreeRootPtr–>getLeftChildPtr()));
      newTreePtr–>setRightChildPtr(copyTree(oldTreeRootPtr–>getRightChildPtr()));
   }  // end if
   // Else tree is empty (newTreePtr is nullptr)
   
   return newTreePtr;
}  // end copyTree
