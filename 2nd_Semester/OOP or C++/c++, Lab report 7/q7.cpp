// 7. Write a program to copy contents from one file to another file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    // For writing text file
    // Creating ifstream & ofstream class objects
    ifstream ini_file {
        "orginal.txt"
        }; // Corrected file name
    ofstream out_file {
        "copy.txt"
        };
 
    if (ini_file && out_file) {
        while (getline(ini_file, line)) {
            out_file << line <<endl;
        }
        cout << "Copy Finished"<<endl;
    } else {
        // Something went wrong
        if (!ini_file) {
            cout << "Cannot read original.txt\n";
        }
        if (!out_file) {
            cout << "Cannot write to copy.txt\n";
        }
    }
 
    // Closing file
    ini_file.close();
    out_file.close();
 
    return 0;
}