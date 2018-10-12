// Account.cpp      Define methods for Account Class

#include "Account.h"

#include <iostream>
using namespace std;

int Account::nextSeqNum = 99;

Account::Account(double amt)
{
    this->acctNum = this->getNextSeqNum();

    this->bal = this->isValidAmt(amt) ? amt : 0;

    cout<<"Opened Account #"<<this->getAccountNum()<<endl;   
}

Account::Account(const Account* ptr)
{
    this->acctNum = ptr->getAccountNum();
    this->bal = ptr->getBalance();
    cout<<"Copied Account #"<<this->getAccountNum()<<endl;   
}

Account::Account(const Account& ref)
{
    this->acctNum = getNextSeqNum();
    this->bal = ref.getBalance();
    cout<<"Copy Constructed New Account #"<<this->getAccountNum()<<endl;   
}

Account::~Account()
{
    cout<<"Closed Account #"<<this->getAccountNum()<<endl; 
    this->acctNum=0;
    this->bal=0;  
}

Account& Account::operator=(const Account& ref )
{
    this->acctNum = ref.getAccountNum();
    this->bal = ref.getBalance();
    cout<<"Assigned Account"<<endl;
    return *this;
}

int Account::getAccountNum() const
{
    return this->acctNum; 
}

double Account::getBalance() const
{
    return this->bal;
}

bool Account::deposit(double amt)
{
    return isValidAmt(amt) ? (bal+=amt,true) : false;
}

bool Account::withdraw(double amt)
{
    return (isValidAmt(amt)&&bal>=amt) ? (bal-=amt,true) : false;
}

bool Account::EFT( int amt, Account& s )
{
    return s.withdraw(amt) ? this->deposit(amt) : false;
} 