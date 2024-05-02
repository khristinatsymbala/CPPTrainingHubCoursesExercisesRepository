#include<iostream>
#include <string>
using namespace std;
//Dereferencing operator *

/* An interesting property of pointers is tha they can be used to access the variable they point to directly.
This is done by preceding the pointer name with the dereferencing operator(*).
The operator itself can be read as "value pointed to by"
*/

//*address => bucket(data)

int main(){

	string food = "Pizza";  // Variable declaration
	string* ptr = &food;    // Pointer declaration

	// Reference: Output the memory address of food with the pointer (0x6dfed4)
	cout << ptr << "\n";

	// Dereference: Output the value of food with the pointer (Pizza)
	cout << *ptr << "\n";


	// int x = 10;
	// int &y = x;

	// y++; 

	// cout << x <<endl;
	// cout << y <<endl;

	return 0;
}