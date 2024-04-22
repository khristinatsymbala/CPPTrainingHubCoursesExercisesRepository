#include <iostream>
//----------Reverce array algorithm--------------

//-----------BigO notation - O(n)-----------------
// Problem : Reverce all the elements of a given array
void reverseArray(int array[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        std::swap(array[start], array[end]);
        start += 1;
        end -= 1;
    }
}

int main()
{

    int array[] = {10, 20, 30, 40, 56, 78, 89};
    int n = sizeof(array) / sizeof(int);
    reverseArray(array, n);

    // Print output
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " " << std::endl;
    }
}