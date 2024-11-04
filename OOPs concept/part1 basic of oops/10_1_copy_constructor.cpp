
/*

Copy Constructor :- 

A copy constructor in C++ is a special type of constructor that is used to create a new object as a copy of an existing object. It is called when a new object is created from an existing object, either by passing the object to a function by value, returning an object from a function, or explicitly creating a copy of an object.


***************************
Note : 
why we can't call copy constructor by pass by value  ?

The reason you cannot directly call a copy constructor by passing an object by value is due to a concept called "infinite recursion."

Detailed Explanation:
When you pass an object by value to a function, C++ needs to create a copy of the object to pass it to the function. The process of creating this copy requires invoking the copy constructor. If the copy constructor itself tries to take the object as a pass-by-value parameter, the compiler would need to create a copy of that object to pass it into the copy constructor. This process would require another call to the copy constructor, leading to infinite recursion, and ultimately, the program will fail to compile.

Why This Happens:
Pass-by-Value Requires a Copy: When an object is passed by value, C++ needs to create a copy of that object in order to pass it to the function.

Copy Constructor Creates a Copy: To create this copy, the copy constructor is called.

If the Copy Constructor Takes Pass-by-Value: If the copy constructor itself takes its parameter by value, C++ needs to create a copy of the object being passed. To create this copy, it would need to call the copy constructor again, which again tries to pass the object by value, and so on.

This leads to an endless chain of copy constructor calls, creating infinite recursion, which would make the program impossible to execute.

******************************************************
Correct Approach: Pass by Reference :
To avoid this problem, the copy constructor in C++ takes its parameter as a reference to the object, rather than by value. This way, the object is not copied when it's passed to the copy constructor, and infinite recursion is prevented.

*/

#include<iostream>

using namespace std ;

class Hero{
    private : 
        string name ; 
        int height ; 
        int weight ; 


    public :
        Hero(){
            cout << "basic constructor" << endl ; 
        }

        

        Hero(string name){
            this->name = name ; 
        }

        Hero(string name , int height){
            this->name = name ;
            this->height = height ; 
        }

        Hero(int height , int weight){
            this->height = height ; 
            this->weight = weight ; 
        }

        Hero(string name , int height , int weight){
            this->name = name ; 
            this->height = height ; 
            this->weight = weight ; 
        }

        // making our own copy constructor ; 
        Hero(Hero& val){
            this->name = val.name ; 
            this->height = val.height ; 
            this->weight = val.weight ; 
        }

        void setname(string name){
            this->name = name ; 
        }

        void show(){
            cout << name << " " << height << " " << weight << endl; 
        }
    
}; 

int main(){
    Hero Suresh(23 , 53) ; 

    Hero Ankit(Suresh) ; // copy constructor ; 
    Suresh.setname("suresh") ; 

    Suresh.show() ;  // suresh 23 53

    Ankit.show() ;   // 23 53 --> garbage value for the name ; 

    return 0 ;
}



