/*
In C++, the assignment operator (=) is used to assign the value of one object to another object of the same type. It is an operator that allows you to copy the contents of one object into another. By default, the compiler provides a shallow copy implementation of the assignment operator, which means it copies the values of the object's data members from one object to another.

Default Assignment Operator
When you don't define an assignment operator, C++ provides a default implementation that performs a shallow copy of the object’s data members. This can be problematic when an object manages dynamic resources (e.g., memory allocated with new), as it can lead to issues like double deletion and memory corruption, similar to the copy constructor problem.

Custom Assignment Operator
In cases where your class allocates dynamic memory or other resources, you should define a custom assignment operator to handle the deep copy of these resources. This ensures that each object manages its own resources independently.

*/

#include<iostream>
using namespace std ; 

class MyClass{
    public:
        int value ; 
        string name ; 

        MyClass(){
            value = 0 ; 
        }

        MyClass(int val){
            value = val ; 
        }

        MyClass operator+(MyClass & other){
            this->value = this->value + other.value ; 
        }

        void show(){
            cout << "name is : " << name <<  "value is : " << value << endl; 
        }
        
}; 


int main(){
    MyClass obj1(10) ; 
    MyClass obj2(20) ; 
    

    obj1+obj2 ;  // value of obj1 + obj2  is stored in obj1 ; 

    obj1.show() ;
    obj2.show() ; 


    MyClass obj3(15) ; 
    MyClass obj4(25) ; 

    obj4 + obj3 ;  // value of obj4 + obj3 is stored in obj4 ; 

    obj3.show() ; 
    obj4.show() ;  



}