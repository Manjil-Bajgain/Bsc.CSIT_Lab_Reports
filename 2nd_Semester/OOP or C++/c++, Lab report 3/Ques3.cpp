//  3. Write a C++ program to add two complex numbers using operator overloaded by a friend 
// function.
#include<iostream>
using namespace std;
class complex {
    private: 
        int real, img;
    public:
    friend complex operator+(complex , complex ); 
    void input(){
        cout<<"Enter the real and imiginary part: "<<endl;
        cin>>real>>img;
    }
    void display()
    {
      if(img<0)
      cout<<"("<<real<<" "<<img<<"i"<<")";
      else
      cout<<"("<<real<<"+"<<img<<"i"<<")";
    }
};
    complex operator+(complex c1, complex c2){
        complex r;
        r.real = c1.real + c2.real;
        r.img = c1.img + c2.img;
        return r; 
    }
int main(){
    complex c1, c2;
    c1.input();
    c2.input();
    complex res = c1 + c2;
      res.display(); 
}
