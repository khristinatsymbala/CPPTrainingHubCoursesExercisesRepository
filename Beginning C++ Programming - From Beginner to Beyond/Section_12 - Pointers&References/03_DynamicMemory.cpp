// Section 12
// Dynamic Memory

/*
In dynamic allocation, the allocation and deallocation of the memory happen at runtime. 
That is, the memory must be allocated or de-allocated by the program all through 
the run-time of a C++ program. So the programmer is required to deallocate the dynamically 
allocated memory which is not in use.

Dynamically allocated memory will continue to be in use until the whole code or program terminates.
So, a programmer needs to deallocate the memory, when it is not required.

The “new" Operator is a unary operator used to dynamically allocate a block of memory and keep 
its address in a pointer variable at some point during the execution of a program

Syntax to use the new operator
 ----- pointer_variable = new data_type;

The "delete" Operator
we use the delete operator and de-allocate the block of memory, that was dynamically allotted with the use of the new operator.

Syntax to apply the delete operator
 ----- delete pointer_variable;

Dynamic Memory Allocation In C++ | Arrays
Syntax
---- pointer_variable = new data_type[size]; - This was the syntax for normal arrays, 
now let's look at the syntax for multidimensional arrays. 

multidimensional array of length m x n,
----- pointer_variable = new data_type[size][size];

deallocation: delete []pointer_variable ;

*/
#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int;               // allocate the int on the heap
    cout << int_ptr << endl;    // use it
    delete int_ptr;                    // release it
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double[size];    // allocate the storage on the heap
    cout << temp_ptr << endl;       // use it
    delete [] temp_ptr;                     // release it
    
    cout << endl;
    return 0;
}

