#include <iostream>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
Date(): month(1), day(1), year(1900) {}

	bool setMonth(int);
	bool setDay(int);
	bool setYear(int);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	void show1();
	void show2();
	void show3();
};

int main()
{
	Date d;
	//char* m1 [13] = {0, "January", "Febuary", "March", "April","May", "June", "July", "August", "September", "October", "November", "December"};
	int value;
	do 
	{
		cout<<"enter month."<<endl;
		cin>>value;
	}
	while( ! d.setMonth(value) );
	do 
	{
		cout<<"enter Day."<<endl;
		cin>>value;
	}
	while( ! d.setDay(value) );
	do 
	{
		cout<<"enter Year."<<endl;
		cin>>value;
	}
	while( ! d.setYear(value) );
	//cout<<d.getMonth()<<"/"<<d.getDay()<<"/"<<d.getYear()<<endl;
	//cout<<m1[d.getMonth()]<<" "<<d.getDay()<<", "<<d.getYear()<<endl;
	//cout<<d.getDay()<<" "<<m1[d.getMonth()]<<" "<<d.getYear()<<endl;
	d.show1();
	d.show2();
	d.show3();

	
}

bool Date::setMonth(int m)
{
	if (m>0 && m<13)
	{
		month = m;
		return true;
	}
	else
		return false;
}
bool Date::setDay(int d)
{
	if(d>0 && d<32)
	{
		day = d;
		return true;
	}
	else
		return false;
}
bool Date::setYear(int y)
{
	if(y > 0)
	{
		year = y;
		return true;
	}
	else
		return false;
}
int Date::getMonth() const
{
	return month;
}
int Date::getDay() const
{
	return day;
}
int Date::getYear() const
{
	return year;
}
void Date::show1()
{
	cout<<month<<"/"<<day<<"/"<<year<<endl;
}
void Date::show2()
{
	char* m1 [13] = {0, "January", "Febuary", "March", "April","May", "June", "July", "August", "September", "October", "November", "December"};
	cout<<m1[month]<<" "<<day<<", "<<year<<endl;
}
void Date::show3()
{
	char* m1 [13] = {0, "January", "Febuary", "March", "April","May", "June", "July", "August", "September", "October", "November", "December"};
	cout<<day<<" "<<m1[month]<<" "<<year<<endl;
}


