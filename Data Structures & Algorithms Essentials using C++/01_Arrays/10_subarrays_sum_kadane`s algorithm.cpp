#include <iostream>


//-------------O(n)-------------------
//----------best solution------------- 

int maximum_subarray_sum(int arr[], int n)
{
    int current_sum = 0;
    int largest_sum = 0;

    for(int i = 0; i< n;i++){
        current_sum += arr[i];
        if(current_sum < 0){current_sum = 0;}

        largest_sum = std::max(largest_sum, current_sum);
    }
    return largest_sum;
}


int main()
{
    int array[] = {-1, 4, 5, -12, 8, 4, 2};
    int n = sizeof(array) / sizeof(int);

    maximum_subarray_sum(array, n);

    return 0;
}