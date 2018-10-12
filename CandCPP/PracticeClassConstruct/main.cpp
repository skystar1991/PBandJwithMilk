// Test Driver for Point Class

#include <iostream>
using namespace std;

#include "Point.cpp"

int main()
{
   Point pt1;
   
   pt1.set(10, 20);
   
   cout << "pt1 is " << pt1.getX() << ", " << pt1.getY() << endl << endl;
	
   return 0;
}//endmain
