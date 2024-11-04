/*
Shallow Copy vs. Deep Copy
Shallow Copy: The default copy constructor performs a shallow copy, where the data members of the object are copied as they are, including pointers. This can lead to issues when both objects share the same memory location, especially when dynamic memory is involved.

Example : 
Person(const Person& other) {
    this->name = other.name;  // Shallow copy: Both objects point to the same memory
}


Deep Copy: A user-defined copy constructor is often used to perform a deep copy. In a deep copy, the dynamically allocated memory is copied, and each object has its own separate copy of the memory.

Example:
Person(const Person& other) {
    this->name = new char[strlen(other.name) + 1];  // Allocate new memory
    strcpy(this->name, other.name);  // Deep copy: Copy the content
}

*/


#include<bits/stdc++.h>
using namespace std ; 

class Hero{
    private:
        int health ;

    public : 
        char *name ; 
        char level ; 

        Hero(){
            cout << "Simple constructor called" << endl;  
            name = new char[100] ; 
        }

        Hero(int health){
            this->health = health ; 
        }

        
       

        void print(){
            cout << "[ Name: " << name << "; health: " << this->health << "; level: " << this->level << " ]" << endl; 
        }

        int getHealth(){
            return health ; 
        }

        char getLevel(){
            return level ; 
        }

        void setHealth(int h){
            health = h; 
        }

        void setLevel(char ch){
            level = ch ; 
        }

        void setName(char name[]){
            strcpy(this->name , name) ; 
        }

};


int main(){
    Hero hero1 ;
    hero1.setHealth(12) ; 
    hero1.setLevel('D') ; 

    char name[7] = "ankit" ;
    hero1.setName(name) ; 

    hero1.print() ; 

    // using default constructor ; 
    Hero hero2(hero1) ; 
    hero2.print() ; 

    char name2[12] = "rahul" ;
    hero2.setName(name2) ; 

    hero2.print() ; 
    hero1.print() ; 



    return 0 ; 
}

/*
The default copy constructor performs a shallow copy, where the data members of the object are copied as they are, including pointers. This can lead to issues when both objects share the same memory location, especially when dynamic memory is involved.*/