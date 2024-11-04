/*
In C++, the assignment operator (=) is used to assign the value of one object to another object of the same type. It is an operator that allows you to copy the contents of one object into another. By default, the compiler provides a shallow copy implementation of the assignment operator, which means it copies the values of the object's data members from one object to another.

Default Assignment Operator
When you don't define an assignment operator, C++ provides a default implementation that performs a shallow copy of the object’s data members. This can be problematic when an object manages dynamic resources (e.g., memory allocated with new), as it can lead to issues like double deletion and memory corruption, similar to the copy constructor problem.

Custom Assignment Operator
In cases where your class allocates dynamic memory or other resources, you should define a custom assignment operator to handle the deep copy of these resources. This ensures that each object manages its own resources independently.

*/


#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 


class Myclass1{
    public : 
        char data[100] ;


        // Changed the setdata method parameter from char[] to const char[]: This allows you to pass string literals safely without modifying them.
        void setdata(const char val[]){
            strcpy(this->data , val) ; 
        }


        void show(){
            cout << data << endl; 
        } 


};




int main(){
    Myclass1 d1 ; 
    
    d1.setdata("ankit") ; 

    Myclass1 d2 ; 
    d2.setdata("rahul") ; 
    
    d2.show() ; 

    d2 = d1 ; 

    d1.show() ; 
    d2.show() ; 


    cout <<endl <<  "creating dynamic pointer" <<endl; 
    // Problem : 
    Myclass1* d3 = new Myclass1() ; 
    d3->setdata("shayam") ; 

    Myclass1* d4 = new Myclass1() ; 
    d4 = d3 ; // Problem: d4 now points to the same memory as d3

    d3->show(); // Outputs "shayam"
    d4->show(); // Outputs "shayam" (since d4 points to d3)

    d3->setdata("rawat") ;  // Changes data in the object that both d3 and d4 point to

    d3->show(); // Outputs "rawat"
    d4->show(); // Outputs "rawat" (d4 points to the same object as d3) 




}

