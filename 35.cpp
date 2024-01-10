// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying at most one element. Code studio and 665 leetcode  
https://leetcode.com/problems/non-decreasing-array/ 
See code directly from code studio and leet code 
// Example 1:
// Input: nums = [4,2,3]
// Output: true
// Explanation: You could modify the first 4 to 1 to get a non-decreasing array.
// Example 2:
// Input: nums = [4,2,1]
// Output: false
// Explanation: You cannot get a non-decreasing array by modifying at most one element.
class Solution {
public:

// https://youtu.be/aAiyN7GjHaU
// see video to understand 
// Q35 in notes 
    bool checkPossibility(vector<int>& nums) {
       int modified = 0;
        for (int i = 1; i < nums.size(); i++) 
        {    
            if (nums[i - 1] > nums[i]) 
            {
                modified++;
                if (modified > 1) return false;
                if (i < 2 || nums[i - 2] <= nums[i]) nums[i - 1] = nums[i];
                else nums[i] = nums[i - 1];
            }
        } 
        return true;   
    }
};
