#include<iostream>
using namespace std;

//Address of operator - & 


int main(){

	int x = 10;
	float y = 5.5;

	cout << &x <<endl; // give as address of

	//cout<< &y <<endl;

	//Demo Pointer
	//Pointers - a variale that holds the address of another variable

	int *xptr = &x; //assign address of x to xptr

	cout << xptr <<endl;

	//Address of a Pointer Variable
	cout << &xptr <<endl;

	//Pointer to a Pointer
	int ** xxptr = &xptr;

	cout << xxptr <<endl;


	return 0;
}