#include <iostream>
#include <string>
#include "TimeOff.h"
using namespace std;

class TimeOff;
class PersonnelReport
{
	private:
		TimeOff* ptr;
	public:
		PersonnelReport(void):ptr(new TimeOff){}
		PersonnelReport(int m)
		{ptr->setMaxVacation(m*12);
		ptr->setMaxSick(m*8);}
		void setMonths(int m)
		{ptr->setMaxVacation((int)m*12);
		ptr->setMaxSick((int)m*8);}
		double getMaxSickDay()
		{return ptr->getMaxSickDay();}
		double getMaxVacationDay()
		{return ptr->getMaxVacationDay();}
		~PersonnelReport()
		{delete ptr;}
};


int main()
{
	int m;
	double temp;
	PersonnelReport PR;
	cout<<"enter the month of you worked. \n";
	cin>>m;
	PR.setMonths(m);
	temp = PR.getMaxSickDay();
	cout<<"you have "<<temp*8<<" hours of sick leaves."<<endl;
	temp = PR.getMaxVacationDay();
	cout<<"you have "<<temp*8<<" hours of vacation leaves."<<endl;
}
