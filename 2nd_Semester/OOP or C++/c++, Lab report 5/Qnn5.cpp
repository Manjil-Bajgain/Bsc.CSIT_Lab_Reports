// Write a program to show the use of abstract class and concrete class. 
 #include<iostream>
 using namespace std;
 class Polygon //abstract class
 {
 protected:
 int width,height;
 public:
 void setvalues(int a,int b)
 {
 width=a;
 height=b;
 }
 virtual int area(void)=0;
 };
 class Rectangle:public Polygon //concrete class
 {
 public:
 int area(void)
 {
 return (width*height);
 }
 };

  class Triangle:public Polygon //concrete class
 {
 public:
 int area(void)
 {
 return(width*height/2);
 }
 };
 int main()
 {
 Rectangle rect;
 Triangle trgl;
 Polygon *p=&rect;
 p->setvalues(4,5);
 cout<<"Area of Rectangle = "<<p->area()<<endl;
 p=&trgl;
 p->setvalues(6,5);
 cout<<"Area of triangle = "<<p->area()<<endl;
 return 0;
 }