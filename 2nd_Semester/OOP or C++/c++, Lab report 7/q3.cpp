// 3. Write a program working with multiple files in a single program. 

#include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
 ofstream outfile;
 //create file district and open for write
 outfile.open("district.txt");
 outfile<<"Kathmandu"<<endl;
 outfile<<"Lalitpur"<<endl;
 outfile<<"Kavreplanchowk"<<endl;
 outfile<<"Dhading"<<endl;
 outfile.close(); // close the file district after writing
 outfile.open("headquarter.txt");
 outfile<<"Kathmandu"<<endl;
 outfile<<"Patan"<<endl;
 outfile<<"Dhulikhel"<<endl;
 outfile<<"Trishuli"<<endl;
 outfile.close(); //closes the file headqtr


 //Reading the above files
 const int LEN = 80;
 char text[LEN];
 ifstream infile("district.txt");   //Open file district for read
 while(infile){
 
 infile.getline(text,LEN);
 cout<<text<<endl;
 }
 infile.close(); //closes file headqtr
 }