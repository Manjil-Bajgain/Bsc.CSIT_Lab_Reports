// 8. Write a program to calculate area of circle.   
#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
    float r,area;
    cout<<"Enter radius: ";
    cin>>r;
    area = pi*r*r;
    cout<<"The area is "<<area;
    return 0;
}