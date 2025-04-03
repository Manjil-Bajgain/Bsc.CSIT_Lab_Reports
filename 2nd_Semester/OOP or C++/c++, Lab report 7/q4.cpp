// 4. Write a program to append some contents in existing file. 

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ofstream of;
    fstream f;
   
    // opening file using ofstream
    of.open("info.txt", ios::app);
    if (!of)
        cout << "No such file found";
    else {
        of<< " String";
        cout << "Data appended successfully"<<endl;
        of.close();
        string word;
       
        // opening file using fstream
        f.open("info.txt");
        while (f >> word) {
         cout << word << " ";
        }
        f.close();
    }
    return 0;
}