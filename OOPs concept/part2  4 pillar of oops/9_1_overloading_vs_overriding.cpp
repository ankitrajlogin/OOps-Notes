
/*
Overloading
Definition: Method overloading occurs when multiple methods in the same class have the same name but different parameters (different type, number, or both). Overloading is a compile-time concept.

2. Overriding
Definition: Method overriding occurs when a derived class provides a specific implementation of a method that is already defined in its base class. Overriding is a runtime concept and involves polymorphism.

*/


// overriding. 

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() const {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() const override {  // Override the Base class show()
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* bptr = new Derived();
    bptr->show();   // Calls Derived's show() due to overriding
    
    delete bptr;
    return 0;
}
