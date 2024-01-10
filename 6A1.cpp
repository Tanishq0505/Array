// 75. Sort Colors (LEET CODE) / Sort an array of 0s, 1s and 2s  ( GFG)
// Example 1:
// Input:
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated  into ascending order.

// easy see code to understand
//  approach of TC O(n^2)
#include <iostream>
using namespace std;

void sort012(int a[], int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            count0++;
        if (a[i] == 1)
            count1++;
        if (a[i] == 2)
            count2++;
    }

    for (int i = 0; i < count0; i++)
        a[i] = 0;

    for (int i = count0; i < count1 + count0; i++)
        a[i] = 1;

    for (int i = count1 + count0; i < n; i++)
        a[i] = 2;
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
    int arr[] = {0, 2, 1, 2, 0};
    int N = 5;
    sort012(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
