
/*
The diamond problem is a well-known issue in multiple inheritance. It arises when a class inherits from two classes that both inherit from a single base class. This creates an ambiguity over which version of the base class properties or methods the derived class should inherit, leading to potential conflicts.

      A
     / \
    B   C
     \ /
      D

*/



#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A show function" << endl;
    }
};

class B : public A { };

class C : public A { };

class D : public B, public C { };

int main() {
    D obj;
    // Ambiguity because show() is inherited from both B and C


    // obj.show();  // Error: ambiguous
    return 0;
}
