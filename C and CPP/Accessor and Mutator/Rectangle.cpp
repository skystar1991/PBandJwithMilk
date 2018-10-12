// Rectangle.cpp  Rectangle Class Implementation File

#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(double W, double L)
{
    if( ! this->setWidth(W) )
        throw "Invalid value for Width";
    if( ! this->setLength(L) )
        throw "Invalid value for Length";
    cout<<"\nCreated Rectangle Object\n\n";   
}
Rectangle::Rectangle(const Rectangle& r)
{
    this->setLength(r.getLength());
    this->setWidth(r.getWidth());
    cout<<"\nCreated Copy of Rectangle Object\n\n";   
}

Rectangle::Rectangle(const Rectangle* r)
{
    this->setLength(r->getLength());
    this->setWidth(r->getWidth());
    cout<<"\nPointer Copy Constructor called.\n" 
        <<"Created Copy of Rectangle Object.\n\n";   
}
Rectangle::~Rectangle()
{
    cout<<"\nRecovered Memory from a Rectangle Object\n\n";
}

bool Rectangle::isValidWidth(double wid)
{
    return wid > 0; 
}

bool Rectangle::isValidLength(double len)
{
    return len > 0;
}
bool Rectangle::setWidth(double wid)
{
    if( isValidWidth(wid) )
    {
        width = wid;
        return true;
    }
    else
        return false;
}


bool Rectangle::setLength(double len)
{
    if( isValidLength(len) )
    {
        length = len;
        return true;
    }
    else
        return false;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return width * length;
}

Rectangle& Rectangle::operator =(const Rectangle& rhs)
{
    length = rhs.length;
    width = rhs.width;
    cout<<"Rectangle Object Assignment\n\n";
    return *this;
}

Rectangle Rectangle::create(double wid, double len)
{
    try
    {
        Rectangle r(wid,len);
        return r;
    }
    catch(char* msg)
    {
        cout<<msg<<endl;
        cout<<"**** Entering Interactive Mode ****\n"<<endl;
    }
    while( ! Rectangle::isValidWidth(wid) )
    {
        cout<<"Enter Width: ";
        cin>>wid;
    }
    while( ! Rectangle::isValidLength(len) )
    {
        cout<<"Enter Length: ";
        cin>>len;
    }

    Rectangle r(wid,len);

    cout<<"(wid,len): "<<r.getWidth()<<","
                       <<r.getLength()<<endl;
    cout<<"Exit createRectangle()\n";

    return r;
}//end create

Rectangle* Rectangle::heapCreate(double wid, double len)
{
    Rectangle* r = 0;
    try
    {
        r = new Rectangle(wid,len);
        return r;
    }
    catch(char* msg)
    {
        cout<<msg<<endl;
        cout<<"**** Entering Interactive Mode ****\n"<<endl;
    }
    while( ! Rectangle::isValidWidth(wid) )
    {
        cout<<"Enter Width: ";
        cin>>wid;
    }
    while( ! Rectangle::isValidLength(len) )
    {
        cout<<"Enter Length: ";
        cin>>len;
    }

    r = new Rectangle(wid,len);

    cout<<"(wid,len): "<<r->getWidth()<<","
                       <<r->getLength()<<endl;
    cout<<"Exit createRectangle()\n";

    return r;
}//end create














