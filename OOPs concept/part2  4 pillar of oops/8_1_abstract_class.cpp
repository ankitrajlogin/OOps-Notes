/*
Abstract Class
An abstract class is a class that cannot be instantiated directly and is meant to be subclassed. It often contains one or more pure virtual functions (in C++), which must be implemented by derived classes.

Pure Virtual Function
A pure virtual function is a function declared in an abstract class that has no implementation in that class and is marked with = 0 in C++. Derived classes must provide an implementation for this function.


**************************************************************************
Abstraction using Abstract Classes

1. Abstract classes are used to provide a base class from which other classes can be derived ; 
2. They cann't be instantiated and are meant to be inherited. 
3. Abstract classes are typically used to define an interface for derived classes. 


*/


#include <iostream>
using namespace std;

// Abstract base class with multiple pure virtual functions
class Shape {
public:
    // Pure virtual function for drawing the shape
    virtual void draw() const = 0;

    // Pure virtual function for calculating area of the shape
    virtual double area() const = 0;

    // Pure virtual function for calculating perimeter of the shape
    virtual double perimeter() const = 0;

    void show(){
        cout << "this is the show function  in abstract class" << endl; 
    }

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class implementing the Shape abstract class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        cout << "Drawing a Circle" << endl;
    }

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }

    
};

// Derived class implementing the Shape abstract class
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() const override {
        cout << "Drawing a Rectangle" << endl;
    }

    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    shape1->draw();
    cout << "Area of Circle: " << shape1->area() << endl;
    cout << "Perimeter of Circle: " << shape1->perimeter() << endl;

    shape2->draw();
    cout << "Area of Rectangle: " << shape2->area() << endl;
    cout << "Perimeter of Rectangle: " << shape2->perimeter() << endl;\
    
    shape2->show() ;

    delete shape1;
    delete shape2;

    return 0;
}
