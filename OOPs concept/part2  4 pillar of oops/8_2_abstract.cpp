
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


    // implementing through pointer 

    Shape* shape = new Circle() ; 

    shape->draw_shape() ; 
    shape->draw() ; 
 
    

    

    return 0;
}
