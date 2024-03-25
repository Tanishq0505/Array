// 60)Value equal to index value   gfg

// Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).

// Example 1:

// Input:
// N = 5
// Arr[] = {15, 2, 45, 12, 7}
// Output: 2
// Explanation: Only Arr[2] = 2 exists here.

// https://youtu.be/WrDo9DitoxI
// Q60 in array notes


//User function template for C++
class Solution{
public:
	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	            vector<int> ans;
	     for(int i=0; i<n; i++){
            if(arr[i]==i+1){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
	
};

