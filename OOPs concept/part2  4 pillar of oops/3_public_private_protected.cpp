/*

|--------------------------------------------------------------------------------------------------------------|
|                                        Visiblity of Inherited Members                                        |
| ------------------------|------------------------------------------------------------------------------------|
| Base class visibility	  |           Derived class visibility                                                 |
| ------------------------|------------------------------------------------------------------------------------|
|                         |                           |                             |                          |
|                         |       Public	          |           Private	        |        Protected         |
|                         |     Inheritance           |         Inheritance         |       Inheritance        |
| ------------------------|---------------------------|-----------------------------|--------------------------|
| private	              |       Not Inherited       |   	      Not Inherited	    |        Not Inherited     |
| ------------------------|---------------------------|-----------------------------|--------------------------|
| protected	              |       Protected	          |           Private	        |        Protected         |
| ------------------------|---------------------------|-----------------------------|--------------------------|
| public	              |       Public	          |           Private	        |        Protected         |
|-------------------------|---------------------------|--------------------------------------------------------|
 

****************************************************************************

1. Public Access Specifier

Description: 
Members declared as public are accessible from anywhere in the program. Any function, whether inside or outside the class, can access public members.

Inheritance Behavior:
When a class inherits from a base class using public inheritance, all public members of the base class remain public in the derived class.

****************************************************************************

2. Private Access Specifier

Description: 
Members declared as private can only be accessed within the same class. They are not accessible from outside the class, including derived classes.

Inheritance Behavior:
When a class inherits from a base class, private members of the base class are not accessible directly in the derived class, even if the inheritance is public. However, the derived class can still access private members through public or protected methods of the base class.

****************************************************************************

3. Protected Access Specifier

Description: 
Members declared as protected can be accessed within the same class and by derived classes, but not from outside the class hierarchy.

Inheritance Behavior:
When a class inherits from a base class using public or protected inheritance, protected members of the base class become protected in the derived class.
If inheritance is private, protected members of the base class become private in the derived class.


****************************************************************************

*/

#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

class PublicDerived : public Base {
    // publicVar is public
    // protectedVar is protected
    // privateVar is not accessible
};

class ProtectedDerived : protected Base {
    // publicVar is protected
    // protectedVar is protected
    // privateVar is not accessible
};

class PrivateDerived : private Base {
    // publicVar is private
    // protectedVar is private
    // privateVar is not accessible
};


int main(){
    
}