// 5. Create a class named Shape with a function that prints "This is a shape". Create another class 
// named Polygon inheriting the Shape class with the same function that prints "Polygon is a 
// shape". Create two other classes named Rectangle and Triangle having the same function which 
// prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another 
// class named Square having the same function which prints "Square is a rectangle".
// Now, try calling the function by the object of each of these classes.


#include<iostream>
using namespace std;
class Shape{
    public:
  void disp()
  {
    cout<<"This is a shape"<<endl;
  }
};
class polygon: public Shape{
    public:
  void disp()
  {
    cout<<"Polygon is a shape"<<endl;
  }
};

class Rectangle{
    public:
  void disp()
  {
    cout<<"Rectangle is a Polygon"<<endl;
  }
};

class Triangle{
    public:
  void disp()
  {
    cout<<"Triangle is a Polygon"<<endl;
  }
};

class square{
    public:
  void disp()
  {
    cout<<"Square is a Rectangle"<<endl;
  }
};

int main()
{
    Shape s;
    s.disp();
    polygon p;
    p.disp();
    Rectangle r;
    r.disp();
    Triangle t;
    t.disp();
    square sq;
    sq.disp();
}
