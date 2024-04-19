#include<iostream>

/*----------Linear search algorithm--------------
		Searching algorithm to find the index of element in a given array
		Every element is considered as a potential match for the key and checked for the same.
		If any element is found equal to the key, the search is successful and the index of that element is returned.
	 -----------brute force technique----------------
	 -----------BigO notation - O(n)-----------------
	 
	 ---Advantages of Linear Search:
		Linear search can be used irrespective of whether the array is sorted or not. It can be used on arrays of any data type.
		Does not require any additional memory.
		It is a well-suited algorithm for small datasets.

	----When to use Linear Search?
		When we are dealing with a small dataset.
		When you are searching for a dataset stored in contiguous memory.
*/

int leanear_search(int array[], int n, int key) {
	for (int i = 0; i < n; i++)
	{
		//Check if the current element matches the key
		if (array[i] == key) {
			return i;
		}
	}
	//Out of the loop - the desired search is not found
	return -1;
}

int main() {
	int array[] = { 1,34,65,3,7,8,23,45 };
	int n = sizeof(array) / sizeof(int);
	int key{};

	std::cout << "Enter search element: ";
	std::cin >> key;

	int index = leanear_search(array, n, key);

	if (index != -1) {
		std::cout << key << " is present at index " << index << std::endl;
	}
	else {
		std::cout << key << " is NOT found " << std::endl;
	}
}