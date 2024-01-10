// Find the number of occurrences of element in a sorted array
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [2] as 8 comes 2 time in a given array

#include <iostream>
using namespace std;
// time span 5:14-16:00
// https : // youtu.be/zD2Jg3alZV8?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[5] = {1, 2, 3, 3, 5};
    int f = firstOcc(even, 5, 3);
    int l = lastOcc(even, 5, 3);
    int o = l - f + 1;
    cout << "First ocurence is at index " << f << endl;
    cout << "Last ocurence is at index " << l << endl;
    cout << "The no of occurences of key is " << o << endl;
}