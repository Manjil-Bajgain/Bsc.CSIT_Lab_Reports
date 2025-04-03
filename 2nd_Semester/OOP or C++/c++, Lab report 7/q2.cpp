// 2.   to show the use of get () and put () functions

#include<iostream>
 #include<fstream>
 #include<string.h>
 using namespace std;
 int main()
 {
 char*str="String written to file one char at a time";
 ofstream fout;
 fout.open("myfile.txt");
 for(int i=0;i<strlen(str);i++)
 {
 fout.put(str[i]);
 }
 cout<<"File write completed"<<endl;
 
  // Reading character wise from the file
 char ch;
 ifstream infile;
 infile.open("myfile.txt");
 while(infile)
 {
 infile.get(ch);
 cout<<ch;
}
}