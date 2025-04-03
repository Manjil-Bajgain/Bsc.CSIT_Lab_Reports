//   4. Consider a class Matrix of size 3X3. Overload the – (unary) should negate the numbers stored in 
// the object.

#include<iostream>
using namespace std;
class a{
  int m[3][3] , i,j;
  public:
  void input()
  {

    cout<<"Enter 9 elements of matrix: "<<endl;
    for(i=0;i<3;i++){
     for(j=0;j<3;j++)
     {
        cin>>m[i][j];
     }
    }
  }
  void operator -()
  { for(i=0;i<3;i++){
     for(j=0;j<3;j++)
     {
        m[i][j]= -m[i][j];
     }
    }
  }
  void disp()
  {
        for(i=0;i<3;i++){
       for(j=0;j<3;j++)
     {
        cout<<m[i][j]<<" ";
     }
     cout<<endl;
  }
}
};

int main()
{
    a obj;
     obj.input();
     cout<<"Before operator overloaded:"<<endl;
     obj.disp();
     -obj;
     cout<<"After operator overloaded: "<<endl;
      obj.disp();
}