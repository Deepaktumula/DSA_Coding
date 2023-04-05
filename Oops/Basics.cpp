// Size of Class

// #include <iostream>
// using namespace std;

// class Animal
// {

//     int a;
//     double b;
//     bool d;
//     char c;
//     short e;
//     string name;

// };

// int main()
// {
//     cout << "Size of the Empty Class :: " << sizeof(Animal) << endl;
//     return 0;
// }





// Basic Layout of creating class and Object
// #include <iostream>
// using namespace std;

// class Animal
// {

//     // Making Public SO that it can be Accessed anywhere like from Outside or Inside of Class.
// public:
//     // State/Propeerties                Data Members
//     int age;
//     string name;

// Behaviours/Functions             Member Functions
//     void eat()
//     {
//         cout << "Animal is Eating " << endl;
//     }

//     void sleep()
//     {
//         cout << "Animal is Sleeping " << endl;
//     }
// };

// int main()
// {

//     // Static Memory Allocation         Object Creation
//     Animal obj;
//     obj.age = 21;
//     obj.name = "Lion";
//     cout << endl;
//     cout << "Age of the Animal is :: " << obj.age << endl;
//     cout << "Name of the Animal is :: "<< obj.name << endl;

//     // Calling Methods with the help of Objects
//     obj.eat();
//     obj.sleep();
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Student
// {

//     // Making Public SO that it can be Accessed anywhere like from Outside or Inside of Class.
// public:
//     // State/Properties                Data Members
//     int age;
//     string name;

// Behaviours/Functions             Member Functions
//     void play()
//     {
//         cout << "Student is Playing " << endl;
//     }

//     void sleep()
//     {
//         cout << "Student is Sleeping " << endl;
//     }
// };

// int main()
// {

//     // Dynamically Memory Allocation         Object Creation
//     Student *obj = new Student;
//     obj->age = 22;
//     obj->name = "Deepak";
//     cout << endl;
//     cout << "Age of the Student is :: " << obj->age << endl;
//     cout << "Name of the Student is :: " << obj->name << endl;

//     // Calling Methods with the help of Objects
//     obj->play();
//     obj->sleep();
//     return 0;
// }




//Accessing The Private Members From Outside Of Class
// #include <iostream>
// using namespace std;

// class Student
// {

//     // Making Private .
// private:
//     // State or Propeerties                Data Members
//     int age;  
// public:
//     string name;

//     // Behaviours or Functions             Member Functions
//     void play()
//     {
//         cout << "Student is Playing " << endl;
//     }

//     void sleep()
//     {
//         cout << "Student is Sleeping " << endl;
//     }

//     //Getter Function
//     int getage()
//     {
//         return age;
//     }
//     //Setter Functions
//     void setage(int age)
//     {
//         this->age = age;
//       //(*this).age = age;
//     }
// };

// int main()
// {

//     // Dynamically Memory Allocation         Object Creation
//     Student *obj = new Student;
//     obj->setage(24);
//     obj->name = "Deepak";
//     cout << endl;
//     cout << "Age of the Student is :: " << obj->getage() << endl;
//     cout << "Name of the Student is :: " << obj->name << endl;

//     // Calling Methods with the help of Objects
//     obj->play();
//     obj->sleep();
//     return 0;
// }



//Tpes oF Construcors

// #include <iostream>
// using namespace std;

// class Student
// {

//     // Making Private .
// private:
//     // State or Propeerties                Data Members
//     int age;  
// public:
//     string name;

//     // Behaviours or Functions             Member Functions
//     void play()
//     {
//         cout << "Student is Playing " << endl;
//     }

//     void sleep()
//     {
//         cout << "Student is Sleeping " << endl;
//     }

//     //Getter Function
//     int getage()
//     {
//         return age;
//     }
//     //Setter Functions
//     void setage(int age)
//     {
//         this->age = age;
//       //(*this).age = age;
//     }

//     //Default Constructor
//     Student()
//     {
//         this->age = 0;
//         this->name = "";
//         cout << "I am Student from Default Constructor" << endl;
//     }

//     //Parameterized Constructor
//     Student(int age)
//     {
//         this->age = age;
//         cout << "I am Student from Parameterized Constructor" << endl;
//     }
//     //Parameterized Constructor
//     Student(int age,string name)
//     {
//         this->age = age;
//         this->name = name;
//         cout << "I am Student from 2 Parameterized Constructor" << endl;
//     }

//     //COPY CONSTRUCTOR
//     Student(Student &cpyobj)
//     {
//         this->age = cpyobj.age;
//         this->name = cpyobj.name;
//         cout << "I am Inside Copy Constructor " << endl;
//     }
// };

// int main()
// {
//     cout << "By Creating OBject as Dynamic We can Call Constructor " <<endl;
//     Student obj1(32);
//     // Student* obj1 = new Student(32);
//     Student* obj = new Student(32,"SaiDeepak");
//     // cout << obj->getage();

//     // cout << "By Creating OBject as Static We can Call Constructor " <<endl;
//     // Student obj1;


//     //Object Copy    Three Types of Copying Object 
//     Student b = obj1;
//     Student d(*obj);
//     Student c(b);

//     return 0;
// }


//Destructors
#include <iostream>
using namespace std;

class Student
{

    // Making Private .
private:
    // State or Propeerties                Data Members
    int age;  
public:
    string name;

    // Behaviours or Functions             Member Functions
    void play()
    {
        cout << "Student is Playing " << endl;
    }

    void sleep()
    {
        cout << "Student is Sleeping " << endl;
    }

    //Getter Function
    int getage()
    {
        return age;
    }
    //Setter Functions
    void setage(int age)
    {
        this->age = age;
      //(*this).age = age;
    }

    //Default Constructor
    Student()
    {
        this->age = 0;
        this->name = "";
        cout << "I am Student from Default Constructor" << endl;
    }

    //Parameterized Constructor
    Student(int age)
    {
        this->age = age;
        cout << "I am Student from Parameterized Constructor" << endl;
    }
    //Parameterized Constructor
    Student(int age,string name)
    {
        this->age = age;
        this->name = name;
        cout << "I am Student from 2 Parameterized Constructor" << endl;
    }

    //COPY CONSTRUCTOR
    Student(Student &cpyobj)
    {
        this->age = cpyobj.age;
        this->name = cpyobj.name;
        cout << "I am Inside Copy Constructor " << endl;
    }

    //Destructor
    ~Student()
    {
        cout << "I am Inside Destructor " << endl;
    }
};

int main()
{
    // cout << "By Creating OBject as Dynamic We can Call Constructor " <<endl;
    // Student obj1(32);
    // // Student* obj1 = new Student(32);
    // Student* obj = new Student(32,"SaiDeepak");
    // // cout << obj->getage();

    // // cout << "By Creating OBject as Static We can Call Constructor " <<endl;
    // // Student obj1;


    // //Object Copy    Three Types of Copying Object 
    // Student b = obj1;
    // Student d(*obj);
    // Student c(b);


    cout << "a object created" << endl;
    Student a;
    a.name = "Deepak";

    cout << "b object created" << endl;
    Student* b = new Student();
    //Manually Deleting for Dynamically created Memory allocation
    b->name = "Sai";
    delete b;

    return 0;
}