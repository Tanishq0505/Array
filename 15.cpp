// Selection Sort.(Code studio and gfg)
// TC best case-O(n)
// Worst O(n^2)
// Average  O(n^2)
// SC O(1)

// https://youtu.be/UdO2NeHB46c?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// see this video to understand

#include <iostream>
using namespace std;

// Follow the below steps to solve the problem:
// Initialize minimum value(min_idx) to location 0.
// Traverse the array to find the minimum element in the array.
// While traversing if any element smaller than min_idx is found then swap both values.
// Then, increment min_idx to point to the next element.
// Repeat until the array is sorted.

// Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    // One by one move boundary of
    // unsorted subarray
    // Repeat until the array is sorted
    int i, j, min_idx;
    // Our loop of i goes from 0 to n-1 because the loop of j start from j=i+1;
    for (i = 0; i < n - 1; i++)
    {
        // To Find the minimum element in unsorted array ,Initialize minimum value(min_idx) to location 0
        min_idx = i;
        // Now Traverse the array to find the minimum element in the array
        for (j = i + 1; j < n; j++)
        {
            // While traversing if any element smaller than min_idx is found then swap both values.
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Swap the found minimum element
        // with the first element

        swap(&arr[min_idx], &arr[i]);
        // Then, increment min_idx to point to the next element
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}