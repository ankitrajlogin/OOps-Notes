
/*
Static Members in a Class:
Static Member Variables: A static member variable is shared among all objects of a class. It belongs to the class itself, rather than any individual object. All objects share the same instance of the static member variable.
Static Member Functions: A static member function can be called without creating an instance of the class. It can access only static member variables and other static member functions.


*/

#include<bits/stdc++.h>

using namespace std ; 

class Myclass{
    public:

    static int staticvar ; 
    int count = 0 ; 

    static void staticFunction(){
        cout << "Staticval value : " << staticvar << endl; 
    }

    void display(){
        cout << "count: " << count << endl; 
    }
}; 



int main(){
    Myclass::staticvar = 10 ; 

    Myclass::staticFunction() ;

    // undefined reference to `Myclass::staticvar' collect2.exe: error: ld returned 1 exit status
    

    
    


    return 0 ; 


}

/*
Static variables in a class: As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static variables in a class are shared by the objects. There can not be multiple copies of the same static variables for different objects. Also because of this reason static variables can not be initialized using constructors. 


*************************************************************************

undefined reference to `GfG::i'
collect2: error: ld returned 1 exit status
You can see in the above program that we have tried to create multiple copies of the static variable i for multiple objects. But this didn’t happen. So, a static variable inside a class should be initialized explicitly by the user using the class name and scope resolution operator outside the class as shown in next lecture. 



*/