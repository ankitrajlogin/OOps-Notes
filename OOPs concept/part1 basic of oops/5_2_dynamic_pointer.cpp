#include <iostream>
#include<cstring>
using namespace std;

class Student {
    public:
        int* value;  // Pointer to store the value
        char* str ; 

        // Constructor to initialize the pointer
        Student() {
            value = new int;  // Allocate memory for the integer
            str = new char[50] ; 
        }

        // Destructor to free allocated memory
        ~Student() {
            delete value;
            delete[] str ; 
        }

        void setValue(int val) {
            *(this->value) = val;  // Dereference the pointer and assign the value
        }

        void setstr(char str[]){
            strcpy(this->str , str) ;
        }

        void getValue() {
            cout << "Value: " << *(this->value) << endl;  // Dereference the pointer to get the value
        }

        void getstr() {
            cout << "String: " << this->str << endl;  // Print the string
        }
};

int main() {
    Student s;

    s.setValue(23);  // Set the value to 23
    s.getValue();    // Get and display the value

    s.setstr("Hello , World") ; 
    s.getstr() ; 

    return 0;
}
