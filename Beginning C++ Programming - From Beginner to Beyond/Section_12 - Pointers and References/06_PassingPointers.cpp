
/*
Section 12

Passing Pointers to a function
- Pass-by-reference with pointer parameters
- We can use pointers and the dereference operator to achieve pass-by-reference
- The function parameter is a pointer
- The actual parameter can be a pointer or address of a variable


*/

#include <iostream>

using namespace std;

// Pass-by-reference with pointers - defining the function
void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

int main()
{
    int value{10};
    int *int_ptr{nullptr};

    cout << "Value: " << value << endl;
    // Pass-by-reference with pointers - calling the function
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "-----------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout << endl;
    return 0;
}