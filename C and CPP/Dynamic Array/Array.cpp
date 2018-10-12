#include "Array.h"

Array::Array(const int arraySize)
{
    size = arraySize > 0 ? arraySize : 50;

    ptr = new int[size];

    for (int i = 0; i != size; ptr[i++] = 1);

}

Array::Array(const Array& arr): size(arr.size)
{
    ptr = new int[size];

    for (int i = 0; i != size; i++)
        ptr[i] = arr.ptr[i];
}

Array::~Array()
{
    delete [] ptr;
}

int Array::getSize() const
{
    return this->size;
}

const Array& Array::operator =(const Array& rhs)
{
    if (&rhs != this)
    {
        if (size != rhs.size)
        {
            delete[] ptr;
            size = rhs.size;
            ptr = new int[size];
        }
        for (int i = 0; i <size; i++)
            ptr[i] = rhs.ptr[i];
    }
    return *this;
}



int& Array::operator[](const int idx)
{
//    if (idx < 1 || idx > size)
//        throw "Subscript out of range.";
//    cout << "NonConstObj[" << idx << "] -> ";

    return this->ptr[idx - 1];
}

int Array::operator[](const int idx) const
{
//    if (idx < 1 || idx > size)
//        throw "Subscript out of range.";
//    cout << "ConstObj[" << idx << "] -> ";
    return this->ptr[idx - 1];
}

string Array::toString()
{
    string sArr = "";
    for (int i = 0; i < size; i++)
        sArr = ptr[i];
    return sArr;
}

void Array::resize(const int aSize)
{
    int* nArr = new int[aSize];
    for (int i = 0; i < size; i++)
        nArr[i] = ptr[i];

    size = aSize; 
    delete[] nArr;
    ptr = nArr;

}

ostream& operator<<(ostream& out, const Array& a)
{
    for (int i = 1; i <= a.getSize(); i++)
        out << a[i] << endl;
    return out;
}

istream& operator>>(istream& in, Array& a)
{
    for (int i = 1; i <= a.getSize(); i++)
        in >> a[i];
    return in;
}