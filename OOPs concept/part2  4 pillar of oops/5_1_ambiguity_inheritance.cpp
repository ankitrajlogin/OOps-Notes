
/*
Ambiguity in Multiple Inheritance
In multiple inheritance, a class can inherit from more than one base class. This can lead to ambiguity when two or more base classes have member functions (or data members) with the same name. The derived class inherits both versions of the member, causing the compiler to be unsure which one to invoke when called.

Here, class C inherits from both A and B, and both classes have a method show(). When obj.show() is called, the compiler doesn’t know whether to call A::show() or B::show(), resulting in an ambiguity error.

**********************************************************************

How to Solve Ambiguity in Multiple Inheritance

1. Using Scope Resolution Operator (::)
The simplest solution is to explicitly specify which base class's member function you want to call using the scope. Here, the view() method in class C uses A::show() and B::show() to resolve the ambiguity.

2. Virtual Inheritance
Ambiguity also occurs due to the diamond problem in multiple inheritance. In this case, you can solve the problem using virtual inheritance.


********************************************************************************
*/


#include <iostream>
using namespace std;

class A {
public:
    void display() {
        std::cout << "Class A" << std::endl;
    }
};

class B {
public:
    void display() {
        std::cout << "Class B" << std::endl;
    }
};

class C : public A, public B {
public:
    void display() {
        // Explicitly calling the display() method of class A
        A::display();
        // Explicitly calling the display() method of class B
        B::display();
    }
};

int main() {
    C c;

    c.display(); // Calls both A's and B's display functions explicitly

    // or another method ; 
    c.A::display() ; 
    c.B::display() ; 
    return 0;
}
