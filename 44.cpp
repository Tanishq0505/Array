// Maximum Product Subarray
// 152  Maximum Product Subarray Leetcode
// Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

// Example 1:

// Input:
// N = 5
// Arr[] = {6, -3, -10, 0, 2}
// Output: 180
// Explanation: Subarray with maximum product
// is [6, -3, -10] which gives product as 180.

class Solution{
public:
// https://youtu.be/hnswaLJvr6g
// Q44 in notes 
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	      long pre = 1;
        long suff =1;
        
        long ans =INT_MIN;
        
        for(int i=0;i<n;i++){
            if(pre == 0){
                pre =1;
            }
            
            if(suff == 0){
                suff =1;
            }
            
            pre = pre * arr[i];
            suff = suff * arr[n-i-1];
            ans = max(ans , max(pre , suff));
        }
        return ans;
	}
};
