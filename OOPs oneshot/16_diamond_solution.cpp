/*
Solution to the Diamond Problem: Virtual Inheritance
In C++, the diamond problem can be solved using virtual inheritance. By declaring A as a virtual base class for both B and C, C++ ensures that only one instance of A is shared among all subclasses.


Explanation
Virtual Inheritance:
Declaring A as a virtual base class for both B and C ensures that only one shared instance of A is inherited by D.
This eliminates ambiguity, as there’s now only a single A instance in D.

How it Works:
When B and C are virtually inheriting A, they tell the compiler to share A instead of creating separate copies. Therefore, D only gets one instance of A.
*/

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A show function" << endl;
    }
};

class B : public virtual A { };  // Virtual inheritance

class C : public virtual A { };  // Virtual inheritance

class D : public B, public C { };

int main() {
    D obj;
    obj.show();  // No ambiguity, resolves correctly
    return 0;
}


