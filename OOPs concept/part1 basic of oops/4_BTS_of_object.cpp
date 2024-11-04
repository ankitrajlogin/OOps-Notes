/*
Padding in a class refers to extra bytes inserted by the compiler between data members of a class or structure to align them in memory. This alignment is necessary because most processors access data more efficiently when it's aligned to specific boundaries, such as 2, 4, or 8 bytes. Padding ensures that data members are stored in a way that allows for optimal memory access.

Why Padding Happens:
Memory Alignment: Processors are optimized to access data at specific boundaries (e.g., 4-byte, 8-byte). If a data member isn't aligned to these boundaries, accessing it might require multiple memory accesses instead of one, reducing performance.
Data Alignment Constraints: Each data type typically has an alignment requirement, depending on the architecture of the system. For example, a 4-byte integer might need to be aligned on a 4-byte boundary, and an 8-byte double might need to be aligned on an 8-byte boundary.
*/

#include <iostream>

using namespace std ; 

class Example {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
};

class Example2{
    int a ;   // 4 byte
    double b ;   // 8 byte 
    int c  ;   // 8 byte
};


/*
How to Avoid or Minimize Padding ? 
Rearrange Data Members: One way to reduce padding is to group members with the same alignment requirements together. For example, placing all larger members (like int or double) before smaller members (like char) can minimize padding.
*/

class OptimizedExample{
    double d ;  // 8 byte ;
    int a ;   // 4 byte
    char b ;  // 1 byte
    char c ;  // 1 byte
};


int main() {
    Example obj;
    cout << "Size of class: " << sizeof(obj) << " bytes" << std::endl;

    Example2 obj2;
    cout << "Size of class: " << sizeof(obj2) << " bytes" << std::endl;


    OptimizedExample o1 ; 
    cout << "Size of class: " << sizeof(o1) << " bytes" << std::endl;
    // its output either be 14 or 16 depends on compiler ; 



    return 0;
}

/* 
Related Terms:
Memory Alignment: The process of arranging data in memory according to the processor's alignment requirements to optimize access and performance.

Struct Packing: A technique used to eliminate padding by forcing the compiler to align members in memory with minimal padding. However, this can lead to performance degradation.

Byte Alignment: The alignment of data in memory to specific byte boundaries (e.g., 4-byte, 8-byte) to match the processor's word size or cache line size.

Padding: Padding is the extra space added between data members to ensure proper alignment.

Greedy Alignment is a memory alignment strategy used to optimize the layout of data structures, specifically for minimizing padding and maximizing data locality. This technique arranges data members in a way that reduces the amount of wasted space due to alignment requirements.

 */