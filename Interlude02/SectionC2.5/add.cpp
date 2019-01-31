//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry)
{
   bool hasRoomToAdd = (itemCount < maxItems);
   if (!hasRoomToAdd)
   {
      ItemType* oldArray = items;
      items = new ItemType[2 * maxItems];
      for (int index = 0; index < maxItems; index++)
         items[index] = oldArray[index];
      delete [ ] oldArray;
      maxItems = 2 * maxItems;
   } // end if
   
   // We can always add the item
   items[itemCount] = newEntry;
   itemCount++;
   return true;
} // end ResizableArrayBag add