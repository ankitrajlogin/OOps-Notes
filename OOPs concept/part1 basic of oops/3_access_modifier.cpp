/*
In Object-Oriented Programming (OOP), access modifiers (or access specifiers) determine the visibility and accessibility of class members (attributes and methods). C++ provides three main access modifiers:

1. Public:
Members declared as public are accessible from anywhere in the program. This means that these members can be accessed both from within the class and from outside the class.

2. Private:
Members declared as private are only accessible within the class in which they are declared. They cannot be accessed directly from outside the class.

3. Protected:
Members declared as protected are accessible within the class and by derived (child) classes, but not by other parts of the program.

********************************************************************

Summary Table

----------------------------------------------------------------------------------------------------------------------------------
|     Access Modifier	|  Accessible Inside Class	   |      Accessible in Derived Class	 |         Accessible Outside Class   |
-----------------------------------------------------------------------------------------------------------------------------------
|     public	        |        Yes	               |                     Yes             |                    	Yes           |
----------------------------------------------------------------------------------------------------------------------------------
|     protected	        |        Yes	               |                     Yes             |                    	No            |
----------------------------------------------------------------------------------------------------------------------------------
|     private	        |        Yes	               |                     No	             |                      No            |
-----------------------------------------------------------------------------------------------------------------------------------

********************************************************************


Why Use Access Modifiers?
Encapsulation: Access modifiers help encapsulate the data and restrict access to it, ensuring that the internal implementation details of a class are hidden from the outside world.

Control: By making variables and methods private or protected, you can control how they are accessed and modified, ensuring data integrity and security.

Inheritance: Protected access allows derived classes to reuse and extend the functionality of the base class while keeping certain details hidden from the outside world.



********************************************************************
Getters and setters are special methods in Object-Oriented Programming (OOP) that are used to access and modify private or protected data members of a class. They provide a way to control access to the data, encapsulating the internal state of an object and ensuring that it can only be accessed or modified in a controlled manner.

*/



#include <iostream>
#include <string>
using namespace std;

class Hero {
private:
    string name;
    int health;

public:
    // Getter for name
    string getName() {
        return name;
    }

    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for health
    int getHealth() {
        return health;
    }

    // Setter for health
    void setHealth(int h) {
        if (h >= 0) {  // Adding validation
            health = h;
        } else {
            cout << "Invalid health value!" << endl;
        }
    }
};

int main() {
    Hero hero;

    // Using setter methods
    hero.setName("Superman");
    hero.setHealth(100);

    // Using getter methods
    cout << "Hero's Name: " << hero.getName() << endl;
    cout << "Hero's Health: " << hero.getHealth() << endl;

    return 0;
}

