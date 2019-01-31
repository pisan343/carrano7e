//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// This method's return type is the type of the object returned.
auto changeBoxItem(std::unique_ptr<PlainBox<std::string>> theBox,
                   std::string theItem)
{
   theBox –>setItem(theItem);
   return theBox; // theBox surrenders ownership
}  // end changeBoxItem