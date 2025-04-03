// Write a program to show the use of class templates.

#include <iostream>
using namespace std;
template <class T>
class mypair
{
    T a, b;

public:
    mypair(T first, T second)
    {
        a = first;
        b = second;
    }
    T getmax()
    {
        T ret;
        ret = a > b ? a : b;
        return ret;
    }
};

int main()
{
    mypair<int> myobject(100, 125);
    cout << myobject.getmax();
    return 0;
}