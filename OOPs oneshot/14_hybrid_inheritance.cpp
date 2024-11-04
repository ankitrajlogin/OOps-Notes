/*
Hybrid Inheritance: The inheritance in which the derivation of a class involves more than one form of any inheritance is called hybrid inheritance. Basically C++ hybrid inheritance is combination of two or more types of inheritance. It can also be called multi path inheritance.
*/

#include <iostream>
using namespace std;

class A
{
 	public:
 	  int x;
};
class B : public A
{
 	public:
	  //constructor to initialize x in base class A
 	  B()      
 	  {
 	     x = 10;
 	  }
};
class C
 {
 	public:
 	  int y;
	  
	  //constructor to initialize y
 	  C()   
 	  {
 	      y = 4;
          }
};

//D is derived from class B and class C
class D : public B, public C   
{
 	public:
 	  void sum()
 	  {
 	      cout << "Sum = " << x + y;
 	  }
};

int main()
{	
	//object of derived class D
        D obj1;          
 	obj1.sum();
 	return 0;
}               	