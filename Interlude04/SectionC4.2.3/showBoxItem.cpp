//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void showBoxItem(std::unique_ptr<PlainBox<std::string>>& theBox)
{
   std::cout << theBox –>getItem() << std::endl;
}  // end showBoxItem