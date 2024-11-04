
/*
Overloading is a programming concept where multiple functions or operators have the same name but differ in their parameters or types. It helps to perform different tasks with the same function name or operator, improving code readability and reusability.


**************************************************************

Function Overloading: Allows multiple functions to have the same name but different parameter lists (different number or types of parameters). The correct function to call is determined by the arguments passed during the function call.

**************************************************************

Operator Overloading: Allows you to define custom behavior for operators (like +, -, *, etc.) for user-defined types (classes). It enables operators to work with objects of those classes in a way that is similar to built-in types.


*/

// function operloading ;

#include<iostream>

using namespace std ;

void print(int i){
    cout << i << endl; 
}

void print(double d){
    cout << d << endl; 
}

void print(string s){
    cout << s << endl; 
}


int main(){

    
    // Usage:
    print(5);       // Calls print(int)
    print(5.5);     // Calls print(double)
    print("Hello"); // Calls print(string)


}