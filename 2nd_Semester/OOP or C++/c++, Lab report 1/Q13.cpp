// 13. Write a program which accepts a character and display its next character. 

#include<iostream>
using namespace std;
int main()
{
    char a,b;
    cout<<"Enter a character: ";
    cin>>a;
    b = a+1;
    cout<<"After " << a <<" Next character is "<< b;
    return 0;
}