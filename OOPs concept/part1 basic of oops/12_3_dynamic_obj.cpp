
#include<bits/stdc++.h>

using namespace std  ; 

class Myclass{
    public:

        char* data ; 

        Myclass(char* str){
            data = new char[strlen(str) +1] ; 

            strcpy(data , str) ; 


        }

        Myclass(const Myclass& other){
            data = new char[strlen(other.data) + 1] ;
            strcpy(data , other.data) ;

        }

        Myclass operator = (const Myclass & other){
            if(this == &other){
                return *this ; 
            }

            data = new char[strlen(other.data) + 1] ; 
            strcpy(data , other.data) ; 

        }

        void display(){
            cout << data << endl ;
        }
}; 


int main(){
    Myclass obj1("hello") ; 
    Myclass obj2("world") ; 

    obj2 = obj1 ; 

    obj1.display() ;  // hello ; 
    obj2.display() ;  // hello ; 

    return 0 ; 
}


