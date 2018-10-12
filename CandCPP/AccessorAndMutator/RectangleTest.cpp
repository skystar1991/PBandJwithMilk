// Tester for Rectangle Class Constructors

#include <iostream>
using namespace std;

#include "Rectangle.h"

void RectangleTest()
{
   // default constructor
   Rectangle r;
   cout<<"(wid,len): "<<r.getWidth()<<","
                      <<r.getLength()<<endl;

   // parameterized constructor
   Rectangle r(9,5);
   cout<<"(wid,len): "<<r.getWidth()<<","<<r.getLength()<<endl;

   // Rectangle create method
   cout<<"**** Rectangle create method ****\n"; 
   Rectangle r = Rectangle::create(-9,5);       //Copy Initialization 
   cout<<"(wid,len): "<<r.getWidth()<<","<<r.getLength()<<endl;

   // Rectangle heapCreate method
   Rectangle* r = 0; 
   r = Rectangle::heapCreate(-9,5);
   cout<<"(wid,len): "<<r->getWidth()<<","<<r->getLength()<<endl;

   delete r;      // recover memory

   // create Rectangle in a copy constructor
   cout<<"==> Create Copy\n";
   Rectangle r(Rectangle::create(9,5));      //Direct Initialization
   cout<<"(wid,len): "<<r.getWidth()<<","<<r.getLength()<<endl;


   // create Rectangle on the heap in a copy constructor
   cout<<"==> Create Copy on the Heap\n";
   Rectangle* r(Rectangle::heapCreate(9,5));
   cout<<"(wid,len): "<<r->getWidth()<<","<<r->getLength()<<endl;

   delete r;      // recover heap memory

   // Rectangle Object Assignment
   cout<<"Rectangle Object Assignment\n";
   Rectangle a(5,7);
   Rectangle b;
   b = a;

   // Rectangle Object Copy Initialization
   cout<<"Rectangle Object Copy Initialization\n";
   Rectangle a(5,7);
   Rectangle b = a;     //copy constructor is called


   // Rectangle Object Direct Initialization
   cout<<"Rectangle Object Direct Initialization\n";
   Rectangle a(5,7);
   Rectangle b(a);     //copy constructor is called

  
}

