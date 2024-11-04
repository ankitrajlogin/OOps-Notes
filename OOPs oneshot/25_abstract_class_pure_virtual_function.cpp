/*
What is an Abstract Class?
An abstract class is a class that cannot be instantiated on its own and is designed to be a base class for other classes. It serves as a blueprint for derived classes and may contain one or more pure virtual functions (also known as abstract methods). A pure virtual function is a function that has no implementation in the abstract class and is declared by assigning 0 in its declaration.

Abstract classes are used to define interfaces that other classes must implement, ensuring that derived classes provide specific functionality.

Key Features of Abstract Classes
Cannot be Instantiated: You cannot create an object of an abstract class. It is meant to be subclassed.

Pure Virtual Functions: An abstract class contains at least one pure virtual function, which derived classes are required to implement.

Partial Implementation: An abstract class can have some implemented methods (with code) and some pure virtual functions.

Encourages Polymorphism: Abstract classes enable polymorphic behavior. You can use pointers or references of the abstract class type to refer to objects of derived classes.


Pure Virtual Function

1. Also called Absract function.

2. A pure virtual function in c++, is a virtual function for which we can have implementation, but we must override that function in the derived class, otherwise the derived class will also become abstract class.
*/

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;  // Making this class abstract

    // Concrete function (can have implementation)
    void display() {
        cout << "Displaying the shape." << endl;
    }
};

// Derived class implementing the pure virtual function
class Circle : public Shape {
public:
    void draw() override {  // Override pure virtual function
        cout << "Drawing a circle." << endl;
    }
};

// Derived class implementing the pure virtual function
class Rectangle : public Shape {
public:
    void draw() override {  // Override pure virtual function
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    // Shape shape; // Error: Cannot instantiate abstract class

    // Create pointers of type Shape to refer to derived class objects
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();   // Calls Circle's draw()
    shape1->display(); // Calls Shape's display()

    shape2->draw();   // Calls Rectangle's draw()
    shape2->display(); // Calls Shape's display()

    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}
