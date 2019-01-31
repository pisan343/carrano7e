//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Tests whether a sequence of flights exists between two cities.
    Nonrecursive stack version.
 @pre  originCity and destinationCity both exist in the flight map.
 @post  Cities visited during the search are marked as visited
    in the flight map.
 @param  originCity The origin city.
 @param  destinationCity The destination city.
 @return  True if a sequence of flights exists from originCity
    to destinationCity; otherwise returns false. */
bool Map::isPath(City originCity, City destinationCity)
{
   Stack cityStack;
   
   unvisitAll(); // Clear marks on all cities
   
   // Push origin city onto cityStack and mark it as visited
   cityStack.push(originCity);
   markVisited(originCity);
   
   City topCity = cityStack.peek();
   while (!cityStack.isEmpty() && (topCity != destinationCity))
   {
      // The stack contains a directed path from the origin city
      // at the bottom of the stack to the city at the top of the stack
      
      // Find an unvisited city adjacent to the city on the top of the stack
      City nextCity = getNextCity(topCity);
      
      if (nextCity == NO_CITY)
         cityStack.pop(); // No city found; backtrack
      else // Visit city
      {
         cityStack.push(nextCity);
         markVisited(nextCity);
      } // end if
      
      if (!cityStack.isEmpty())
         topCity = cityStack.peek();
   } // end while
   
   return !cityStack.isEmpty();
}  // end isPath