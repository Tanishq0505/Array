// 238. Product of Array Except Self   gfg(Product array puzzle)&Leetcode

// Given an array nums[] of size n, construct a Product Array P (of same size n) such that P[i] is equal to the product of all the elements of nums except nums[i].

// Example 1:
// Input:
// n = 5
// nums[] = {10, 3, 5, 6, 2}
// Output:
// 180 600 360 300 900

// Explanation:
// For i=0, P[i] = 3*5*6*2 = 180.
// For i=1, P[i] = 10*5*6*2 = 600.
// For i=2, P[i] = 10*3*6*2 = 360.
// For i=3, P[i] = 10*3*5*2 = 300.
// For i=4, P[i] = 10*3*5*6 = 900.

// https://youtu.be/G9zKmhybKBM
// Q70 in array notes

class Solution {
public:
// https://youtu.be/G9zKmhybKBM
// Q70 in array notes 
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> left(nums.size());
        vector<int> right(nums.size());
 left[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            left[i] = left[i-1]*nums[i-1];
        }
 right[nums.size()-1] = 1;
        for(int i = nums.size()-2; i >= 0 ; i--){
            right[i] = right[i+1]*nums[i+1];
        }

        for(int i = 0; i < nums.size() ; i++){
            nums[i] = left[i] * right[i];
        }
        return nums; 
    }
};
