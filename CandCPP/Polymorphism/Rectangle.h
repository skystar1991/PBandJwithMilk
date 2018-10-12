#pragma once
#include <iostream>
#include <string>
//#include <cmath>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
protected:
	int wid;
	int hgt;
	int lth;
public:
	Rectangle(int,int);
	double Area();
	double Volume();
	double Perimeter();
};
Rectangle::Rectangle(int w, int l):Shape("Rectangle"){wid = w;
													  lth = l;}
double Rectangle::Area(){return wid*lth;}
double Rectangle::Volume(){return 0;}
double Rectangle::Perimeter(){return wid*2+lth*2;}
/////////////////////////end of Rectangle

class RTriangle :public Rectangle
{
public:
	RTriangle(int,int);
	double Area();
	double Volume();
	double Perimeter();
};
RTriangle::RTriangle(int w,int l):Rectangle(w,l){name = "Right Triangle";}
double RTriangle::Area() {return 0.5*Rectangle::Area();}
double RTriangle::Volume(){return 0;}
double RTriangle::Perimeter(){double h = sqrt( (double)(wid*wid + lth*lth) );
							  return wid+lth+h;}
//##################end of RTriangle

class Square :public Rectangle
{
public:
	Square(int);
	double Area();
	double Volume();
	double Perimeter();
};
Square::Square(int s):Rectangle(s,s){name = "Square";}
double Square::Area(){return wid*wid;}
double Square::Volume(){return 0;}
double Square::Perimeter(){return wid*4;}
//////////////////////////end of Square

class Prism :public Rectangle
{
public:
	Prism(int,int,int);
	double area();
	double Volume();
	double Perimeter();
};
Prism::Prism(int  w,int l,int h) : Rectangle(w,l){name = "Prism";
												  hgt = h;}
double Prism::area(){return ((2*wid*lth) + (2*(wid+lth)*hgt));}
double Prism::Volume(){return hgt * wid * lth;}
double Prism::Perimeter(){return 0;}
////////////////end of Prism
