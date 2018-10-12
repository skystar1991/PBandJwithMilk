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
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	Date operator-(const Date &obj);
	friend ostream& operator<<(ostream&, const Date);
	friend istream& operator>>(istream&, const Date&);	
};
int main()
{
	Date d;
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
	d.show1();
	d.show2();
	d.show3();
	d.operator++();
	ostream& operator<<(ostream&, const Date& d);
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
Date& Date::operator++()
{
	if (day>31)
	{
		++month;
		if(month>12)
		{
			++year;
			month = 1;
		}
		day = 1;
		return *this;
	}
	else
	++day;
	return *this;
}
Date Date::operator++(int)
{
	Date temp(*this);
	++*this;
	return temp;
}
Date& Date::operator--()
{
	if (day<1)
	{
		--month;
		if(month<1)
		{
			--year;
			if(year<1)
				cout<<"invaild date."<<endl;
			month = 12;
		}
		day = 1;
		return *this;
	}
	else
	--day;
	return *this;
}
Date Date::operator--(int)
{
	Date temp(*this);
	--*this;
	return temp;
}
Date Date::operator-(const Date& rhs)
{
	int nDay;
	nDay = day - rhs.day;
	return nDay;
}
ostream& operator<<(ostream& out, const Date d)
{
	out<<d.month<<"."<<d.day<<"."<<d.year<<endl;
	return out;
}
istream& operator>>(istream& in, const Date& rhs)
{
	cout<<"enter the month."<<endl;
	in>>rhs.month;
	cout<<"enter the day."<<endl;
	in>>rhs.day;
	cout<<"enter the year."<<endl;
	in>>rhs.year;
	return in;
}
