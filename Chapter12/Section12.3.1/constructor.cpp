//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
SortedListHasA<ItemType>::SortedListHasA()
                          : listPtr(std::make_unique<LinkedList<ItemType>>())
{
}  // end default constructor