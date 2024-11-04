
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal(){
        cout << "animal class is constructed" << endl; 
    }
    void eat() {
        cout << "Animal is eating." << endl;
    }

    void leg(){
        cout << "Animal has generally four legs" << endl ; 
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    Dog(){
        cout << "Dog class is constructed " << endl; 
    }
    void bark() {
        cout << "Dog is barking." << endl;
    }

    void eat(){
        cout << "Dog is eat vegitable as well as meat" << endl; 
    }

    
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from the Animal class
    myDog.bark(); // Defined in the Dog class
    myDog.leg() ; 
    return 0;
}
