// 9. Write a program to check whether the given number is positive or negative (using ? : ternary operator)   
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter non-zero number: ";
    cin>>num;
    (num>=0)? cout<<"Given number is positive": cout<<"Given number is negative";
    return 0;
}