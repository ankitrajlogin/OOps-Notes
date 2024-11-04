
// function overloading 

#include<bits/stdc++.h>
using namespace std ; 

class Complex{
    public:
        int real ;
        int img ; 

        Complex(){
            cout << "constructor call" << endl; 
        }

        Complex(int real , int img){
            this->real = real; 
            this->img = img ; 
        }

        void operator +(Complex& obj){
            this->real = this->real + obj.real ; 
            this->real = this->real + obj.real ; 
        }


        void display(){
            cout << real << "+i" << img << endl; 
        }
};


int main(){
    cout << "Welcome" << endl; 

    Complex c1(2 , 3) ; 
    c1.display() ; 

    Complex c2 = c1 ; 
    c2.display() ; 

    c1+c2 ; 

    c1.display() ;
    c2.display() ; 





    return 0 ; 
}