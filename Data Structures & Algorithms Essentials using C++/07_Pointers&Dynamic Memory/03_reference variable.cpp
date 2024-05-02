#include<iostream>
using namespace std;
//Reference variable &
/*
Pass object by Reference: 
	- Pointers
	- Reference variable
*/

int main(){

	int x = 10;
	int &y = x; 

	y++; 
	x++;

	cout << x <<endl;
	cout << y <<endl;




	return 0;
}