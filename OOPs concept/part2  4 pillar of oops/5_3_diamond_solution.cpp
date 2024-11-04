
/*
The Diamond Problem in Multiple Inheritance

In C++, when multiple inheritance leads to the same base class being inherited more than once, it can cause ambiguity. This is called the diamond problem. It occurs when two classes inherit from the same base class, and a derived class inherits from both of them. This can result in multiple copies of the base class being inherited.


Solution: The diamond problem can be resolved using virtual inheritance, where the base class is virtually inherited to ensure only one copy of the base class exists in the derived class hierarchy.


********************************************************************

Virtual inheritance. 

Virtual inheritance ensures that a base class is inherited only once in a multiple inheritance scenario, solving the diamond problem and preventing ambiguity and duplication. It requires explicit handling of base class constructors and introduces complexity, but it is crucial for managing complex inheritance hierarchies in C++.

*/

#include<bits/stdc++.h>

using namespace std ; 


class Base {
    // Base class code
    public:
        int base ; 
    
        void getbase(){
            cout << base << endl; 
        }
};

class A : virtual public Base {
    // Derived from Base
    public: 
        int a ; 

        void geta(){
            cout << a << endl; 
        }
};

class B : virtual public Base {
    // Derived from Base

    public:
        int b ; 

        void getb(){
            cout << b << endl; 
        }
};

class Derived : public A, public B {
    // Derived from both A and B

    public:
        int d ; 

        void getd(){
            cout << d << endl; 
        }
};





int main(){

    Derived der ; 

    der.d = 34 ; 
    der.base = 13 ;  

    der.getbase() ; 

    return 0 ; 
}
