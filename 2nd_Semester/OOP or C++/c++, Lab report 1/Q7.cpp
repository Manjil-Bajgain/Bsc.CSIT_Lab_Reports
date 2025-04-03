// 7. Write a program to swap the values of two variables.   
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter any 2 numbers:"<<endl;
    cin>>a>>b;
    cout<<"Before swap:"<<endl<<"a="<<a<<", b="<<b <<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swap:"<<endl<<"a="<<a<<", b="<<b;
    return 0;
}