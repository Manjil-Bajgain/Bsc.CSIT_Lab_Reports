#include<iostream>
using namespace std;
class matrix{
   int a[3][3];
   public: 
   void input()
   {
    for(int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
   } 
   
   matrix operator +(matrix m)
   {
    matrix t;
      for(int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            t.a[i][j] = a[i][j]+ m.a[i][j];
         }
    }
    return t;
   }

   void display()
   {
      for(int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   }
};
 
int main()
{
    matrix m1,m2,m3;
    cout<<"Enter element for 1st matrix: "<<endl;
    m1.input();
    cout<<"Enter the element for 2nd matrix"<<endl;
    m2.input();
    m3 = m1+m2;
    m3.display();
    return 0;
}