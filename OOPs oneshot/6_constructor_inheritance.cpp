/*
Constructors
Purpose of Constructors:

Constructors are called when an object of a class is created. They initialize the object's data members and allocate resources if needed.
Non-Inheritance:

Constructors are not inherited because each class can have its own unique initialization logic that may not be applicable to derived classes. If constructors were inherited, it could lead to ambiguity and complications in object initialization.
Derived classes have the flexibility to define their own constructors that may take different parameters or perform different initialization tasks than the base class.
*/


#include <iostream>
using namespace std;


class Base {
public:
    Base() { 
        cout << "Base class constructor called." << endl;
    }
    ~Base() { 
        cout << "Base class destructor called." << endl;
    }
};


class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }
    ~Derived() { 
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    Derived d; // Create an object of the derived class
    return 0;
}
