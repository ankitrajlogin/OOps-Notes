/*
Function overloading
When there are multiple functions with the same name but take different parameters as an arguments then these function are said to be overloaded.
Functions can be overloaded by changing the number of arguments or and changing the type of arguments.
*/

#include<bits/stdc++.h>
using namespace std;

class Simple
{
  public :
    void fun()
    {
        cout<<"function with no argument"<<endl;
    }

    void fun(int x)
    {
        cout <<"function with int argument"<<endl;
    }
    void fun(double x)
    {
        cout<<"function with double argument"<<endl;
    }
};

int main()
{
    Simple obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.5);
    return 0;
}