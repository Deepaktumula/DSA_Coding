#include <iostream>
using namespace std;


// Accquires the properties of one class to another class it allows us to create the new classes based ont the esisting data.

//Single Level Inheritance


// class Animal
// {
// public:
//     // States or Properties
//     int age;
//     string name;

//     // Behaviours
//     void eat()
//     {
//         cout << "Animal is Eating.." << endl;
//     }
// };

// class Dog:public Animal
// {
// public:
//     void sleep()
//     {
//         cout << "Dog is sleeping.." << endl;
//     }
// };

// int main()
// {
//     Dog *obj = new Dog;
//     obj->age = 22;
//     obj->name = "Tiger";
//     cout << "Age of Animal is :: " << obj->age << endl;
//     cout << "Nmae of Animal is :: " << obj->name << endl;
//     obj->eat();
//     obj->sleep();
//     return 0;
// }



//Multilevel Inheritance


// class Fruit
// {
//     public:
//     string name;
// };

// class Mango:public Fruit
// {
//     public:
//     int weight;
// };

// class Alphanzo:public Mango
// {
//     public:
//     int sugarlevel;
// };

// int main()
// {
//     Alphanzo a;
//     a.name = "SuvrnRekha";
//     a.weight = 500;
//     a.sugarlevel = 70;
//     cout << a.name << " " << a.weight << " " << a.sugarlevel << " " << endl;
//     return 0;
// }



//Multiple Inheritance


class A
{
    public:
    int physics;
};

class B
{
    public:
    int chemistry;
};

class c:public A,public B
{
    public:
    int maths;
};


int main()
{
    c* obj = new c;
    obj->physics = 58;
    obj->chemistry = 60;
    obj->maths = 80;
    cout << obj->physics << " " << obj->chemistry << " " << obj->maths << endl;
    return 0;
}


//Hirerchical Inheritance

// class car
// {
//     public:
//     string name;
//     void speedUp()
//     {
//         cout << "Speeding up the car" << endl;
//     }
// };

// class Scorpio:public car
// {
//     public:

// };

// class Fortuner:public car
// {
//     public:

// };

// int main()
// {
//     Scorpio scr;
//     scr.speedUp();

//     Fortuner ftr;
//     ftr.speedUp();
//     return 0;
// }