//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C3-3
PlainBox<std::string> findBox(PlainBox<std::string> boxes[], int size,
                              std::string target) throw(std::logic_error)
{
   int index = 0;
   bool found = false;
   while (!found && (index < size))
   {
      found = (target == boxes[index].getItem());
      if (!found)
         index++; // Look at next entry
   } // end while
   
   if (!found)
      throw std::logic_error("Target not found in a box!");
   return boxes[index];
}  // end findBox