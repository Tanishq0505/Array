// Minimize the Heights II (GFG) 
// Given an array arr[] denoting heights of N towers and a positive integer K. 
// For each tower, you must perform exactly one of the following operations exactly once. 
// Increase the height of the tower by K 
// Decrease the height of the tower by K 
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower 
// Example 1: 

// Input: 
// K = 2, N = 4 
// Arr[] = {1, 5, 8, 10} 
// Output: 
// 5 
// Explanation: 
// The array can be modified as  
// {1+k, 5-k, 8-k, 10-k} = {3, 3, 6, 8}.  
// The difference between  
// the largest and the smallest is 8-3 = 5. 
// The idea for this is given below:
// The idea is to increase the first i towers by k and decrease the rest tower by k after sorting the heights, then calculate the maximum height difference.
// This can be achieved using sorting.
// Illustration:
// Given arr[] = {1, 15, 10}, n = 3, k = 6
// Array after sorting => arr[] = {1, 10, 15}
// Initially maxHeight = arr[n – 1] = 15
//             minHeight = arr[0] = 1
//             ans = maxHeight – minHeight = 15 – 1 = 14
// At i = 1

// minHeight = min(arr[0] + k, arr[i] – k) = min(1 + 6, 10 – 6) = 4
// maxHeight = max(arr[i – 1] + k, arr[n – 1] – k) = max(1 + 6, 15 – 6) = 9
// ans = min(ans, maxHeight – minHeight) = min(14, 9 – 4) = 5 => ans = 5
// At i = 2
// minHeight = min(arr[0] + k, arr[i] – k) = min(1 + 6, 15 – 6) = 7
// maxHeight = max(arr[i – 1] + k, arr[n – 1] – k) = max(10 + 6, 15 – 6) = 16
// ans = min(ans, maxHeight – minHeight) = min(5, 16 – 7) = 5 => ans = 5
// Hence minimum difference is 5

// Follow the steps below to solve the given problem:
// Sort the array
// Try to make each height of the tower maximum by decreasing the height of all the towers to the right by k and increasing all the height of the towers to the left by k. Check whether the current 
// index tower has the maximum height or not by comparing it with a[n]-k. If the tower’s height is greater than the a[n]-k then it’s the tallest tower available.
// Similarly, find the shortest tower and minimize the difference between these two towers.

Code

class Solution {
  // https://youtu.be/Av7vSnPSCtw
// see video and you can see copy also
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
       sort (arr, arr+n);

int dif =arr[n-1] -arr[0];
int amin = arr[0];
    int amax = arr[n - 1];

for(int i=1; i<n; i++){
amax = max(arr[i - 1] + k, arr[n - 1] - k);
amin= min(arr[0] + k, arr[i] - k);
if(amin<0)
continue;
dif=min(dif, (amax-amin));

}

return dif;

    }
};
