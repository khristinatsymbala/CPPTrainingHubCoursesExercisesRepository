// Section 12
// Pointer Arithmetic
//https://www.geeksforgeeks.org/cpp-pointer-arithmetic/

/*
Following are the arithmetic operations valid on pointers in C++:

 - Incrementing and Decrementing Pointers
 - Addition of Constant to Pointers
 - Subtraction of Constant from Pointers
 - Subtraction of Two Pointers of the Same Type
 - Comparison of Pointers

 Incrementing and Decrementing Pointers
  - (++) Increments a pointer to point to the next array element
  - (--) Decrements a pointer to point to the previous array element

  - (+)  Increment a pointer by n*sizeof(type)
    int_ptr +=n; 
  - (-) Decrement a pointer by n*sizeof(type)
    int_ptr -=n; 
 
*/

#include <iostream>

using namespace std;

int main() {
    
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr {scores};
    
    //print array
    while (*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    cout << "\n-------------------------" << endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        cout << *score_ptr++ << endl;
        
    cout << "\n-------------------------" << endl;
//Determine if two pointers point to the same location 
// does NOT compare the data where they point!!
//you must compare the referenced pointers
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};		
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha; // to show true or false
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;		// false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;		// true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;		// true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// true
    
    p3 = &s3;   // point to James
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// false
    

    cout << "\n-------------------------" << endl;
    char name[]  {"Frank"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2{nullptr};
    
    char_ptr1 = &name[0];   // F
    char_ptr2 = &name[3];   // n

    cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1  << endl; 
    
    cout << endl;
    return 0;
}

