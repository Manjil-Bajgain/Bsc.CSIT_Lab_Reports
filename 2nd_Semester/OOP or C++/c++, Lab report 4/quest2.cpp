// 2. Make a class named Fruit with a data member to calculate the number of fruits in a basket.
// Create two other class named Apples and Mangoes to calculate the number of apples and
// mangoes in the basket. Print the number of fruits of each type and the total number of fruits in the
// basket.

#include <iostream>
using namespace std;

class Apple
{
  public:
  int a;
  Apple()
  {
    cout << "Enter no.of Apple: ";
    cin >> a;
  }
};


class Mangoes
{
  public:
  int m;
  Mangoes()
  {
    cout << "Enter no.of mangoes: ";
    cin >> m;
  }
};


class Fruit : public Mangoes, public Apple
{
  int fn;

  public:
  int x, y;
  void disp()
  {
    fn = a + m;
    cout << "The no.of Apple: " << a << endl;
    cout << "The no.of Mangoes: " << m << endl;
    cout << "Total no.of Fruits in a basket: " << fn << endl;
  }
};

int main()
{
  Fruit f;  //Constructor automatically call
  f.disp();
}
