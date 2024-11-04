
/*
Virtual functions and pure virtual functions are essential concepts in object-oriented programming, particularly in C++. They both play a significant role in achieving polymorphism, but they differ in their definitions, usage, and implications.

Virtual Functions
A virtual function is a member function in a base class that can be overridden in derived classes. It is declared using the virtual keyword in the base class. The key characteristics of virtual functions include:

Implementation: Virtual functions can have a complete implementation in the base class. This means that the base class can provide a default behavior that derived classes can choose to override.

Instantiability: Classes containing virtual functions can be instantiated. You can create objects of the base class and use them directly.

Behavior: When a virtual function is called on a base class pointer or reference that points to a derived class object, the derived class’s implementation of the function will be executed. This is due to dynamic binding, which allows C++ to determine the correct function to call at runtime.

Use Case: Virtual functions are used when the base class provides a common implementation that might be enhanced or changed by derived classes. They allow for flexible and extensible designs.

Pure Virtual Functions
A pure virtual function is a special type of virtual function that does not have an implementation in the base class. It is declared using the virtual keyword followed by = 0. The essential characteristics of pure virtual functions include:

No Implementation: Pure virtual functions do not have a body in the base class. They must be overridden by derived classes, which means that the base class does not provide any default behavior.

Instantiation: Classes that contain at least one pure virtual function are considered abstract classes and cannot be instantiated. This means you cannot create objects of the abstract class directly.

Enforcement of Implementation: By declaring a function as pure virtual, you enforce that any derived class must provide its implementation of that function. This establishes a contract for derived classes, ensuring they implement specific behavior.

Use Case: Pure virtual functions are used when you want to define an interface that derived classes must implement. They are particularly useful in designing frameworks or when you want to ensure that certain functionalities are present in all derived classes.

Summary of Differences
In summary, the primary difference between virtual functions and pure virtual functions lies in their implementation and purpose. Virtual functions can have a defined behavior in the base class and allow for object instantiation, while pure virtual functions do not have a defined behavior in the base class, resulting in an abstract class that cannot be instantiated. Virtual functions provide flexibility for derived classes, whereas pure virtual functions impose strict requirements for derived class implementations. Understanding these differences helps developers design robust and maintainable class hierarchies in C++.
*/