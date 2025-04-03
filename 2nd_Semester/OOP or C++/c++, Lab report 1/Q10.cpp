// 10. Write a program to check whether the given number is even or odd (using ? : ternary operator)   
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter non-zero number: ";
    cin>>num;
    (num%2==0)? cout<<"Given number is even": cout<<"Given number is odd";
    return 0;
}