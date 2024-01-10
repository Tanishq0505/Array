// 189 Leet code
// Given an integer array nums, rotate the array to the right by k steps, where k is
//  non-negative.
// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

#include <iostream>
using namespace std;
// https://youtu.be/Z7_nMTHROZo?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
int main()

{
    int nums[50];
    int m;
    int k;
    cout << "Enter the steps by which you want to rotate the array " << endl;
    cin >> k;
    cout << "Enter the size of array" << endl;
    cin >> m;
    cout << "Enter the elements of array" << endl;

    for (int w = 0; w < m; w++)
    {
        cin >> nums[w];
    }
    cout << "Printing  array " << endl;
    for (int y = 0; y < m; y++)
    {
        cout << nums[y] << " " << endl;
    }
    int temp[50];
    for (int i = 0; i < m; i++)
    {
        temp[(i + k) % m] = nums[i];
    }
    for (int j = 0; j < m; j++)
    {
        cout << temp[j];
    }
    return 0;
}
