// Insertion Sort (Code studio and gfg)
// TC best case-O(n)
// Average  O(n^2)
// Worst O(n^2)
// SC O(1)

// https: // youtu.be/7kIVfVY6Axk?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// see video to understand
#include <iostream>
using namespace std;
int insertionSort(int arr[], int n)
{

    int i = 1;
    while (i < n)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        i++;
        arr[j + 1] = temp;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
int main()
{
    int arr[5] = {12, 11, 13, 5, 6};
    int n = 5;
    insertionSort(arr, 5);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
