//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C5-2 (This class appears in C1-7)

template<class ItemType>
class MagicBox : public PlainBox<ItemType>
{
private:
   bool firstItemStored;
public:
   MagicBox();
   MagicBox(const ItemType& theItem);
   void setItem(const ItemType& theItem);
}; // end MagicBox