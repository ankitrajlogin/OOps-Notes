
/*
In C++ object-oriented programming, an initialization list is a part of the constructor's syntax used to initialize member variables of a class before the constructor’s body executes. It provides a way to directly initialize member variables rather than assigning values within the constructor body.

Key Points About Initialization Lists:

1. Direct Initialization: Initialization lists allow for the direct initialization of member variables, which can be more efficient than default initialization followed by assignment.

2. Initialization Order: Member variables are initialized in the order they are declared in the class, not in the order they appear in the initialization list.

3. Const and Reference Members: Initialization lists are required for const and reference member variables because they must be initialized at the point of declaration.
*/

#include <iostream>

using namespace std ; 

class Test{
    int a ; 
    int b ; 

    public : 
        // Test(int i , int j) : a(i) , b(j) {
        // Test(int i , int j) : a(i) , b(j*2){

        // Test(int i , int j) : a(i) , b(a+b) {

        // Test(int i , int j) : b(j) , a(i){

        // Test(int i , int j) : b(i) , a(i+b){ // this will give garbage value as a should initialize first then b; 

        Test(int i , int j) : a(j) , b(i){
            cout << "initialization list called , a: " << a << " b : " << b << endl; 
        }

        

        Test(int i){
            a = i ; 
        }
};


int main(){
    Test ankit() ;

    Test rahul(12) ; 

    Test shivam(12 , 34) ; 

    return 0 ; 
}

/*
Use of initializationi list : 

Efficiency: Initialization lists allow for direct initialization of member variables, which is typically more efficient than first default-initializing members and then assigning new values in the constructor body. This is because the members are constructed with the desired values right from the start, avoiding potential overhead of default construction followed by assignment.

it is just a simple method to give value to the data member variable ; 
*/