// 3. Write a program to show the use of friend function and friend class.

#include <iostream>
using namespace std;
class root
{
private:
    int x, y;
    
    friend float func(root r);   // friend function declaration

public:
    void setvalue()
    {
        x = 10;
        y = 5;
    }

   
    friend class frnd;    // friend class declaration
};

// friend fuction defination
float func(root s)
{
    return float(s.x + s.y) / 2;
}

// friend class defination
class frnd
{
public:
    void disp(root r)
    {
        cout << "Input data: " << endl
             << r.x << endl
             << r.y << endl;
    }
};

int main()
{
    root x;
    x.setvalue();     // data input
 
   
    frnd f;    
    f.disp(x);    // friend class output

    //  friend function output
    cout << "Mean value: " << func(x);

    return 0;
}
