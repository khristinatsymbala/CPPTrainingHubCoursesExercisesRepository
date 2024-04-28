#include<iostream>
#include<ctime>
using namespace std;

/*----------Bubble sort algorithm--------------
		Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable f
		for large data sets as its average and worst-case time complexity is quite high.
	
	 -----------BigO notation - O(n^2)-----------------
	 
	 ---In Bubble Sort algorithm:
		Traverse from left and compare adjacent elements and the higher one is placed at right side. 
		In this way, the largest element is moved to the rightmost end at first. 
		This process is then continued to find the second largest and place it and so on until the data is sorted.

*/

// An optimized version of Bubble Sort
bool compare(int a,int b){
	return a > b;
}

//Sort the elements in increasing order 
void bubble_sort(int a[],int n){
	// One pass of bubble sort. After 
    // this pass, the largest element 
    // is moved (or bubbled) to end. 
	for(int times=1;times<=n-1;times++){
		//repeated swapping
		for(int j=0; j <= n - times - 1; j++ ){
			if(compare(a[j],a[j+1])){
				swap(a[j],a[j+1]);
			}
		}

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
	

	bubble_sort(arr,n);
    cout << "Sorted array: \n";
	printArray(arr,n);

	return 0;
}