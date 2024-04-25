#include <iostream>

// Subarray is small part of array
// Problem : Print sum subarrays by Prefix 
//-------------O(n^2)-------------------

int printSubarrays(int arr[], int n)
{
    // Prefix sums
    //if error put a numers in n, or use vectors
    int prefix[n] = {};
    prefix[0] = arr[0];

    for (int i = 1;i<n;i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }

    //largest sum logic
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ///error handler by Ternary Operator
            int subbarraySum = i>0 ? prefix[j] - prefix[i - 1] : prefix[j];
            //cheaker is subarraySum>largest_sum
            largestSum = std::max(largestSum, subbarraySum);
        }
    }
    return largestSum;
}


int main()
{
    int array[] = {-1, 4, 5, -12, 8, 4, 2};
    int n = sizeof(array) / sizeof(int);

    printSubarrays(array, n);

    return 0;
}