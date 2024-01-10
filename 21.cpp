// Leet code
// Move zeroes to the right
// Given an integer array nums, move all 0's to the end of it while maintaining the
// relative order of the non-zero elements.
// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// https://youtu.be/MPvr-LmaZmA?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// do dry run to understand better
#include <iostream>
using namespace std;
int nonzero = 0;
int main()
{
    int nums[50];
    int m;
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
    for (int j = 0; j < m; j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[nonzero]);
            nonzero++;
        }
    }
    for (int j = 0; j < m; j++)
    {
        cout << nums[j];
    }
    return 0;
}