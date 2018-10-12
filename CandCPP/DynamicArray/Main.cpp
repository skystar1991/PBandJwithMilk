#include "Array.h"
#include "GenValue.h"
#include <iostream>
#include <string>

using namespace std;

void main()
{
    const  Array a(7);
           Array b(7);
           Array c(50);

           for (int i = 0; i < 8; i++)
               b[i] = GenValue(10, 90);

           cout << b;
           b.resize(10);
           cout<<"resize array"<<endl << b;

           for (int i = 0; i < 51; i++)
               c[i] = GenValue(10, 90);


//           cout << c;


                      

//    cout << a;
//    cin >> b;
//    cout << b;
//    cin >> b;
//    for (int i = 1; i <= 7; i++)
//        cout << a[i] << endl;

//    for (int i = 1; i <= 7; i++)
//        b[i] = GenValue(10, 90);
//    cout << b;

//    for (int i = 1; i <= 7; i++)
//        cout << b[i] << endl;

}