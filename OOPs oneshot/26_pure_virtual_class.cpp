/*
 Pure Virtual Function

1. Also called Absract function.

2. A pure virtual function in c++, is a virtual function for which we can have implementation, but we must override that function in the derived class, otherwise the derived class will also become abstract class.
*/

#include <iostream>
using namespace std;

class AbstractBase {
public:
    virtual void display() = 0;  // Pure virtual function
    void show(){
        cout << "showing from Abstract base class" << endl; 
    }
};

class Derived : public AbstractBase {
public:
    void display() override {  // Implement the pure virtual function
        cout << "Display function in Derived class." << endl;
    }
};

int main() {
    // AbstractBase a;  // Error: Cannot instantiate an abstract class

    AbstractBase* b = new Derived();
    b->display();  // Calls Derived's display function

    b->show() ; 

    
    delete b;
    return 0;
}
