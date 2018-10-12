#pragma once
#include "Shape.h"
class Circle : public Shape
{
protected:
	int radius;
public:
	Circle(int);
	double Area();
	double Perimeter();
	double Volume();
};
Circle::Circle(int r) : Shape("Circle"){radius = r;}
double Circle::Area(){return (3.14 * (radius * radius));}
double Circle::Perimeter(){return (3.14 * radius * 2);}
double Circle::Volume(){return 0;}
////////////////end of Circle

class Sphere :public Circle
{
public:
	Sphere(int);
	double Area();
	double Perimeter();
	double Volume();
};
Sphere::Sphere(int r) : Circle(r){name = "Sphere";}
double Sphere::Area(){	return (4 * Circle::Area());}
double Sphere::Volume(){return ((radius * Sphere::Area()) / 3);}
double Sphere::Perimeter(){return 0;}
//////////////////////end of Sphere
