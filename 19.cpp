// Merge the two sorted array
// Ex arr1={2,5,7,8};//sorted array 1
// arr2={1,3,6}; //sorted array 2
// arr3={1,2,3,5,6,7,8} //sorted array after merging two sorted array

// https://youtu.be/MPvr-LmaZmA?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, k = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // copy first array k elements ko
    while (i <= n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    // copy kardo second array k remainig elements ko
    while (j <= m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << "";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}