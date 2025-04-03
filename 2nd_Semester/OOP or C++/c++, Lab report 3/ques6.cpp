// 6. Create a class Fraction to represent a fraction of the type 2/5. Overload the 4 arithmetic
// operators and = = to compare two fraction objects.

#include <iostream>
using namespace std;
class fraction
{
    int a, b;

public:
    void input()
    {
        cout << "numerator: ";
        cin >> a;
        cout << "denominator: ";
        cin >> b;
    }

    void disp()
    {
        cout << a << "/" << b << endl;
    }

    fraction operator+(fraction f)
    {
        fraction fr;
        fr.a = a * f.b + b * f.a;
        fr.b = b * f.b;
        return fr;
    }

    fraction operator-(fraction f)
    {
        fraction fr;
        fr.a = a * f.b - b * f.a;
        fr.b = b * f.b;
        return fr;
    }

    fraction operator*(fraction f)
    {
        fraction fr;
        fr.a = a * f.a;
        fr.b = b * f.b;
        return fr;
    }

    fraction operator/(fraction f)
    {
        fraction fr;
        fr.a = a * f.b;
        fr.b = b * f.a;
        return fr;
    }
    
    int operator ==(fraction f)
    {
        if (a == f.a && b == f.b)
            return 1;
        else
            return 0;
    }
    };

    int main()
    {
        fraction f1, f2, f3;
        cout << "Enter 1st: " << endl;
        f1.input();
        cout << "Enter 2nd: " << endl;
        f2.input(); 

        f3 = f1 + f2;
        cout<<endl<<endl<<"Result: "<<endl;
        cout<<"Sum: ";
        f3.disp();

        f3 = f1 - f2;
        cout<<"Difference: ";
        f3.disp();

        f3 = f1 * f2;
         cout<<"Multiple: ";
         f3.disp(); 

         cout<<"Division: ";
        f3 = f1 / f2;

         f3.disp();
        if (f1 == f2)
        cout << "Conclusion: Both fraction number are same";
        return 0;
    }

