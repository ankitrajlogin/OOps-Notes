/*
What is a Virtual Function?
A virtual function is a member function in a base class that you expect to override in derived classes. When you use a virtual function, you're telling the compiler to support dynamic binding (or late binding), which allows the program to decide at runtime which function to call based on the actual object type, rather than the type of the pointer or reference to the object. This is a core feature of polymorphism in C++.

Why Use Virtual Functions?
Virtual functions are crucial in achieving run-time polymorphism. They allow for the implementation of interface abstraction and dynamic behavior in object-oriented programming. This means you can use a base class pointer to refer to derived class objects and still call the appropriate overridden methods.

How to Declare a Virtual Function
To declare a virtual function, you precede the function declaration in the base class with the keyword virtual.

*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show function called." << endl;
    }

    virtual ~Base() {  // Virtual destructor
        cout << "Base class destructor called." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Override base class method
        cout << "Derived class show function called." << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    Base* bptr;          // Base class pointer

    Derived d;          // Derived class object
    bptr = &d;          // Point to derived class object

    bptr->show();       // Calls Derived's show() due to dynamic binding

    delete bptr;       // Attempting to delete derived object using base pointer (not safe, see explanation below)


    
}
