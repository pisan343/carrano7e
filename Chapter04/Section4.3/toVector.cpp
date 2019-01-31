//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
std::vector<ItemType> LinkedBag<ItemType>::toVector() const
{
   std::vector<ItemType> bagContents;
   fillVector(bagContents, headPtr);
   return bagContents;
} // end toVector

template<class ItemType>
void LinkedBag<ItemType>::fillVector(vector<ItemType>& bagContents,
                                     Node<ItemType>* curPtr) const
{
   if (curPtr != nullptr)
   {
      bagContents.push_back(curPtr->getItem());
      fillVector(bagContents, curPtr->getNext());
   } // end if
}  // end fillVector
