#ifndef TIMEOFF
#define TIMEOFF
#include <iostream>
#include <string>
#include "NumDays.h"
using namespace std;

class TimeOff
{
private:
	NumDays maxSickDays;
	NumDays sickTaken;
	NumDays maxVacation;
	NumDays vacTaken;
	NumDays maxUnpaid;
	NumDays unpaidTaken;
	string name;
	int idNum;
public:
	TimeOff()
	{set("",0);}
	TimeOff(const string n, int i)
	{set(n,i);}
	void set(string n, int i)
	{ name = n;
	idNum = i;}
	string getname() const
	{return name;}
	int getidNum() const
	{return idNum;}
	void setMaxSick(double d)
	{maxSickDays.setDay(d);}
	void setSickTaken(double d)
	{sickTaken.setDay(d);}
	void setMaxVacation(double d)
	{if(d>30)
	d = 30;
	maxVacation.setDay(d);}
	void setVacTaken(double d)
	{vacTaken.setDay(d);}
	void setMaxUnpaid(double d)
	{maxUnpaid.setDay(d);}
	void setUnpaidTaken(double d)
	{unpaidTaken.setDay(d);}
	void setMaxSick(int h)
	{maxSickDays.setHour(h);}
	void setSickTaken(int h)
	{sickTaken.setHour(h);}
	void setMaxVacation(int h)
	{if(h>240)
	h = 240;
	maxVacation.setHour(h);}
	void setVacTaken(int h)
	{vacTaken.setHour(h);}
	void setMaxUnpaid(int h)
	{maxUnpaid.setHour(h);}
	void setUnpaidTaken(int h)
	{unpaidTaken.setHour(h);}
	double getMaxSickDay()
{
	return maxSickDays.getDay();
}
	double getSickTakenDay()
	{return sickTaken.getDay();}
	double getMaxVacationDay()
	{return maxVacation.getDay();}
	double getVacTakenDays()
	{return vacTaken.getDay();}
	double getMaxUnpaidDay()
	{return maxUnpaid.getDay();}
	double getUnpaidTakenDay()
	{return unpaidTaken.getDay();}
	int getMaxSickHour()
	{return maxSickDays.getHour();}
	int getSickTakenHour()
	{return sickTaken.getHour();}
	int getMaxVacationHour()
	{return maxVacation.getHour();}
	int getVacTakenHour()
	{return vacTaken.getHour();}
	int getMaxUnpaidHour()
	{return maxUnpaid.getHour();}
	int TimeOff::getUnpaidTakenHour()
	{return unpaidTaken.getHour();}
};
#endif
