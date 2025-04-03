// 1. Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale
// which inherits both the above classes. Now, create a function in each of these classes which 
// prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as 
// well as Marine Animals" respectively. Now, create an object for each of the above class and try 
// calling
// a. function of Mammals by the object of Mammal
// b. function of MarineAnimal by the object of MarineAnimal
// c. function of BlueWhale by the object of BlueWhale
// d. function of each of its parent by the object of BlueWhale

#include<iostream>
using namespace std;
class Mammals{
    public:
     void disp1()
     {
        cout<<"I am mammal"<<endl;
     }
};

class MarineAnimals{
    public:
     void disp2()
     {
        cout<<"I am a marine animal"<<endl;
     }
};

class BlueWhale: public Mammals, public MarineAnimals{
        public:
     void disp3()
     {
        cout<<"I belong to both the categories: Mammals as  well as Marine Animals"<<endl;
     }
};
    
    int main()
    {
        Mammals obj1;
        MarineAnimals obj2;
        BlueWhale obj3;
        obj1.disp1();
        obj2.disp2();
        obj3.disp3();
        obj3.disp1();
        obj3.disp2();
    }


