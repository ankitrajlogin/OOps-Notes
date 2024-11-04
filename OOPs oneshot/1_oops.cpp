/***************************************************** 
Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects," which can contain both data and methods. OOP is designed to increase the modularity and reusability of code by structuring it around objects, which represent real-world entities with attributes (data) and behaviors (methods). It also supports several principles, such as encapsulation, inheritance, polymorphism, and abstraction, making the code more organized and easier to manage.

In programming, a paradigm is a style or approach to problem-solving and structuring code. Different paradigms provide different ways to think about organizing and executing code.

1. Class
A class is a blueprint or template that defines the attributes (data) and behaviors (methods) that objects created from the class will have. It doesn't represent an actual entity by itself but rather a general structure that describes how something should look and behave.

Example: Imagine a blueprint for building a house. The blueprint defines features like the number of rooms, layout, and dimensions, but it’s not a real house on its own.
In programming, a class is defined by specifying the properties (attributes) and functions (methods) that characterize an entity.

2. Object
An object is an instance of a class. It represents a specific, tangible example of the class, with its own unique values for the attributes defined by the class.

Example: If a class is a blueprint for a house, then an object is an actual house built from that blueprint. Each house (object) built from the blueprint (class) may have different details like address or color, but they all follow the same structure defined by the blueprint.

******************************************************************/

#include <bits/stdc++.h>
using namespace std;
class Person{
	// Access specifier
	public:

	// Data Members
	string name;

	// Member Functions()
	void printname(){
	   cout << "Person name is: " << name;
	}
};

int main() {

	// Declare an object of class Person
	Person obj1;

	// accessing data member
	obj1.name = "Thanos";

	// accessing member function
	obj1.printname();
	return 0;
}
