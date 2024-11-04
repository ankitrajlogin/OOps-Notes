
/*

In hierarchical inheritance, multiple derived classes inherit from a single base class. This allows different classes to share and reuse the properties and methods of a common base class, while each derived class can have its own unique properties or behaviors.

Hierarchical inheritance is useful when multiple classes need a shared set of characteristics but also require specialized functionality.
*/

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called." << endl;
    }
    
    void startEngine() {
        cout << "Engine started." << endl;
    }

    ~Vehicle() {
        cout << "Vehicle destructor called." << endl;
    }
};

// Derived class Car inherits from Vehicle
class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor called." << endl;
    }
    
    void playMusic() {
        cout << "Playing music in the car." << endl;
    }

    ~Car() {
        cout << "Car destructor called." << endl;
    }
};

// Derived class Bike inherits from Vehicle
class Bike : public Vehicle {
public:
    Bike() {
        cout << "Bike constructor called." << endl;
    }
    
    void doWheelie() {
        cout << "Doing a wheelie on the bike!" << endl;
    }

    ~Bike() {
        cout << "Bike destructor called." << endl;
    }
};

// Derived class Truck inherits from Vehicle
class Truck : public Vehicle {
public:
    Truck() {
        cout << "Truck constructor called." << endl;
    }
    
    void loadCargo() {
        cout << "Loading cargo onto the truck." << endl;
    }

    ~Truck() {
        cout << "Truck destructor called." << endl;
    }
};

int main() {
    cout << "Creating a Car object:" << endl;
    Car myCar;
    myCar.startEngine();
    myCar.playMusic();
    
    cout << "\nCreating a Bike object:" << endl;
    Bike myBike;
    myBike.startEngine();
    myBike.doWheelie();
    
    cout << "\nCreating a Truck object:" << endl;
    Truck myTruck;
    myTruck.startEngine();
    myTruck.loadCargo();
    
    return 0;
}
