//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

void recurse(int x, int y)
{
   if (y > 0)
   {
      x++;
      y--;
      std::cout << x << " " << y << std::endl;
      recurse(x, y);
      std::cout << x << " " << y << std::endl;
   }  // end if
}  // end recurse