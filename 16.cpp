// Bubble Sort.(Code studio and gfg)
// TC best case-O(n)
// Worst O(n^2)
// Average  O(n^2)
// SC O(1)

// https://youtu.be/zOhUavxlzw4?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// see this video to understand
#include <iostream>
using namespace std;
// Follow the below steps to solve the problem:
// Run a nested for loop to traverse the input array using two variables i and j, such that 0 ≤ i < n-1 and 0 ≤ j < n-i-1
// If arr[j] is greater than arr[j+1] then swap these adjacent elements, else move on
// Print the sorted array

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        // For reason why loop of j goes from j=0 to j=n-i-1 see video
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int N = 7;
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
