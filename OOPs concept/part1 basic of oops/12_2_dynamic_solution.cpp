#include<iostream>
#include<cstring> // Include cstring for strcpy

using namespace std; 

class Myclass1 {
public: 
    char data[100]; 

    void setdata(const char val[]) {
        strcpy(this->data, val); 
    }

    void show() {
        cout << data << endl; 
    } 
};

int main() {
   
    Myclass1* d3 = new Myclass1(); 
    d3->setdata("shayam"); 

    Myclass1* d4 = new Myclass1(); 
    *d4 = *d3; // Copy the content from d3 to d4

    d3->show(); // Outputs "shayam"
    d4->show(); // Outputs "shayam" (copy of d3)

    d3->setdata("rawat"); // Change data in d3

    d3->show(); // Outputs "rawat"
    d4->show(); // Outputs "shayam" (d4 remains unchanged)

    // Free the memory allocated for d3 and d4
    delete d3;
    delete d4;

    return 0;
}
