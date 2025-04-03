/* 14. Write a program which accepts days as integer and display total number of 
years, months and days in it. For example: If user input as 856 days the 
output should be 2 years 4 months 6 days. */

#include<iostream>
using namespace std;
int main()
{
    int y,m,d,t;
    cout<<"Enter total number of days: ";
    cin>>t;
    y = t/365;
    t = t%365;
    m = t/30;
    t = t%30;
    d = t;
    cout<<"Year:"<<y<<" Month:"<<m<<" Days:"<<d;
    return 0;
}