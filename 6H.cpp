45 Jump game 11 leetcode/Minimum number of jumps GFG 
// https://youtu.be/a9r98S-pDvk 
// using greedy approch 
Exmple 1 
Input: nums = [2,3,1,1,4] 
Output: 2 
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index. 

#include <iostream>
using namespace std;
// https://youtu.be/a9r98S-pDvk
// using greedy approch
int minJumps(int arr[], int n)
{
    // Your code here

    int curReach = 0;
    int curMax = 0;
    int jumps = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (i + arr[i] > curMax)
        {
            curMax = i + arr[i];
        }
        if (i == curMax)
        {
            return -1;
        }
        if (i == curReach)
        {
            jumps++;
            curReach = curMax;
        }
    }
    return jumps;
}
int main()
{
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing initial array
    cout << "Given array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
    cout << "The jump is is"
         << " " << minJumps(arr, n) << endl;
}
