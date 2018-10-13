// ProgramDriver.cpp        Class Association Lecture

#include "Account.cpp"
#include "Transact.cpp"

#include <iostream>
using namespace std;

int main()
{
    Account a(900);
    Account b(100);
    cout << "remaining balance for " << a.getAccountNum() << " is: " << a.getBalance() << endl;
    cout << "remaining balance for " << b.getAccountNum() << " is: " << b.getBalance() << endl;

    b.EFT( 200, a );
    cout << "remaining balance for " << a.getAccountNum() << " is: " << a.getBalance() << endl;
    cout << "remaining balance for " << b.getAccountNum() << " is: " << b.getBalance() << endl;

    //cout<< &a <<' '<< &b <<endl;
    Transact t(&b, &a);
    t.moneyTransfer(200);
    cout << "remaining balance for " << a.getAccountNum() << " is: " << a.getBalance() << endl;
    cout << "remaining balance for " << b.getAccountNum() << " is: " << b.getBalance() << endl;


//Copy Construction and Assignment
    //Account c(&a); 
    //cout << c.getAccountNum() << endl;   
    //cout << c.getBalance() << endl;

    //Account d(a); 
    //cout << d.getAccountNum() << endl;   
    //cout << d.getBalance() << endl;

    //b = d;
    //cout << b.getBalance() << endl;


}//end main
