//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** @file GoodMemory.cpp 
    Listing C2-3 */
#include "GoodMemory.h"

GoodMemory::GoodMemory() : someBoxPtr(nullptr)
{
}  // end default constructor

GoodMemory::~GoodMemory()
{
   delete someBoxPtr;
}  // end destructor

void GoodMemory::unleakyMethod(const double& someItem)
{
   someBoxPtr = new ToyBox<double>();
   someBoxPtr->setItem(someItem);
}  // end unleakyMethod