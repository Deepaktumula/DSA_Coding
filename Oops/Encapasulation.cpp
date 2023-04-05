#include <iostream>
using namespace std;

// Binding up of the data and member functions is called Encapsulation
class Animal
{
public:
    // States or Properties
    int age;
    string name;

    // Behaviours
    void eat()
    {
        cout << "Eating.." << endl;
    }

    void sleep()
    {
        cout << "Sleeping.." << endl;
    }
};

int main()
{
    Animal *obj = new Animal;
    obj->age = 5;
    obj->name = "Loin";
    cout << "Age of the Animal is :: " << obj->age << endl;
    cout << "Name of the Animal is :: " << obj->name << endl;
    obj->eat();
    obj->sleep();
    return 0;
}