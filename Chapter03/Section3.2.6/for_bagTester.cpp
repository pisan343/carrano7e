//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

// The following statements are from Section 3.2.6.
// Add them to the function bagTester given in Listing 3-2.
// (Note that the using statements that appear in Listing 3-2 make std::
// unnecessary for cout and endl.)
   cout << "contains(\"three\"): returns " << bag.contains("three")
        << "; should be 1 (true)" << endl;
   cout << "contains(\"ten\"): returns " << bag.contains("ten")
        << "; should be 0 (false)" << endl;
   cout << "getFrequencyOf(\"one\"): returns "
        << bag.getFrequencyOf("one") << " should be 2" << endl;
   cout << "remove(\"one\"): returns " << bag.remove("one")
        << "; should be 1 (true)" << endl;
   cout << "getFrequencyOf(\"one\"): returns "
        << bag.getFrequencyOf("one") << " should be 1" << endl;
   cout << "remove(\"one\"): returns " << bag.remove("one")
        << "; should be 1 (true)" << endl;
   cout << "remove(\"one\"): returns " << bag.remove("one")
        << "; should be 0 (false)" << endl;
   cout << endl;
   
   displayBag(bag);
   
   cout << "After clearing the bag, ";
   bag.clear();
   cout << "isEmpty: returns " << bag.isEmpty()
        << "; should be 1 (true)" << endl;
