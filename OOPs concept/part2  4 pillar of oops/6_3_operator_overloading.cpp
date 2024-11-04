/*

Operator Overloading in C++ is a feature that allows developers to redefine the behavior of operators for user-defined types (such as classes and structs). This means you can make operators like +, -, *, and == work with objects in a way similar to how they work with built-in types (like integers and floats).

*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) { }

    // Overload + operator to add two Complex objects
    Complex operator + (const Complex &obj) {
        this->real = real + obj.real;
        this->imag = imag + obj.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    c1 + c2;  // Uses the overloaded + operator
    c1.display();  // Output: 4 + 6i
    return 0;
}
