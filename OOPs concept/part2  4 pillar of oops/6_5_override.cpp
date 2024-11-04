
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }

    virtual void legs(){
        cout << "There are 4 legs of animals" << endl; 
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animalPtr; // Base class pointer

    Dog dog;
    Cat cat;

    // Pointing to Dog object
    animalPtr = &dog;
    animalPtr->sound();  // Output: Dog barks

    // Pointing to Cat object
    animalPtr = &cat;
    animalPtr->sound();  // Output: Cat meows

    animalPtr->legs() ; 

    return 0;
}
