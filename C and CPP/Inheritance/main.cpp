#include <iostream>
#include <string>
#include <iomanip>
#include "employee.h"

using namespace std;

void main()
{
	string name,id,date;
	int shift,bonus,req,taken,salary;
	double rate;
	//Input Team Leader info
	cout<<setprecision(2)<<fixed;
	cout<<"TEAM LEADER'S NAME : ";
	cin>>name;
	cout<<"TEAM LEADER'S ID NUBMER : ";
	cin>>id;
	cout<<"TEAM LEADER'S HIRING DATE (mm/dd/yyyy) : ";
	cin>>date;
	cout<<"TEAM LEADER'S SHIFT (1 : DAY, 2 : NIGHT) : ";
	cin>>shift;
	cout<<"TEAM LEADER'S HOURLY PAY RATE : ";
	cin>>rate;
	cout<<"TEAM LEADER'S MONTLY BONUS : ";
	cin>>bonus;
	cout<<"TEAM LEADER'S REQUIRED TRINING HOUR : ";
	cin>>req;
	cout<<"TEAM LEADER'S ATTENDED HOUR : ";
	cin>>taken;
	cout<<endl;
	TeamLeader TL(name,id,date,shift,rate,bonus,req,taken); //Create Team Leader
	//Input Shift Supervisor info
	cout<<"SUPERVISOR'S NAME : ";
	cin>>name;
	cout<<"SUPERVISOR'S ID NUMBER : ";
	cin>>id;
	cout<<"SUPERVISOR'S HIRING DATE (mm/dd/yyyy) : ";
	cin>>date;
	cout<<"SUPERVISOR'S ANNUAL SALARY : ";
	cin>>salary;
	cout<<"SUPERVISOR'S BONUS : ";
	cin>>bonus;
	cout<<endl;
	ShiftSupervisor SS(name,id,date,salary,bonus); //Create Shift Supervisor
	//Output Team Leader info
	cout<<"Team Leader"<<endl<<"Name: "<<TL.getName()<<endl;
	cout<<"ID: "<<TL.getNumber()<<endl<<"Date: "<<TL.getDate()<<endl;
	cout<<"Shift: "<<TL.getShift()<<endl<<"Hourly Rate: "<<TL.getHPR()<<endl;
	cout<<"Monthly Bonus: "<<TL.getMBA()<<endl;
	cout<<"Required Training Hours: "<<TL.getNumRequired()<<endl;
	cout<<"Attended Training Hours: "<<TL.getNumTaken()<<endl<<endl;
	//Output Shift Supervisor info
	cout<<"Shift Supervisor"<<endl<<"Name: "<<SS.getName()<<endl;
	cout<<"ID: "<<SS.getNumber()<<endl<<"Date: "<<SS.getDate()<<endl;
	cout<<"Annual Salary: "<<SS.getAS()<<endl;
	cout<<"Production Bonus: "<<SS.getBonus()<<endl;
}
