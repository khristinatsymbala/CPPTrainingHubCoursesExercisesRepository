#include<iostream>
#include<ctime>
using namespace std;

/*----------Insertion Sort  algorithm--------------
		Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.
        It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.
        works by building a sorted array one element at a time. It is considered an “in-place” sorting algorithm, meaning it doesn’t require any additional memory space beyond the original array.

	 -----------BigO notation - O(n^2)-----------------
	 
	 ---To achieve insertion sort, follow these steps:
        - We have to start with second element of the array as first element in the array is assumed to be sorted.
        - Compare second element with the first element and check if the second element is smaller then swap them.
        - Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.
        - Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.
        - Repeat until the entire array is sorted.
*/



//Sort the elements in increasing order 
void insertionSort(int arr[], int n){
    for(int i=1; i<n-1; i++){

        int current = arr[i];

        int previous = i-1;

        while(previous>=0 && arr[previous]> current){
            arr[previous + 1] = arr[previous];
            previous = previous-1;
        }

        arr[previous+1] = current;
    }

}
	

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}


int main(){
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);
	

	insertionSort(arr,n);
    cout << "Sorted array: \n";
	printArray(arr,n);

	return 0;
}