
/*
A destructor in C++ is a special member function that is automatically invoked when an object goes out of scope or is explicitly deleted. Its primary purpose is to release resources that the object may have acquired during its lifetime, such as dynamically allocated memory, file handles, or network connections.


***********************************************

Key Characteristics of Destructors:

Automatic Invocation: Destructors are called automatically when an object goes out of scope or when delete is called on a dynamically allocated object.

Naming Convention: The name of a destructor is the class name prefixed with a tilde (~).

No Arguments or Return Value: Destructors cannot take any parameters and do not return anything.

One Per Class: There can only be one destructor per class, and it cannot be overloaded.

Order of Invocation: For objects in a class hierarchy, destructors are called in the reverse order of construction, i.e., the destructor for the derived class is called first, followed by the base class destructor.
*/


#include <iostream>

class MyClass {
private:
    int* data;

public:
    // Constructor
    MyClass(int size) {
        data = new int[size];  // Dynamically allocate memory
        std::cout << "Constructor: Memory allocated!" << std::endl;
    }

    // Destructor
    ~MyClass() {
        delete[] data;  // Free the allocated memory
        std::cout << "Destructor: Memory deallocated!" << std::endl;
    }
};

int main() {
    MyClass obj(10);  // Constructor is called
    // When obj goes out of scope, the destructor is called automatically


    MyClass *b = new MyClass(32);  
    delete b ; 
    // for dynamic, destructor have to call. 

    return 0;
}
