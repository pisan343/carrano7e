//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

#include <stdexcept>
#include <string>
class TargetNotFoundException: public std::exception
{
   public :
   TargetNotFoundException(const std::string& message = "")
                         : std::exception("Target not found: " + message)
   {
   } // end constructor
}; // end TargetNotFoundException