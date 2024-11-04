
/*
A static member function is a function that belongs to the class rather than any particular object. It can be called using the class name itself, without needing an instance of the class. Static member functions can only access static member variables and other static member functions of the class because they do not operate on any specific instance of the class.

static function can't use this .

staic function only use static variable only ; 

*/



#include <iostream>

using namespace std;

class Myclass {
public:
    static int staticvar;  // Declare static variable
    int count = 0;  // Non-static member variable

    static void staticFunction() {
        cout << "Staticvar value: " << staticvar << endl;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

// Define the static variable outside the class
// :: -> this is called scope resolution operator. 
int Myclass::staticvar = 0;

int main() {
    Myclass::staticvar = 10;  // Access static member variable via class name

    Myclass obj1, obj2;

    
    Myclass::staticFunction();

    // Alternatively, you can access static function via objects (though not recommended)
    obj1.staticFunction();
    obj2.staticFunction();

    return 0;
}
