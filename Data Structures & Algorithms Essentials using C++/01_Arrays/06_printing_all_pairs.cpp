#include <iostream>

// Prolem : print ALL pairs of element(2 nested loop)
void printAllPairs(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = array[i];

        for (int j = i + 1; j < n; j++)
        {
            int y = array[j];

            std::cout << x << " " << y << std::endl;
        }
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 56, 78, 89};
    int n = sizeof(array) / sizeof(int);

    printAllPairs(array, n);
    return 0;
}