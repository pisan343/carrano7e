//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class ItemType>
SortedListIsA<ItemType>::SortedListIsA()
{
}  // end default constructor

template<class ItemType>
SortedListIsA<ItemType>::SortedListIsA(const SortedListIsA<ItemType>& sList)
	                                          : LinkedList<ItemType>(sList)
{
}  // end copy constructor

template<class ItemType>
SortedListIsA<ItemType>::~SortedListIsA()
{
}  // end destructor

