#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <string>


using namespace std;


class Array
{
private:
    int*    ptr;
    int     size;

public:
    Array(const int = 50);
    Array(const Array&);
    ~Array();
    int getSize() const;

    const Array& operator=(const Array&);
    bool operator==(const Array&) const;

    //subscript operator for non-const objects set element returns(modifiable)  Lvalue
    int& operator[](const int);

    //subscript operator for const objects get element returns(read - only) Rvalue
    int  operator[](const int) const;

    // comma separated set of values
    string toString();

    void resize(const int);

    friend ostream& operator<<(ostream&, const Array&);
    friend istream& operator>>(istream&, Array&);


};






#endif
