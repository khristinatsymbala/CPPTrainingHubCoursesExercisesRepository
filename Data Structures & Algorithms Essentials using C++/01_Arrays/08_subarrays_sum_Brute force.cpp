#include <iostream>

// Subarray is small part of array
// Problem : Print all subarrays of a given array
void printSubarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                std::cout << arr[k] << ",";
            }
            std::cout << std::endl;
        }
    }
}

// Print the sum of each subarray & find out the largest

int main()
{
    int array[] = {10, 20, 30, 40, 56, 78, 89};
    int n = sizeof(array) / sizeof(int);

    printSubarrays(array, n);

    return 0;
}