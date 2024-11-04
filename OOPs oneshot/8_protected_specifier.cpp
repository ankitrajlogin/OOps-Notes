
#include <bits/stdc++.h>
using namespace std;


class Base{
    private : 
        int a ; 
    protected : 
        int b ; 
    
    public:
        int c ; 

    Base(){
        a = 1; 
        b = 2 ; 
        c = 3; 
    }
}; 

class Derived : public Base {
public:
    void show() {
        // cout << a << endl; 
        cout << b << endl; 
        cout << c << endl; 
    }
};



int main(){
    Derived derivedObj ; 

    derivedObj.show() ; 

    cout << derivedObj.c << endl; 

    // Hence. 
    // protected specifier can used by derived class but can't outside the class. 
    

return 0 ;
}