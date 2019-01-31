//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing 16-1.

template<class ItemType>
class TreeNode
{   
private:
   ItemType item;        // Data portion
   int      leftChild;   // Index to left child
   int      rightChild;  // Index to right child

public:
   TreeNode();
   TreeNode(const ItemType& nodeItem, int left, int right);
   
   // Declarations of the methods setItem, getItem, setLeft, getLeft,
   // setRight, and getRight are here.
}; // end TreeNode
