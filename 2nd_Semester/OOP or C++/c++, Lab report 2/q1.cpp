/* 1. Define a class student with the following specification:
Private members of class student: admno (integer), sname (20 characters),
eng (float), math (float), science (float), total (float), ctotal() – a function to
calculate eng + math + science with float return type.
Public member function of class student: takedata() – Function to accept
values for admno, sname, eng, science and invoke ctotal() to calculate total
and showdata() – Function to display all the data members on the screen.
*/
#include <iostream>
using namespace std;
class student
{
private:
    int admno;
    char sname[20];
    float eng, math, science, total;
    float ctotal()
    {
        return (eng + math + science);
    }

public:
    float takedata()
    {
        cout << "Enter admission Number: ";
        cin >> admno;
        cout << "Enter Name: ";
        cin >> sname;
        cout << "Enter mark of English, Math, Science: " << endl;
        cin >> eng >> math >> science;
        total = ctotal();
    }
    void showdata()
    {

        cout << "Addmission number= " << admno << endl;
        cout << "Name= " << sname << endl;
        cout << "English= " << eng << endl;
        cout << "Math= " << math << endl;
        cout << "Science= " << science << endl;
        cout << "Total Mark= " << total;
    }
};

int main()
{
    student s1;
    s1.takedata();
    s1.showdata();
    return 0;
}