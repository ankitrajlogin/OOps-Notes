

/*
A memory leak occurs when a program allocates memory dynamically (usually using operations like new in C++ or malloc in C) but fails to deallocate it properly. As a result, the allocated memory becomes inaccessible but still occupies space in the heap, leading to inefficient memory usage and potentially causing the program to run out of memory.
 

************************************

Related term : 

Dangling Pointers: Pointers that reference memory that has already been deallocated, leading to undefined behavior.
 */

#include <stdio.h>
#include <stdlib.h>

void memoryLeakExample() {
    char* str = (char*)malloc(100 * sizeof(char)); // Dynamically allocated memory
    // Forgot to free memory
}

int main() {
    memoryLeakExample();
    // Memory allocated in memoryLeakExample is never released
    return 0;
}
