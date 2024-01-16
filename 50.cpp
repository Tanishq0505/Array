//  209 Minimum size subarray sum Leet code

// Given an array of positive integers nums and a positive integer target, return the minimal length of a
// Subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
// Example 1:
// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.
// Example 2:
// Input: target = 4, nums = [1,4,4]
// Output: 1
// brute force approach
// https://youtu.be/NKoHjWl2m8Y
// optimal approach
// https://youtu.be/D2MbogiFXWU
// Q50 in notes
// see directly from leetcode

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
          int n = nums.size();
        
        int i = 0, j = 0;
        
        int sum = 0;
        int minL = n+1;
        
        while(j < n) {
            sum += nums[j];
            
            while(sum >= target) {
                minL = min(minL, j-i+1);
                sum -= nums[i];
                i++;
            }
            
            j++;
        }
        return minL == n+1 ? 0 : minL;
    }
};
