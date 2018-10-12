#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string employeeName;
	string employeeNumber;
	string hireDate;
public:
	Employee(string, string, string);
	string getName();
	string getNumber();
	string getDate();
};

class ProductionWorker : public Employee
{
private:
	int shift;
	double HPR; //hourly pay rate
public:
	ProductionWorker(string, string, string, int, double);
	int getShift();
	void setShift(int);
	double getHPR();
	void setHPR(double);
};

class ShiftSupervisor : public Employee
{
private:
	double AS; //annual salary
	double bonus; //annual production bonus
public:
	ShiftSupervisor(string, string, string, double, double);
	double getAS();
	void setAS(double);
	double getBonus();
	void setBonus(double);
};

class TeamLeader : public ProductionWorker
{
private:
	double MBA; //montly bonus amount
	int numRequired; // the required number of training hours
	int numTaken; // the number of training hours that the team leader has attended.
public:
	TeamLeader(string, string, string, int, double, double, int, int);
	double getMBA();
	void setMBA(double);
	int getNumRequired();
	void setNumRequired(int);
	int getNumTaken();
	void setNumTaken(int);
};

//Employee class
Employee::Employee(string name,string id, string date)
{employeeName = name;
 employeeNumber = id; 
 hireDate = date;}
string Employee::getName()
{return employeeName;}
string Employee::getNumber()
{return employeeNumber;}
string Employee::getDate()
{return hireDate;}

//ProductionWorker class
ProductionWorker::ProductionWorker(string name, string id, string date, int shift, double rate) :Employee(name, id, date)
{shift = shift;
 HPR = rate;}
int ProductionWorker::getShift()
{return shift;}
void ProductionWorker::setShift(int shift)
{shift = shift;}
double ProductionWorker::getHPR()
{return HPR;}
void ProductionWorker::setHPR(double rate)
{HPR = rate;}

//ShiftSupervisor class
ShiftSupervisor::ShiftSupervisor(string name, string id, string date, double salary, double bonus) :Employee(name, id, date)
{AS = salary;
 bonus = bonus;}
double ShiftSupervisor::getAS()
{return AS;}
void ShiftSupervisor::setAS(double salary)
{AS = salary;}
double ShiftSupervisor::getBonus()
{return bonus;}
void ShiftSupervisor::setBonus(double bonus)
{bonus = bonus;}

//TeamLeader class
TeamLeader::TeamLeader(string name, string id, string date, int shift, double rate, double bonus, int req, int taken) :ProductionWorker(name, id, date, shift, rate)
{MBA = bonus;
numRequired = req;
numTaken = taken;}
double TeamLeader::getMBA()
{return MBA;}
void TeamLeader::setMBA(double bonus)
{MBA = bonus;}
int TeamLeader::getNumRequired()
{return numRequired;}
void TeamLeader::setNumRequired(int req)
{numRequired = req;}
int TeamLeader::getNumTaken()
{return numTaken;}
void TeamLeader::setNumTaken(int taken)
{numTaken = taken;}
