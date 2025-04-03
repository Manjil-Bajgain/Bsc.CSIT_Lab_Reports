// Write a program to show the use of function templates.
#include <iostream>
using namespace std;
template <class T>
T GetMax(T a, T b)
{
    T result;
    result = (a > b) ? a : b;
    return (result);
}

int main()
{
    int i = 5, j = 6, k;
    long l = 10, m = 5, n;
    k = GetMax<int>(i, j);
    n = GetMax<long>(l, m);
    cout << "Greater values: " << endl;
    cout << k << endl;
    cout << n << endl;
    return 0;
}