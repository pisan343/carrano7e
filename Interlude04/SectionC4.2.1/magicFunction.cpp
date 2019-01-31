//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void magicFunction()
{
// std::shared_ptr<MagicBox<std::string>>
// myMagicPtr(new MagicBox<std::string>());
   auto myMagicPtr = std::make_shared<MagicBox<std::string>>();
   std::cout << myMagicPtr–>getItem() << std::endl;
   // The MagicBox object will be deleted automatically when
   // myMagicPtr goes out of scope.
} // end magicFunction