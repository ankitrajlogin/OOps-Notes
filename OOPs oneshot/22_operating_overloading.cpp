/*
Operator Overloading: C++ also provides the option to overload operators So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them.
*/

#include<iostream>
using namespace std;

class Complex {
private:
   int real, imag;
public:
   Complex(int r = 0, int i = 0) {real = r; imag = i;}
	
   // This is automatically called when '+' is used with
   // between two Complex objects
   Complex operator + (Complex const &obj) {
	   Complex res;
	   res.real = real + obj.real;
	   res.imag = imag + obj.imag;
	   return res;
   }

//    Complex& operator+(const Complex& other) {
//         this->real += other.real;  // Update the real part
//         this->imag += other.imag;  // Update the imaginary part
//         return *this;               // Return the updated object
//     }
// c1 + c2 --> assign value in c1 ; 


    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();

}