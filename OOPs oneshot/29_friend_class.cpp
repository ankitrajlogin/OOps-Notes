/*
A friend class in C++ is a class that is given access to the private and protected members of another class. By declaring one class as a friend of another, the friend class can access the private data members and methods of the other class, which is not typically allowed in C++ due to encapsulation principles.

Key Points about Friend Class:
Access Control: The friend class can access private and protected members of the class that declared it as a friend, enabling tighter integration and collaboration between the two classes.

Declaration: A class is declared as a friend within another class using the friend keyword. This declaration can be made inside the class definition.

Not Inherited: Friend status is not inherited. If class A declares class B as a friend, class B will not have access to class A's members if it derives from class A.

Encapsulation: While friend classes break encapsulation to some extent, they can be useful in scenarios where two or more classes need to work closely together.

Multiple Friend Classes: A class can have multiple friend classes, allowing various classes to have access to its private and protected members.
*/

#include<iostream>
using namespace std;

class A{
   int x;
   public:
			
    A(){
       x=10;
    }
    friend class B; //friend class
};

class B{
    public:
      void display(A &t){
	 cout<<endl<<"The value of x="<<t.x;
      }
};

int main(){
	A a;
	B b;
    
	b.display(a);
	return 0;
}