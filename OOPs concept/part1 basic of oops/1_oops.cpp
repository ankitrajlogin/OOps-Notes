
/** 

Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects," which can contain data in the form of fields (often known as attributes or properties) and code in the form of procedures (often known as methods). It emphasizes the use of objects and classes to structure and manage code, making it easier to design, implement, and maintain complex software systems.


What is a Class and an Object in OOP?
Class:
A class is a blueprint or template for creating objects. It defines a set of properties (attributes) and methods (functions) that the created objects can have. A class doesn't hold data itself but rather describes how the objects (instances) created from it should look and behave.

Object:
An object is an instance of a class. Once a class is defined, you can create objects from it. Objects are the actual implementation of the class and hold specific data and functionality defined by the class.

*/


/*
Memory Alignment and Padding:

Sometimes, the compiler might add some extra bytes called padding to ensure proper alignment of the data members. This is done to meet hardware alignment requirements, but in this specific example, no additional padding is needed because the data members already align properly.
*/

#include<iostream>


using namespace std ; 


class Hero{
    char name[100] ; 
    int health ; 
    char level ; 

    
};



/*
The size of an object of EmptyClass is typically 1 byte, even though it has no data members. This is because every object must have a unique address in memory, and the compiler allocates at least 1 byte to ensure that.
*/

class EmptyClass{

}; 

int main(){

    Hero h1 ; 
    cout << "size of Hero class object: " << sizeof(h1) << endl;  // size: 104 

    EmptyClass e1 ;
    cout << "size of empty class object: " << sizeof(e1) << endl;  // size: 1
}