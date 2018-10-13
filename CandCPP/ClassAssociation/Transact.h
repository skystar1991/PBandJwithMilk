// Transact.h       Definition of Transact Class (an Association Class)

#ifndef TRANSACT_H
#define TRANSACT_H

class Account;

class Transact
{
private:
    int         transNo;
    Account*    c;
    Account*    s;           
    
    static int nextSeqNum;

    int getNextSeqNum()
    {
        return ++nextSeqNum;
    }

public:
    Transact( Account* client, Account* server );
   ~Transact(); 



    bool moneyTransfer(double amt);
};
    
#endif

