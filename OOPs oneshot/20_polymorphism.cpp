
/*
Polymorphism is one of the foundational principles of Object-Oriented Programming (OOP). It enables a single interface to represent different underlying forms (types). In other words, polymorphism allows objects of different classes to be treated as objects of a common base class. This is especially useful for writing flexible and reusable code.


There are 2 types of Polymorphism:

1. Compile time Polymorphism
2. Run time Polymorphism


Compile time Polymorphism:
--------------------------- 
Compile-time polymorphism is a polymorphism that is, the function call is resolved during the compilation process.
We can achieve Compile-time polymorphism by two ways:

i. Function overloading
When there are multiple functions with the same name but take different parameters as an arguments then these function are said to be overloaded.
Functions can be overloaded by changing the number of arguments or and changing the type of arguments.

ii. Operator Overloading: 
C++ also provides the option to overload operators So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them.


Run time Polymorphism
---------------------
Run-Time Polymorphism, also known as Dynamic Polymorphism, is a type of polymorphism where the function to be invoked is determined at runtime. This approach is essential in Object-Oriented Programming (OOP) for situations where objects of different classes need to respond to the same function call in their unique way. Run-time polymorphism primarily uses virtual functions and inheritance.

Summary of Run-Time Polymorphism
-----------------------------------
Feature	                    Description
Method Used              	Virtual functions and method overriding
Resolution Time	            Run time
Inheritance Required	     Yes
Example Techniques	         Function overriding, virtual functions
Usage	                     Common in frameworks, GUI systems, game engines, etc.



Steps to Achieve Run-Time Polymorphism
1. Declare a Virtual Function in the Base Class: Mark the function in the base class as virtual. This enables dynamic binding, allowing derived classes to override this function.

2. Override the Virtual Function in Derived Classes: Provide specific implementations of the virtual function in derived classes.

3. Use a Base Class Pointer or Reference: When calling the virtual function, use a base class pointer or reference to point to the derived class object. This way, the function call is resolved at runtime based on the actual object type, not the pointer type.


*/
