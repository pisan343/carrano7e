//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void magicFunctionRaw()
{
   MagicBox<std::string>* myMagicPtr = new MagicBox<std::string>();
   std::cout << myMagicPtr –>getItem() << std::endl;
   delete myMagicPtr;
   myMagicPtr = nullptr;
}  // end magicFunctionRaw