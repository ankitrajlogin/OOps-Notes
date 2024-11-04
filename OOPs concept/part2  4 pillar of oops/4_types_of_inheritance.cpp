/*
In Object-Oriented Programming (OOP), inheritance allows a class (derived or child class) to inherit properties and methods from another class (base or parent class). There are several types of inheritance based on how the classes are related. The types of inheritance include:

*********************************************************************************************************************

1. Single Inheritance
In single inheritance, a derived class inherits from only one base class. This is the simplest form of inheritance.

  Animal (Base)
     |
   Dog (Derived)

*********************************************************************************************************************

2. Multiple Inheritance
In multiple inheritance, a derived class inherits from more than one base class. C++ supports multiple inheritance, but it can lead to ambiguity if not managed properly.

   Person   Employee (Base Classes)
      \       /
      Teacher (Derived Class)

*********************************************************************************************************************

3. Multilevel Inheritance
In multilevel inheritance, a class is derived from a base class, and another class is derived from that derived class. This creates a chain of inheritance.

  Parent (Base)
     |
   Child (Derived)
     |
 Grandchild (Derived)

*********************************************************************************************************************

4. Hierarchical Inheritance
In hierarchical inheritance, multiple derived classes inherit from a single base class. This is useful when you have a common base class that provides shared functionality for multiple derived classes.

      Animal (Base)
     /   |   \
  Dog  Cat  Bird (Derived)

*********************************************************************************************************************

5. Hybrid Inheritance
Hybrid inheritance is a combination of two or more types of inheritance. This can occur when, for example, you combine hierarchical and multilevel inheritance. In hybrid inheritance, care must be taken to manage the relationships between classes and avoid ambiguities, especially with multiple inheritance.

     Person   Employee (Base)
        \       /
       Teacher (Derived)
          |
       Professor (Derived)

*********************************************************************************************************************

*/


// 1. Single Inheritance 

class Animal {
    // Base class code
};

class Dog : public Animal {
    // Derived class code
};


// 2. Multiple Inheritance

class Person {
    // Base class code
};

class Employee {
    // Base class code
};

class Teacher : public Person, public Employee {
    // Derived class code
};



// 3. Multilevel Inheritance

class Parent {
    // Base class code
};

class Child : public Parent {
    // Derived class from Parent
};

class Grandchild : public Child {
    // Derived class from Child
};


// 4. Hierarchical Inheritance. 

class Animal {
    // Base class code
};

class Dog : public Animal {
    // Derived class
};

class Cat : public Animal {
    // Derived class
};

class Bird : public Animal {
    // Derived class
};


// 5. Hybrid Inheritance

class Person {
    // Base class code
};

class Employee {
    // Base class code
};

class Teacher : public Person, public Employee {
    // Derived class
};

class Professor : public Teacher {
    // Derived class
};


int main(){

    return 0 ; 
}





