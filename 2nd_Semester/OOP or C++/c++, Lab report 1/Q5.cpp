// 5. Write a program which accept principle, rate and time from user and print the simple interest. 
#include<iostream>
using namespace std;
int main()
{
    float p,t,r,si;
    cout<<"Enter principle,rate and time: "<<endl;
    cin>>p>>t>>r;
    si = (p*t*r)/100;
    cout<<"The simple intrest is "<<si;
    return 0;
}