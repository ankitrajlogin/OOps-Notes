/*
Constructor
A constructor is a special member function that is automatically called when an object of a class is created. Its primary purpose is to initialize the object and allocate resources.

--> It is a special method invoked automatically at time of object creation. Used for Initialisation. 

1. Same name as class. 
2. constructor doesn't have a return type 
3. Only called once (automatically) , at object creation. 
4. Memory allocation happens when constructor is called ; 



Destructor
A destructor is a special member function that is automatically called when an object is destroyed. Its main purpose is to release resources and perform cleanup tasks.



*/


#include <iostream>
using namespace std ; 

class MyClass {
public:
    MyClass() {
        cout << "Constructor called!" << endl ;     
    }
    
    ~MyClass() { // Destructor
        cout << "Destructor called!" << endl;
    }
};

int main() {

    cout << "object is creating :" << endl ; 

    MyClass obj; 

    cout << "at the end destructor called " << endl; 
    return 0;
}
