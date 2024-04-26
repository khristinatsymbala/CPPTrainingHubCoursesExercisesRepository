#include <iostream>

// Subarray is small part of array
// Problem : find out the largest sum of subarrays
// Brute force approach O(N^3) - in kube
int largestSumSubarrays(int arr[], int n)
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

int main()
{
    int array[] = {-1, 4, 5, -12, 8, 4, 2};
    int n = sizeof(array) / sizeof(int);

    largestSumSubarrays(array, n);

    return 0;
}