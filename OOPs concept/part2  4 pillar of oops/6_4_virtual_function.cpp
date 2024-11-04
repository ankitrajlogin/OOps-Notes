/*

A virtual function in C++ is a member function in a base class that you expect to override in derived classes. When you use virtual functions, you can achieve runtime polymorphism, which allows you to call derived class methods through a base class pointer or reference. This is essential for implementing dynamic (or late) binding.


Key Concepts of Virtual Functions
----------------------------------

1. Declared in Base Class: A virtual function is declared using the virtual keyword in the base class. This tells the compiler to bind the function call at runtime rather than compile time.

2. Overridden in Derived Classes: Virtual functions are typically overridden in derived classes to provide specific implementations for the derived class objects.

3. Base Class Pointer or Reference: When you use a base class pointer or reference to point to a derived class object, the virtual function mechanism ensures that the correct derived class function is called, even though the type of the pointer/reference is the base class.


**********************************************************************************

A virtual function in C++ is a member function in a base class that you expect to override in derived classes. Virtual functions enable runtime polymorphism by allowing derived classes to provide their own implementations of functions that are defined in the base class. When a virtual function is called through a pointer or reference to the base class, the actual function that gets called is determined by the type of the object being pointed to at runtime, rather than by the type of the pointer.

Key Points
1. Declared with virtual keyword: The function in the base class is declared as virtual using the virtual keyword. This tells the compiler to perform dynamic (runtime) binding for that function instead of static (compile-time) binding.

2. Overridden in Derived Classes: Derived classes can provide their own implementation of the virtual function. When the function is called through a base class pointer or reference, the version from the derived class is executed.

3. Supports Polymorphism: Virtual functions allow polymorphic behavior, where different derived classes can have different implementations of the same function, but the correct implementation is chosen at runtime based on the actual object type.



**********************************************************************************

Override : 
Override refers to the process where a derived class provides its own implementation of a virtual function that is declared in a base class.

Override in C++ is a feature used in inheritance, where a derived class provides its own implementation of a virtual function that is already defined in its base class. This is known as function overriding. The keyword override is optionally used to explicitly specify that a function is intended to override a virtual function in the base class.

Key Points of Function Overriding

Inheritance: Overriding occurs when a derived class redefines a function that is declared as virtual in the base class.

Same Signature: The overridden function in the derived class must have the same signature (same name, parameters, and return type) as the virtual function in the base class.

Virtual Function Requirement: The function in the base class must be marked as virtual for overriding to work.

Polymorphism: Overriding enables polymorphism, allowing the correct function to be called for an object, based on the object's runtime type, even when accessed through a base class pointer or reference.

*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {  // Overrides the Base class function
        cout << "Display from Derived class" << endl;
    }
};

int main() {

    Derived d ; 
    d.display() ; 

    Base b ; 
    b.display() ; 


    Base* basePtr;   // Base class pointer
    Derived derived; // Derived class object
    basePtr = &derived;

    // This will call the derived class's display() function because of virtual function
    basePtr->display();  // Output: Display from Derived class

    return 0;
}
