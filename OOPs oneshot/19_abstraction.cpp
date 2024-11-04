
/*
Abstraction is another key principle of Object-Oriented Programming (OOP). It involves hiding complex implementation details and exposing only the essential features or functionalities of an object to the user. Abstraction focuses on what an object does rather than how it does it, allowing users to interact with a simplified interface without needing to understand the intricate workings behind it.

Key Points of Abstraction
1. Focus on Essentials: Abstraction shows only relevant data and methods to the user and hides unnecessary details.
2. Simplicity: By providing a simplified interface, abstraction helps reduce complexity.
3. Security: Abstraction can prevent access to implementation details that are not relevant to the end user, thus protecting the code.

Example of Abstraction in C++
Let’s consider a simple example where we use abstraction to define a Shape base class. The base class has a pure virtual function area() that each derived class (e.g., Circle, Rectangle) must implement, each in its own way.
*/

#include <iostream>
using namespace std;

class implementAbstraction {
private:
   int a, b;

public:
   // method to set values of
   // private members
   void set(int x, int y)
   {
	a = x;
	b = y;
   }

   void display()
   {
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
   }
};

int main()
{
	implementAbstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}

