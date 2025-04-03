// 1. Write a program to write and read text in file. 
#include<iostream>
#include<fstream>
using namespace std;

  int main(){
    //Write in file
   	ofstream fout("Info.txt");
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	fout<<name;
	cout<<"Name written sucessfully."<<endl;
	fout.close();

    //Read from file
	ifstream fin("Info.txt");
	string str;
	fin>>str;
	cout<<"The name is "<<str;
	fin.close();
	return 0;
  }
