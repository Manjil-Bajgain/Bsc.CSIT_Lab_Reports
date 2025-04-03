// 2. Write a C++ program to overload binary operator ‘+’ to add two complex numbers.

#include<iostream>
using namespace std;
class Complex {
    private:
        int real, img;
    public:
    Complex(){
        real = img = 0;    
    }
    Complex (int r, int i){
        real = r;
        img = i;
    }

    Complex operator+(Complex c2){
        Complex r;
        r.real = real + c2.real;
        r.img = img + c2.img;
        return r;
    }
    void display()
    {
      if(img<0)
      cout<<"("<<real<<" "<<img<<"i"<<")";
      else
      cout<<"("<<real<<"-"<<img<<"i"<<")";
    }
};
int main(){
    Complex c1(5,-5), c2(2,2);
    Complex res = c1 + c2;
      res.display();
}

