/*
Friend Function
A friend function is a function that is declared as a friend within a class. This allows the function to access the private and protected members of that class, even though it is not a member of the class. Here are some key points about friend functions:

Declaration: A friend function is declared inside a class using the friend keyword. This declaration gives the function special access rights to the class's private and protected members.

Not a Member: A friend function is not a member of the class; hence it does not have a this pointer. It can be a standalone function or a member of another class.

Access Control: Friend functions can access private and protected data members of the class they are friends with. However, they cannot access the private members of the class unless they are declared as friends.

Usage: Friend functions are often used for operator overloading, where you want to define an operator outside the class but still need access to the class's private members.
*/

#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) : width(w) {}  // Constructor

    // Friend function declaration
    friend void printWidth(Box b);

    friend void area(Box b) ; 
};

// Friend function definition
void printWidth(Box box) {
    // Accessing private member of Box
    cout << "Width of box: " << box.width << endl;
}

void area(Box box){
    cout << "area of the box is :" << box.width*box.width << endl; 
}

int main() {
    Box box(10);
    printWidth(box);  // Calling the friend function

    area(box) ; 
    return 0;
}
