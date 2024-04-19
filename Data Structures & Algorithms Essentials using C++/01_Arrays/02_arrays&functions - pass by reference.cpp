#include<iostream>

//NOTE-----------(int array[]) - pass by reference
void printArray(int array[]) {

	std::cout << "In function " << sizeof(array) << std::endl;

	/*
	Pass by reference means storing pointers
	Pointers typically occupy 8 bytes of memory
	if we have an array and we calculate the number of elements using int n = sizeof(array)/sizeof(int);, it would yield 8 bytes / 4 bytes = 2.
	Therefore, it will show only 2 elements due to this calculation.
	*/

	int n = sizeof(array) / sizeof(int);
	for (int i = 0; i < n; i++)
	{
		std::cout << "In function " << array[i] << std::endl;
	}
}

//NOTE-------- to properly print the array using a function.
void printArrayR(int* array, int n) {

	std::cout << "In printArrayR " << sizeof(array) << std::endl;

	array[0] = 100; // All of them share common memory

	for (int i = 0; i < n; i++)
	{
		std::cout << "printArrayR " << array[i] << std::endl;
	}
}


int main() {

	int array[] = { 1,2,3,4,5,6 };

	/*
	 Array size in bytes: sizeof(array) = 6 * 4 = 24 bytes
	 Size of one integer element: sizeof(int) = 4 bytes
	 Number of elements in the array: sizeof(array) / sizeof(int) = 24 / 4 = 6 elements
	*/

	int n = sizeof(array) / sizeof(int);

	std::cout << "In main " << sizeof(array) << std::endl; // in main 24
	printArray(array); // In function 8 - Pointers typically occupy 8 bytes of memory

	/*
	Works correctly due to the calculation: int n = sizeof(array) / sizeof(int) = 24 / 4 = 6 elements
	*/
	for (int i = 0; i < n; i++)
	{
		std::cout << "In main " << array[i] << std::endl;
	}

	printArrayR(array, n);

	return 0;
}