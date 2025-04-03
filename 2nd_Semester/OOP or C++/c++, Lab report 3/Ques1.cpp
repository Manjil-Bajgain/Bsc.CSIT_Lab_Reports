// 1. Write a C++ program to overload both unary operators (i.e. increment and decrement).

 #include<iostream>
using namespace std;
class opr{
int w,x,y,z;
public:
  opr(int l,int b){
 	w = l;
 	x = b;
 	y = l;
 	z = b;
 }

	void operator ++()
	{
		++w;
		++x;
	}
		void disp1()
	{
	  cout<<"Incremented data: "<<endl<<"a: "<<w<<endl<<"b: "<<x<<endl;
	}
		void operator --()
	{
		--y;
		--z;
	}
			void disp2()
	{
	  cout<<"Decremented data: "<<endl<<"a: "<<y<<endl<<"b: "<<z<<endl;
	}
};

int main(){
	int a , b;
	cout<<"Enter the value for a and b: "<<endl;
	cin>>a>>b;
	opr o(a,b);
	++o;
	o.disp1();
	--o;
	o.disp2(); 
}