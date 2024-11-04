
/*
Inheritance is a fundamental concept in Object-Oriented Programming (OOP) that allows one class (called a child or derived class) to inherit the properties and behavior (fields and methods) of another class (called a parent or base class). Inheritance promotes code reusability, as the child class can use, extend, or override the behavior of the parent class without rewriting the code.

This relationship is often described as an "is-a" relationship, where the child class is a specialized version of the parent class.

*****************************************************************************************

Example 1: Real-Life Example of Inheritance in Employees

Consider a company where you have a general Employee class. From this class, you could derive specialized classes such as Manager and Developer, which inherit the common characteristics of an employee (like name, employeeID, and salary) and add specific attributes (like teamSize for a Manager and programmingLanguages for a Developer).

***********************************************************************************************

Types of Inheritance
---------------------

1. Single Inheritance: A child class inherits from one parent class.

2. Multiple Inheritance: A child class inherits from more than one parent class (not supported directly in Java, but allowed in C++).

3. Multilevel Inheritance: A child class inherits from a parent class, which in turn inherits from another parent class.

4. Hierarchical Inheritance: Multiple child classes inherit from a single parent class.

5. Hybrid Inheritance: A combination of two or more types of inheritance.

*/

#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void displaySpeed() const {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class (inherits from Vehicle)
class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    void setNumberOfDoors(int doors) {
        numberOfDoors = doors;
    }

    void displayCarDetails() const {
        displaySpeed();  // Inherited method from Vehicle class
        cout << "Number of doors: " << numberOfDoors << endl;
    }
};

// Another derived class (inherits from Vehicle)
class Bike : public Vehicle {
private:
    string typeOfHandlebar;

public:
    void setHandlebarType(string handlebar) {
        typeOfHandlebar = handlebar;
    }

    void displayBikeDetails() const {
        displaySpeed();  // Inherited method from Vehicle class
        cout << "Type of handlebar: " << typeOfHandlebar << endl;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(120);
    myCar.setNumberOfDoors(4);
    myCar.displayCarDetails();

    Bike myBike;
    myBike.setSpeed(80);
    myBike.setHandlebarType("Sport");
    myBike.displayBikeDetails();


    myCar.displaySpeed() ; 
    myBike.displaySpeed() ; 

    return 0;
}
