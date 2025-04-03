// 6. Write a program to show the use of write () and read () functions. 

 #include<fstream>
 #include<iostream>
 using namespace std;
 int main()
 {
 int n1=530;
 float n2=53.1;
 // open file in write binary mode,write integer and close
 ofstream of("num.bin",ios::binary);
 of.write((char*)&n1, sizeof(n1) );
 of.write((char*)&n2, sizeof(float) );
 of.close();
 // open file in read binary mode,read integer & close
 ifstream iff("num.bin",ios::binary);
 iff.read((char*)&n1,sizeof(n1));
 iff.read( (char*) &n2,sizeof(n2));
 cout<<n1<<" "<<n2<<endl;
 iff.close();
 }