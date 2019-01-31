//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

template<class friendItemType>
std::ostream& operator<<(std::ostream& outStream,
                         const LinkedList<friendItemType>& outputList)
{
   int position = 1;
   auto curPtr = outputList.headPtr;
   
   while (curPtr != nullptr)
   {
      outStream << position << "\t" << curPtr–>getItem() << std::endl;
      curPtr = curPtr–>getNext();
      position++;
   }  // end while
   
   return outStream;
}  // end operator<<