// 5. Write a program to show the use of seekg() function. 

#include <fstream>
 #include <iostream>
 using namespace std;
 int main()
 {
 fstream myFile("Info.txt");  // Open a new file for input/output operations
 myFile << "Texas international college"; //Add the characters to the file
 myFile.seekg(6,ios::beg); // Seek to 6 characters from beginning of the file
 myFile.seekg(2,ios::cur); //Seek to 2 more characters from the current position
 char A[20];  // Read the next 20 characters from the file into a buffer
 myFile.read(A,20);
 A[20] = 0; // End the buffer with a null terminating character
 cout <<A << endl; //Output the contents read from the file
 myFile.close(); //Close the file
 }