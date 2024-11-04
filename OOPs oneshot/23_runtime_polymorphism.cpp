
/*
Runtime Polymorphism
Runtime polymorphism is also known as dynamic polymorphism or late binding. In runtime polymorphism, the function call is resolved at run time.
This type of polymorphism is achieved by Function Overriding or Virtual function.
Virtual Function

Virtual is a keyword in C++
1. A virtual function is a member function in the base class that we expect to redefine in derived classes

2. When a virtual function is defined in a base class, then in runtime on the basis of type of object assigned to it, the respective class function is called.
*/



#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {  // Virtual function
        cout << "Drawing a generic shape." << endl;
    }

    Shape(){
        cout << "Shape constructor is called" << endl; 
    }

    virtual ~Shape() {  // Virtual destructor for cleanup
        cout << "Shape destructor called." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {  // Overriding draw()
        cout << "Drawing a circle." << endl;
    }

    Circle(){
        cout << "Circle constructor is called " << endl ; 
    }

    ~Circle() {
        cout << "Circle destructor called." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {  // Overriding draw()
        cout << "Drawing a rectangle." << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called." << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();      // Base class pointer to Circle object
    Shape* shape2 = new Rectangle();   // Base class pointer to Rectangle object

    shape1->draw();  // Outputs: Drawing a circle (Circle's version of draw)
    shape2->draw();  // Outputs: Drawing a rectangle (Rectangle's version of draw)

    delete shape1;  // Correctly calls Circle's destructor, then Shape's destructor
    delete shape2;  // Correctly calls Rectangle's destructor, then Shape's destructor


    cout << " ------------------------------" << endl; 

    Rectangle r1 ; 
    r1.draw() ; 
    

    return 0;
}
