//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
void BinaryNodeTree<ItemType>::
     inorder(void visit(ItemType&),
             std::shared_ptr<BinaryNode<ItemType>> treePtr) const
{
   if (treePtr != nullptr)
   {
      inorder(visit, treePtr–>getLeftChildPtr());
      ItemType theItem = treePtr–>getItem();
      visit(theItem);
      inorder(visit, treePtr–>getRightChildPtr());
   }  // end if
}  // end inorder