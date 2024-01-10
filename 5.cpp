// C++ Swap Alternate elements in the array
// Sample Input 1:
// 9 3 6 12 4 32
// Sample Output 1 :
// 3 9 12 6 32 4

#include <iostream>
using namespace std;

void doswapping(int a[], int i)
{

    int temp = a[i];
    a[i] = a[i + 1];
    a[i + 1] = temp;
}
void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            doswapping(arr, i);
        }
    }
}
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapAlternate(even, 8);
    printArray(even, 8);

    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}