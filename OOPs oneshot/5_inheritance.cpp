/**
Inheritance is one of the core principles of Object-Oriented Programming (OOP) that allows a new class (called the derived class or child class) to inherit attributes and methods from an existing class (called the base class or parent class). This mechanism promotes code reuse, simplifies code management, and establishes a natural hierarchical relationship between classes.

Key Concepts of Inheritance
Base Class and Derived Class:

Base Class: The class whose properties and methods are inherited. It is also known as the parent or superclass.
Derived Class: The class that inherits from the base class. It is also known as the child or subclass.
Access Specifiers:

In C++, you can specify the visibility of the inherited members using access specifiers:
Public Inheritance: Public members of the base class remain public in the derived class, and protected members remain protected.
Protected Inheritance: Public and protected members of the base class become protected in the derived class.
Private Inheritance: Public and protected members of the base class become private in the derived class.
Method Overriding:

A derived class can provide a specific implementation of a method that is already defined in its base class. This is called overriding.
Constructor and Destructor:

Constructors and destructors are not inherited. However, the base class constructor is called before the derived class constructor when an object of the derived class is created.
Benefits of Inheritance
Code Reusability: Inherited code can be reused without having to rewrite it, reducing redundancy.
Logical Hierarchy: Inheritance helps to establish a logical relationship between classes, making the code easier to understand and manage.
Extensibility: You can easily extend existing classes with new functionality by creating derived classes.

*/

#include <iostream>
using namespace std;


class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};


class Dog : public Animal { 
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog dog; 

    dog.eat(); 
    dog.bark(); 

    return 0;
}
