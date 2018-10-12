// Transact.cpp     Define Transact Class Member Methods

#include "Transact.h"
#include "Account.h"

#include <iostream>
using namespace std;


int Transact::nextSeqNum = 999;

Transact::Transact(Account* client, Account* server)
        : transNo(getNextSeqNum()),
          c(client),
          s(server)
{
    cout<<"--> "<< c <<' '<< s <<endl;
    cout<<"Started Transaction: #"<<this->transNo<<endl;        
}

Transact::~Transact()
{
    cout<<"Completed Transaction: #"<<this->transNo<<endl;        
    this->transNo=0;
    this->c=0;
    this->s=0;    
}




bool Transact::moneyTransfer(double amt)
{
    return s->withdraw(amt) ? c->deposit(amt) : false;
}




//bool Transact::moneyTransfer(double amt)
//{
//    return sPtr->withdraw(amt) ? cPtr->deposit(amt) : false;
//}