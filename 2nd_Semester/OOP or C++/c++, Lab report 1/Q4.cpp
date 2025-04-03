// 4. Write a program which accept temperature in Fahrenheit and print it in centigrade.   

#include<iostream>
using namespace std;
int main()
{
    float fh,c;
    cout<<"Enter Temperature(Fahrenheit): ";
    cin>>fh;
    c = (fh - 32)* 5/9;
    cout<<"Temperature in Centigrade: "<<c;
    return 0;
}