// Write a program to show the use of static function members. 
#include <iostream>
using namespace std;

class MyClass {
  static int i;    // static data member
  public:
    // constructor
    MyClass(){
        i++;
    }
    // static member function
    static int getCount() {
      return i;
    }
    
};

int MyClass::i = 0;

int main() {
  MyClass c1,c2;
  cout << "Count of Objects of MyClass is : "<< MyClass::getCount() << endl;
  return 0;
}