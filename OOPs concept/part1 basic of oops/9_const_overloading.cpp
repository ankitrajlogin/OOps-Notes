
/*
A parameterized constructor is a type of constructor in C++ that accepts arguments to initialize an object with specific values. Unlike the default constructor, which takes no parameters, a parameterized constructor allows you to pass data to the object at the time of creation.


*****************************************************************

Constructor Overloading : It is common to have multiple constructors in a class (constructor overloading), where each constructor takes a different number or type of parameters. This allows objects to be initialized in different ways.
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

        void show(){
            cout << name << " " << height << " " << weight << endl; 
        }
    
}; 

int main(){
    Hero obj1 ; 
    obj1.show() ;  // all three garbage value ; 

    Hero obj2("ankit") ; 
    obj2.show() ;   

    Hero obj3("ankit" , 43) ; 
    obj3.show() ; 

    Hero obj4(32 , 43) ; 
    obj4.show() ;  // we can also make differnce by changing parameter  count as well as type. 
   
    Hero obj5("ankit" , 43 , 23) ;   
    obj5.show() ;  // all three correct value ;
}




/*
Conclusion: A parameterized constructor is a powerful tool in C++ for initializing objects with specific values. It provides flexibility and control over the initialization process, making it possible to create objects with different states directly at the time of their creation.
*/