// 4. Write a program to show the use of virtual base class. 
#include <iostream>
 using namespace std;
 class root
 {
  protected:
 int x;
 public:
 	
 void getdata(int a)
 {
   x=a;
 }
 
 void outdata()
 {
 cout<<"Required number is:"<<x;
 } };
 

 class base1: virtual public root
 {
    // base1 class Statements 
 };
 
  class base2: virtual public root
 {
    // base2 class Statements 
 };
 
 
 
class child: public base1, public base2
 {
 public:
 void disp()
 {
    outdata();
 }
 };
 
 
  int main()
 {
 child c;
 c.getdata(27);
 
 c.disp();
 return 0;
 }
 
 
 