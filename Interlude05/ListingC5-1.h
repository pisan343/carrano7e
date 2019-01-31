//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C5-1 (This class appears in Listing C1-3)

template<class ItemType>
class PlainBox
{
   private:
      ItemType item;
   public:
      PlainBox();
      PlainBox(const ItemType& theItem);
      void setItem(const ItemType& theItem);
      ItemType getItem() const;
}; // end PlainBox