//  Write a program which input three numbers and display the largest number using ternary operator. 



#include <iostream>
using namespace std;
 
int main()
{
     
    int a,b,c,n;
     cout<<"Enter any 3 number:"<<endl;
    cin>>a>>b>>c;
   n = (a>b)?((a>c)?a:c):((b>c)?b:c);
   cout<<"The greatest number is "<<n;
          
    return 0;
}