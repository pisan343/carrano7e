//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void solveTowers(int count, char source, char destination, char spare)
{
   if (count == 1)
   {
      std::cout << "Move top disk from pole " << source
                << " to pole " << destination << endl;
   }
   else
   {
      solveTowers(count - 1, source, spare, destination); // X
      solveTowers(1, source, destination, spare);         // Y
      solveTowers(count - 1, spare, destination, source); // Z
   }  // end if
}  // end solveTowers