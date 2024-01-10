// Check if Array Is Sorted and Rotated Leet code
// Given an array nums,return true if the array was originally sorted in non - decreasing
// order, then rotated some number of positions(including zero).Otherwise, return false.
// There may be duplicates in the original array.
//  Example 1 :
// Input : nums = [ 3, 4, 5, 1, 2 ] Output : true Explanation : [ 1, 2, 3, 4, 5 ] is
//  the original sorted array.You can rotate the array by x = 3 positions to begin on the the
//   element of value 3 : [ 3, 4, 5, 1, 2 ].

// Example 2 :
// Input : nums = [ 2, 1, 3, 4 ]
// Output : false Explanation : There is no sorted array once rotated that can make nums.
#include <iostream>
using namespace std;
// https://youtu.be/Z7_nMTHROZo?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
int main()
{
    int nums[50];
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter the elements of array" << endl;

    for (int w = 0; w < n; w++)
    {
        cin >> nums[w];
    }
    cout << "Printing  array " << endl;
    for (int y = 0; y < n; y++)
    {
        cout << nums[y] << " " << endl;
    }
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            cnt++;
        }
    }
    if (nums[n - 1] > nums[0])
    {
        cnt++;
    }
    if (cnt <= 1)
    {
        cout << "True";
    }
    else
    {
        cout << "False ";
    }
}