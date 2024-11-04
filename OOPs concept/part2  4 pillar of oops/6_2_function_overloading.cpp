/*
Function Overloading is a feature in C++ that allows multiple functions to have the same name but with different parameter lists (either in type, number, or both). The correct function to call is determined by the compiler at compile time based on the arguments passed to the function. This is an example of compile-time polymorphism.

*/

#include <iostream>
using namespace std;

class Print {
public:
    // Overloaded function to print an integer
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    // Overloaded function to print a double
    void show(double d) {
        cout << "Double: " << d << endl;
    }

    // Overloaded function to print a string
    void show(const string &s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(10);       // Calls show(int)
    p.show(10.5);     // Calls show(double)
    p.show("Hello");  // Calls show(string)
    return 0;
}
