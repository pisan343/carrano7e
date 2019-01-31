//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// Listing C3-4

   // Create and initialize an array of boxes
   PlainBox<std::string> myBoxes[5];               // Array of PlainBox objects
   myBoxes[0] = PlainBox<std::string>("ring");
   myBoxes[1] = PlainBox<std::string>("hat");
   myBoxes[2] = PlainBox<std::string>("shirt");
   myBoxes[3] = PlainBox<std::string>("sock");
   myBoxes[4] = PlainBox<std::string>("shoe");
   PlainBox<std::string> foundBox;
   
   // Try to find a box containing glasses
   try
   {
      foundBox = findBox(myBoxes, 5, "glasses");
   }
   catch(std::logic_error logErr)
   {
      std::cout << logErr.what() << std::endl;     // Display error message
      foundBox = PlainBox<std::string>("nothing"); // Fix problem
   } // end try-catch
   // Because we catch the exception and fix the problem, the following
   // statement should work even if the target is not found
   std::cout << foundBox.getItem() << std::endl;