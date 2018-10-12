#include "Rectangle.h"
#include "Circle.h"
#include "ProgramDriver.h"
#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	Rectangle R1(3,4);
	Rectangle R2(5,9);
	Square S1(3);
	Square S2(5);
	RTriangle RT1(3,4);
	RTriangle RT2(5,9);
	Circle C1(3);
	Circle C2(4);
	Sphere Sp1(3);
	Sphere Sp2(4);
	Prism P1(3,4,5);
	Prism P2(5,9,5);
	ProgramDriver PD(&R1,&R2,&S1,&S2,&RT1,&RT2,&C1,&C2,&Sp1,&Sp2,&P1,&P2);
	cout<<setprecision(2)<<fixed;
	PD.show();
}
