// Find Pivot element in array

#include <iostream>
using namespace std;
// time span 0:00 -16:58
// https://youtu.be/6z2HK4o8qcU?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}