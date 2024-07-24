/*
---------Section 11 -  Arrays and functions ----------------
- We can pas an array to a function by providing square brackets in the formal parameter description
- The array elements are NOT copied
- Since the array name evaluates to the location of the array in memory - this is what is copied
- So the func has no idea how many elements are in the array since all it knows is the location of the first element(the name of the array)

*/
#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(const int arr[], size_t size) {  // const
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
   // arr[0] = 50000; // bug
}

// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[] {100, 98, 90, 86, 84};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    print_array(my_scores, 5);
    
    cout << endl;
    return 0;
}

