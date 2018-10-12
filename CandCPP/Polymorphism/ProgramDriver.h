#pragma once
#include "Shape.h"
#include <iostream>

using namespace std;

class ProgramDriver
{
private:
	Shape* set [12];
public:
	ProgramDriver(Shape*,Shape*,Shape*,Shape*,Shape*,Shape*,Shape*,Shape*,Shape*,Shape*,Shape*,Shape*);
	void show();
};

ProgramDriver::ProgramDriver(Shape* r1,Shape* r2,Shape* s1,Shape* s2,Shape* rt1,Shape* rt2,Shape* c1,Shape* c2,Shape* sp1,Shape* sp2,Shape* p1,Shape* p2)
{	set[0] = r1;
	set[1] = r2;
	set[2] = s1;
	set[3] = s2;
	set[4] = rt1;
	set[5] = rt2;
	set[6] = c1;
	set[7] = c2;
	set[8] = sp1;
	set[9] = sp2;
	set[10] = p1;
	set[11] = p2;}

void ProgramDriver::show()
{for(int i = 0;i<12;i++)
	{	cout<<"Type	  : "<<set[i]->classType()<<" "<<endl;
		cout<<"Area	  : "<<set[i]->Area()<<endl;
		cout<<"Perimeter : "<<set[i]->Perimeter()<<endl;
		cout<<"Volume	  : "<<set[i]->Volume()<<endl<<endl;}
}
