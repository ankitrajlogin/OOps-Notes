
/*
Encapsulation is one of the four fundamental Object-Oriented Programming (OOP) principles (along with Abstraction, Inheritance, and Polymorphism). It refers to the bundling of data (variables) and methods (functions) that operate on the data into a single unit or class. 

********************************************************************

--> Encapsulation is wrapping up of data & member functions in a single unit called class. 

--> Encapsulation also means restricting direct access to some of an object's components, which is a means of preventing accidental interference and misuse of the data. In essence, encapsulation provides a way to protect the internal state of an object from unwanted changes by restricting access to certain components (typically through access specifiers like private, protected, and public).

**************************************************************************

--> Encapsulation in OOP is about wrapping data and the methods that operate on the data into a single unit, often restricting direct access to some of the object's components. This helps improve security, control, and maintainability while allowing for more flexibility in the internal implementation of a class.



***********************************************************************
what is fully encapsulated ? 

A fully encapsulated class is a class in which all the data members (variables) are declared as private. This means that the data members cannot be directly accessed from outside the class. Instead, access to the data members is provided through public methods (like getters and setters). This ensures that the internal state of the object is completely hidden from the outside world and can only be modified or retrieved via controlled methods.


Encapsulation --> data hidding // information hidding. 

*/

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    // Constructor
    Employee(string empName, int empId, double empSalary) {
        name = empName;
        id = empId;
        salary = empSalary;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for name
    void setName(string empName) {
        name = empName;
    }

    // Getter for id
    int getId() const {
        return id;
    }

    // Setter for id
    void setId(int empId) {
        id = empId;
    }

    // Getter for salary
    double getSalary() const {
        return salary;
    }

    // Setter for salary
    void setSalary(double empSalary) {
        if (empSalary >= 0) {
            salary = empSalary;
        } else {
            cout << "Invalid salary." << endl;
        }
    }
};

int main() {
    // Create an Employee object
    Employee emp("John Doe", 101, 50000.0);

    // Accessing data using getter methods
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee ID: " << emp.getId() << endl;
    cout << "Employee Salary: $" << emp.getSalary() << endl;

    // Modifying data using setter methods
    emp.setName("Jane Smith");
    emp.setSalary(60000.0);

    cout << "\nUpdated Employee Details:\n";
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Salary: $" << emp.getSalary() << endl;

    return 0;
}




