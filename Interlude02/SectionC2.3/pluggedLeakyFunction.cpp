//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

ToyBox<double>* pluggedLeakyFunction(const double& someItem)
{
   ToyBox<double>* someBoxPtr = new ToyBox<double>();
   someBoxPtr –>setItem(someItem);
   return someBoxPtr;
}  // end pluggedLeakyFunction