//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** @file GoodMemory.h 
    Listing C2-2 */
#ifndef GOOD_MEMORY_
#define GOOD_MEMORY_
#include "ToyBox.h"

class GoodMemory
{
private:
   ToyBox<string>* someBoxPtr;
public:
   GoodMemory();          // Default constructor
   virtual ~GoodMemory(); // Destructor
   void unleakyMethod(const double& someItem);
}; // end GoodMemory
#endif