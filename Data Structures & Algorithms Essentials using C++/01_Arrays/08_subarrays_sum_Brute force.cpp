#include <iostream>

// Subarray is small part of array
// Problem : Print all subarrays of a given array
int printSubarrays(int arr[], int n)
{
    // 02_
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subbarraySum = 0;
            // 01_add new variable to store a current result
            for (int k = i; k <= j; k++)
            {
                subbarraySum += arr[k];
            }
            // cheak is current sum of array > largestsum(previous result)
            largestSum = std::max(largestSum, subbarraySum);
        }
    }
    return largestSum;
}

// find out the largest

int main()
{
    int array[] = {-1, 4, 5, -12, 8, 4, 2};
    int n = sizeof(array) / sizeof(int);

    printSubarrays(array, n);

    return 0;
}