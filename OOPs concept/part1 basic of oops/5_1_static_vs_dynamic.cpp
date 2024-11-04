/*
Static Object Declaration
--> Static allocation refers to the process of allocating memory at compile time. The memory is allocated for variables or data structures that have a fixed size and are known before the program runs.

--> Static objects are allocated on the stack or data segment (for global and static objects) and their lifetime is managed by the scope in which they are declared.

1. Storage Location: Typically, static allocation uses the stack (for local variables) or the data segment (for global and static variables).

2. Stack Allocation: For local variables (non-static) or directly in the data segment for global/static variables.

3. Lifetime: Automatic for local variables (until the end of their scope) or until the end of the program for global/static variables.

4. Scope: Limited to the block or file in which they are declared.


*************************************************************************************



Dynamic Object Declaration
--> Dynamic allocation refers to the process of allocating memory at runtime. This allows for more flexibility in managing memory, as the amount of memory needed can be determined while the program is running.

--> Dynamic objects are allocated on the heap using memory management operations like new (or malloc in C), and their lifetime is managed explicitly by the programmer.

1. Storage Location: Dynamic allocation uses the heap memory.

2. Heap Allocation: Memory is allocated on the heap.

3. Lifetime: Managed manually by the programmer. The object persists until explicitly deallocated.

4. Scope: Can be accessed from anywhere if you have a pointer or reference to it.

*************************************************************************************

Related Terms : 

Stack: A region of memory used for static memory allocation. It follows the Last In First Out (LIFO) principle.

Heap: A region of memory used for dynamic memory allocation. It allows for flexible allocation and deallocation of memory blocks.

Memory Leak: A situation where allocated memory is not freed, leading to a gradual loss of available memory.

Dangling Pointer: A pointer that continues to reference a memory location after the memory has been deallocated.

*/

#include <iostream>
using namespace std ;

class MyClass {
    public:
        MyClass(){
            cout << "Constructor called !" << endl; 
        }
        ~MyClass(){
            cout << "Destructor called !" << endl; 
        }
};

int main() {

    MyClass obj2 ; 

    // obj is a static local object. It’s constructed once and retains its state between function calls. The destructor is called when the program ends.

    

    MyClass* obj = new MyClass(); // Dynamically allocated object
    delete obj; // Manually deallocate memory

    // obj is a pointer to a dynamically allocated MyClass object. The object is created with new and must be deallocated with delete to avoid memory leaks.


    return 0;
}




