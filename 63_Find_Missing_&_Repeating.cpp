// Find Missing And Repeating gfg

// Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers.

// Example 1:

// Input:
// N = 2
// Arr[] = {2, 2}
// Output: 2 1
// Explanation: Repeating number is 2 and
// smallest positive missing number is 1.

// https://youtu.be/ncvJHz_gffI
// see from 15 min
// Q63 in array notes

class Solution{
public:

    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>ans(2);
        for(int i=0;i<n;i++){
            arr[i]--;
        }
        for(int i=0;i<n;i++){
            arr[arr[i]%n]+=n;
        }
        for(int i=0;i<n;i++){
            if(arr[i]/n==2){
                ans[0]=i+1;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]/n==0){
                ans[1]=i+1;
            }
        }
        return ans;
    }
};
