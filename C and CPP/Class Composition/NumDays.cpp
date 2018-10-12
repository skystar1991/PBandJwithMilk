#ifndef NUMDAYS
#define NUMDAYS
#include <iostream>

using namespace std;
class NumDays
{
private:
	int hour;
	double day;
public:
	NumDays()
	{
    set(0,0.0);
  }
	NumDays(const int hour, const double day)
	{set(hour, day);}
	void set(int h, double d)
	{hour = h;
	day = hour/8.0;}
	int getHour() const
	{return hour;}
	double getDay() const
	{return day;}
	void setHour(int h)
	{if(h>=0)
	{hour = h;
	day = h/8.0;}
	else
		cout<<"Invalid Hour \n";
	}
	void setDay(double d)
	{if(d>=0)
	{day = d;
	hour = d*8;}
	else
		cout<<"Invalid Day. \n";
	}
	/*~NumDays()
	{delete hour;
	delete day;}*/
};
#endif
