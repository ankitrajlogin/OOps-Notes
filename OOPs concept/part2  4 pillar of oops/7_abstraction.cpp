// abstaction hiding --> abstraction 

/*

Abstraction is one of the fundamental concepts in Object-Oriented Programming (OOP). It refers to the concept of hiding the internal implementation details of a class and only exposing the necessary functionality to the outside world. In simpler terms, abstraction focuses on what an object does rather than how it does it.

By using abstraction, you can create a simplified representation of complex systems by highlighting the essential aspects and hiding unnecessary details. This makes it easier to manage and work with complex systems.


Here’s a real-life example to illustrate abstraction:

Example: Imagine using a television. You can turn it on, change channels, adjust the volume, etc., without knowing the internal workings like how the circuits inside process signals. The remote control and interface provide an abstraction layer, allowing you to interact with the TV without dealing with its complexities.


***************************************************************************************************************

Pure virtual function. 
------------------------
A pure virtual function is a function that is declared within a base class but has no implementation in that class. It is intended to be overridden by derived classes. A class that contains at least one pure virtual function is called an abstract class, and such classes cannot be instantiated directly. Instead, they provide a blueprint for other classes that derive from them and implement the pure virtual function.

--------------------------------

Syntax of a Pure Virtual Function
A pure virtual function is declared by assigning 0 to the function in the base class declaration. Here's the syntax:

class BaseClass {
public:
    virtual void functionName() = 0;  // Pure virtual function
};


************************************************************************************************

*/

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    void draw_shape(){
        cout << "this is the shape" << endl; 
    }
    // Pure virtual function
    virtual void draw() = 0;  // Abstract method
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    // Shape s 
    // Cannot instantiate Shape because it's an abstract class
    // Shape shape; // Error: Cannot instantiate abstract class

    Circle circle;
    Rectangle rectangle;

    circle.draw();    // Output: Drawing a circle
    rectangle.draw(); // Output: Drawing a rectangle

    circle.draw_shape() ;  // we can call base class function using derived class ; 
 
    

    

    return 0;
}
