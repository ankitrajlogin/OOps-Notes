
/*
In C++, the this keyword is a special pointer that points to the current object of a class. It is used within member functions to refer to the object on which the function is being called. Understanding the this keyword is crucial for managing object state and implementing certain features in object-oriented programming.

Note : this->prop is same as *(this).prop ; 

1. * --> dereferencing operator ; 

Characteristics of this Keyword
1. Pointer to Current Object: this is a pointer to the instance of the class on which the member function is operating.
2. Implicitly Available: It is automatically available in all non-static member functions of a class.
3. Read-Only: The this pointer itself cannot be modified; it always points to the current object.

*/

#include<iostream>
using namespace std ; 

class MyClass {
private:
    int value;
    int data ; 
public:
    void setValue(int value) {
        // this->value = value;

        // also write as 
        (*this).value = value  ;
        // Return the current object
    }
    
    void showValue(){
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyClass obj;
    obj.setValue(34) ; 

    obj.showValue() ; 

    


    return 0;
}
