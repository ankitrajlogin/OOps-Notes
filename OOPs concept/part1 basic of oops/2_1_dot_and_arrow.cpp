
/*
Dot Operator (.):
The dot operator is used to access members of a class or structure when you have an object (or instance) of that class or structure. This is used when the object is stored directly and not through a pointer.

Syntax:
object.member


Arrow Operator (->):
The arrow operator is used to access members of a class or structure when you have a pointer to an object. It is essentially shorthand for dereferencing the pointer and then accessing the member using the dot operator.

Syntax:
pointer->member

Other method 
(*pointer).member ; 

*/

#include<iostream>

using namespace std ; 

class Hero{
    public : 
        string name ; 
        int health ; 

        void display() {
            cout << "Name: " << name << ", Health: " << health << endl;
        }
};

int main(){
    Hero hero1;
    hero1.name = "Superman";
    hero1.health = 100;
    hero1.display();  // Accessing members using dot operator


    // Using the Arrow Operator
    Hero* hero2 = new Hero;
    hero2->name = "Batman";
    hero2->health = 80;

    (*hero2).health = 90 ; 
    hero2->display();  // Accessing members using arrow operator

    // Cleanup dynamic memory
    delete hero2;

    return 0; 

}