//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void displayBoxItem(PlainBox<std::string> thing)
{
   std::cout << "The item stored in the box is "
             << thing.getItem() << ".\n";
}  // end displayBoxItem