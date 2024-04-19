#include<iostream>

/*----------Binary search algorithm--------------
	defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half.
	The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N).
-----------BigO notation - O(log N)-----------------
----Conditions for Binary search algorithm:
		The data structure must be sorted.
		Access to any element of the data structure takes constant time.
*/

int binary_search(int array[], int n, int key) {
	int start = 0;
	int end = n - 1;

	while (start <= end)
	{
		int middle = (start + end) / 2;
		// Check if key is present at mid
		if (array[middle] == key) {
			return middle;
		}// If key greater, ignore left half
		else if (array[middle] > key) {
			end = middle - 1;
		}// If key is smaller, ignore right half
		else if (array[middle] < key) {
			start = middle + 1;
		}
	}
	//Out of the loop - the desired search is not found
	return -1;
}


int main() {
	int array[] = { 10,20,30,45,60,70,80,90 };
	int n = sizeof(array) / sizeof(int);

	int key{};
	std::cout << "Enter search element: ";
	std::cin >> key;

	int index = binary_search(array, n, key);

	if (index != -1) {
		std::cout << key << " is present at index " << index << std::endl;
	}
	else {
		std::cout << key << " is NOT found " << std::endl;
	}

}