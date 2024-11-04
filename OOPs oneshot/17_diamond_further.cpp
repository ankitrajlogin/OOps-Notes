#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A constructor is called" << endl; 
    }

    void show() {
        cout << "Class A show function" << endl;
    }

    void sum(){
        cout <<"A sum function is called" << endl; 
    }
    void SUB(){
        cout <<"A SUB function is called" << endl; 
    }
};

class B : public virtual A {  // Virtual inheritance
public:
    B() {
        cout << "B constructor is called" << endl; 
    }

    void show(){
        cout << "B show function is called" << endl; 
    }
}; 

class C : public virtual A {  // Virtual inheritance
public:
    C() {
        cout << "C constructor is called" << endl; 
    }

    void show(){
        cout << "C show function is called" << endl; 
    }
}; 

class D : public B, public C { 
public: 
    D() {
        cout << "D constructor is called" << endl; 
    }

    void show(){
        C::show() ; 
        B::show() ; 
    }

    void SUB(){
        cout << "SUB function in D  is called"  << endl; 
        A::SUB() ; 
    }
};

int main() {
    D obj;
    obj.show();  // No ambiguity, resolves correctly

    obj.sum() ; 

    obj.SUB() ; 
    return 0;
}
