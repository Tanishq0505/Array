// Factorials of large numbers
// Given an integer N, find its factorial. return a list of integers denoting the
// digits that make up the factorial of N.
// Input: N = 10
// Output: 3628800
// Explanation :
// 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

// Time Complexity : O(N^2)
// Expected Auxilliary Space : O(1)
  // Qn Link                      : https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1#
// Q42 in notes
// https://youtu.be/O3fwYjcMV_M
// See code directly from gfg 

class Solution {
public:
void multiply(vector<int>& nums, int &size, int &multiplier) {
        int carry = 0;
    
        for(int i = 0; i<size; i++) {
            int result = (multiplier*nums[i])+carry;
    
            nums[i]   = result%10;
    
            carry     = result/10;
        }
    
        while(carry) {
            nums[size] = carry%10;
            size++;
            carry /= 10;
        }
    }
    vector<int> factorial(int N){
        // code here
          vector<int> nums(10000, 0);
        nums[0] = 1;
        int size = 1;
        int fact = N;
    
    
        for(int multiplier = 2; multiplier<=fact; multiplier++)
            multiply(nums, size, multiplier);
        
        vector<int> result;
        for(int i = size-1; i>=0 ; i--)
            result.push_back(nums[i]);
        return result;
        
    }
};
