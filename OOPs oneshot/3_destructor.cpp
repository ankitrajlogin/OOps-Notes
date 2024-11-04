/*

A destructor is a special member function in a class that is automatically called when an object of that class is destroyed. The primary purpose of a destructor is to clean up resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections.

Key Characteristics of Destructors:
1. Destructor is invoked automatically by the compiler when its corresponding constructor goes out of scope and releases the memory space that is no longer required by the program.

2. Name: The destructor has the same name as the class but is prefixed with a tilde (~).

3. No Parameters: Destructors do not take any parameters and do not return a value.

4. Automatic Invocation: Destructors are invoked automatically when an object goes out of scope or is explicitly deleted.

5. One Per Class: A class can have only one destructor, and it cannot be overloaded.

6. Destructor cannot be declared as static and const.

7. Destructor should be declared in the public section of the program.
*/

#include <iostream>
using namespace std;

int count = 0; // Global variable to track the number of objects created

class num {
public:
    num() { // Constructor
        count++; // Increment the count when a new object is created
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~num() { // Destructor
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--; // Decrement the count when an object is destroyed
    }
};

int main() {
    {
        num obj1; // Constructor is called, count becomes 1
        num obj2; // Constructor is called, count becomes 2
    } // Destructor is called for obj2 and then obj1 when going out of scope

    return 0;
}
