
/*
The four pillars of Object-Oriented Programming (OOP) are **Encapsulation**, **Abstraction**, **Inheritance**, and **Polymorphism**. These principles form the foundation of OOP and help in creating modular, reusable, and maintainable code.

### 1. **Encapsulation**
Encapsulation is the concept of bundling data (variables) and methods (functions) that operate on the data into a single unit, known as a class. It also involves restricting direct access to some of an object's components, which is a means of preventing accidental interference and misuse of the data. The primary purpose of encapsulation is to protect the internal state of the object from unintended or unauthorized access.

- **Example**: Think of a class as a capsule that contains data and functions. Access to this data is controlled through public methods (getters and setters).

```cpp
class BankAccount {
private:
    double balance;  // Private data

public:
    void deposit(double amount) {  // Public method
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};
```

- **Pros**:
  - Improves security by controlling access to data.
  - Enhances code maintainability by providing a controlled interface.
  - Prevents unintended changes to data.
  
- **Related Term**: **Data Hiding** - Encapsulation allows hiding the internal implementation details of a class, exposing only what is necessary for external interaction.

### 2. **Abstraction**
Abstraction is the process of hiding the complex implementation details of a system and exposing only the essential features. It focuses on defining what an object does, rather than how it does it. Abstraction is achieved through abstract classes and interfaces.

- **Example**: Consider an abstract class `Shape` with a pure virtual function `draw()`. Different shapes (e.g., Circle, Rectangle) will implement the `draw()` function in their specific way, but the user only needs to interact with the `Shape` interface.

```cpp
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};
```

- **Pros**:
  - Reduces complexity by hiding details.
  - Provides a clear separation between interface and implementation.
  - Improves code readability and reusability.
  
- **Related Term**: **Abstract Class** - A class that cannot be instantiated and is meant to be inherited, providing an abstract interface for derived classes.

### 3. **Inheritance**
Inheritance is the mechanism by which one class (called a derived or child class) can inherit properties and behaviors (fields and methods) from another class (called a base or parent class). This allows for code reuse and the creation of a hierarchical relationship between classes.

- **Example**: A class `Dog` can inherit from a class `Animal`, meaning that `Dog` inherits attributes like `age` and `methods` like `speak()` from `Animal`.

```cpp
class Animal {
public:
    void speak() {
        cout << "Animal speaking" << endl;
    }
};

class Dog : public Animal {
    // Inherits the speak method
};
```

- **Pros**:
  - Promotes code reusability by allowing derived classes to reuse existing code.
  - Supports the concept of hierarchical classifications.
  - Makes code easier to maintain and extend.
  
- **Related Term**: **Base Class and Derived Class** - The base class is the class being inherited from, and the derived class is the class that inherits the base class's properties and behaviors.

### 4. **Polymorphism**
Polymorphism is the ability of a function, object, or operator to take on many forms. It allows the same interface to be used for different types. There are two types of polymorphism:
   - **Compile-time Polymorphism** (or static binding) - Achieved through function overloading and operator overloading.
   - **Runtime Polymorphism** (or dynamic binding) - Achieved through virtual functions and inheritance.

- **Example**: A base class pointer can refer to an object of a derived class, and the appropriate method is called based on the actual object type at runtime.

```cpp
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaking" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barking" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->speak();  // Output: Dog barking
}
```

- **Pros**:
  - Provides flexibility in code by allowing objects of different types to be treated uniformly.
  - Supports extensibility, making it easier to add new classes and methods without changing existing code.
  
- **Related Term**: **Virtual Function** - A function declared in the base class that can be overridden in derived classes, enabling runtime polymorphism.

### Summary of the Four Pillars:

1. **Encapsulation**: Hides internal data and provides controlled access to it.
2. **Abstraction**: Hides implementation details and exposes only the essential features.
3. **Inheritance**: Enables one class to inherit properties and behavior from another class.
4. **Polymorphism**: Allows methods and objects to behave differently based on the context, enhancing flexibility and extensibility.
*/

