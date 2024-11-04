
/*********************************************************************** *
A constructor is a special type of member function in a class that is automatically called when an object of that class is created. The primary purpose of a constructor is to initialize the object's attributes and allocate resources if necessary. Constructors have the same name as the class and do not have a return type.

There are 3 types of constructors:
1. Default constructors
2. Parameterized constructors
3. Copy constructors


1. Default Constructor:
A constructor that does not take any parameters (or has default parameters).
It initializes the object with default values.
If no constructor is defined, the compiler provides a default constructor automatically.

2. Parameterized Constructor: 
A constructor is called Parameterized Constructor when it accepts a specific number of parameters.
It allows different objects of the same class to have different initial values.

3. Copy Constructor:
A constructor that creates a new object as a copy of an existing object.
It is used when an object is passed by value to a function or returned from a function.
The default copy constructor provided by the compiler performs a shallow copy, but you can define a custom copy constructor if deep copying is needed.


4. Move Constructor (C++11 and later):
A constructor that "moves" resources from one object to another instead of copying them.
It is useful for performance optimization, especially with temporary objects, as it allows the transfer of resources without duplicating them.

*/


#include <bits/stdc++.h>
using namespace std;

class student
{
     string name;
     public:
       int age;
       bool gender;
    
    // Default Constructor
    student(){
      cout<<"Default Constructor"<<endl;
    }
    
    // Parameterised Constructor
    student(string s, int a, int b)  
    {
       name = s;
       age = a;
       gender = b;
       cout <<"parameterised constructor"<<endl;
    }

    // Copy Constructor
    student (student &p){              
      name = p.name;
      age = p.age;
      gender = p.gender;
      cout<<"copy constructer"<<endl;
    }

    void printinfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
        cout << "\n";
    }
};

int main()
{   
    // Default Constructer Call
    student s1;
    s1.printinfo();
    // Parameterised Constructer Call
    student s2("sumeet", 20, 1);
    s2.printinfo();
    // Copy Constructor Call
    student s3(s2);
    s3.printinfo();

    return 0;
}
