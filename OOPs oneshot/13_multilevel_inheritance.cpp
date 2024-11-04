
/*
In multilevel inheritance, a class is derived from another derived class, creating a chain of inheritance across multiple levels. Each class inherits properties and behaviors from the class it is derived from, allowing traits to propagate through the hierarchy.

*/



#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of Class A called." << endl;
    }
    
    ~A() { 
        cout << "Destructor of Class A called." << endl;
    }

    void show(){
        cout << "value of A is showing " << endl; 
    }
};

class B : public A { 
public:
    B() {  
        cout << "Constructor of Class B called." << endl;
    }
    
    ~B() {
        cout << "Destructor of Class B called." << endl;
    }
};

class C : public B {
public:
    C() { 
        cout << "Constructor of Class C called." << endl;
    }
    
    ~C() { // Destructor of class C
        cout << "Destructor of Class C called." << endl;
    }
};

int main() {
    C objC; // Creating an object of class C

    objC.show() ;
  

    return 0;
}

