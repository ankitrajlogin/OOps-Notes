/*
Access specifiers in C++ are keywords that define the accessibility of class members (attributes and methods). They control how the members of a class can be accessed from outside the class and from derived classes. The three main access specifiers in C++ are public, protected, and private.

Access Specifiers
Access Specifier	Accessible Within Class	      Accessible in Derived Class	      Accessible Outside Class
public	                  Yes	                            Yes	                            Yes
protected	              Yes	                            Yes	                             No
private	                  Yes	                            No	                             No


Detailed Explanation of Each Access Specifier
Public:
Members declared as public can be accessed from anywhere in the program, including outside the class and in derived classes.

Protected:
Members declared as protected can be accessed only within the class and by derived classes. They are not accessible from outside the class.

Private:
Members declared as private can only be accessed within the class itself. They cannot be accessed from derived classes or from outside the class.
*/

#include <iostream>
using namespace std;

class Base {
public:
    int publicVar; // Public member

protected:
    int protectedVar; // Protected member

private:
    int privateVar; // Private member

public:
    Base() {
        publicVar = 1;
        protectedVar = 2;
        privateVar = 3;
    }

    void display() {
        cout << "Public Var: " << publicVar << endl;
        cout << "Protected Var: " << protectedVar << endl;
        cout << "Private Var: " << privateVar << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Accessing from Derived class:" << endl;
        cout << "Public Var: " << publicVar << endl; // Accessible
        cout << "Protected Var: " << protectedVar << endl; // Accessible
        // cout << "Private Var: " << privateVar << endl; // Not Accessible
    }
};

int main() {
    Base baseObj;
    baseObj.display(); // Accessible

    Derived derivedObj;
    derivedObj.show(); // Accessible

    derivedObj.publicVar = 34 ; 
    cout << "publicVar is : " << derivedObj.publicVar << endl; 

    // Accessing members outside the class
    cout << "Accessing from Main function:" << endl;
    cout << "Public Var: " << baseObj.publicVar << endl; // Accessible
    // cout << "Protected Var: " << baseObj.protectedVar << endl; // Not Accessible
    // cout << "Private Var: " << baseObj.privateVar << endl; // Not Accessible

    return 0;
}
