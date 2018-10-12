#pragma once
#include <string>

using namespace std;

class Shape
{
protected:
	string name;
public:
	Shape(string);
	string classType();
	virtual double Area() =0;
	virtual double Perimeter() =0;
	virtual double Volume() =0;
};

Shape::Shape(string n)
{name = n;}
string Shape::classType()
{return name;}
