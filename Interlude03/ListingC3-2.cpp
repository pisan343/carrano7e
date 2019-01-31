//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C3-2
PlainBox<std::string> findBox(PlainBox<std::string> boxes[], int size,
                              std::string target)
{
   int index = 0;
   bool found = false;
   while (!found && (index < size))
   {
      found = (target == boxes[index].getItem());
      if (!found)
         index++; // Look at next entry
   } // end while
   
   assert(found); // Verify that there is a box to return
   return boxes[index];
}  // end findBox