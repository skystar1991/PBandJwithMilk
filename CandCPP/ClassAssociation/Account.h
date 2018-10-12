// Account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
private:
    int    acctNum;
    double bal;

    static int nextSeqNum;

    int getNextSeqNum()
    {
        return ++nextSeqNum;
    }

    bool isValidAmt(double amt)
    {
        return amt >= 0;
    }

public:

    Account(double amt);
   ~Account(); 

    Account(const Account* ptr);

    Account(const Account& ref);

    Account& operator=(const Account& ref );


    int    getAccountNum() const;
    double getBalance() const;

    bool   deposit(double amt);
    bool   withdraw(double amt);

    bool   EFT( int amt, Account& s);
   
};


#endif
