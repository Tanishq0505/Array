Minimum increment to make an array unique Code studio and 945 leetcode and gfg 
You are given an integer array nums. In one move, you can pick an index i where 0 <= i < nums.length and increment nums[i] by 1.
Return the minimum number of moves to make every value in nums unique.
// https://leetcode.com/problems/minimum-increment-to-make-array-unique/ 
See code directly from code studio leetcode gfg not done on vs code 
// Example 1: 
// Input: nums = [1,2,2] 
// Output: 1 
// Explanation: After 1 move, the array could be [1, 2, 3]. 

// Example 2: 
// Input: nums = [3,2,1,2,1,7] 
// Output: 6 
// Explanation: After 6 moves, the array could be [3, 4, 1, 2, 5, 7]. 
// It can be shown with 5 or less moves that it is impossible for the array to have all unique values. 
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        	    // https://youtu.be/oYylRN1ffEE
// see video to understand
// Q37 in notes
	// Write your code here.
	     int ans = 0;
        sort(nums.begin(),nums.end());
        
        for(int i=1; i<nums.size(); i++) {
               int diff = nums[i-1]-nums[i];
            if(nums[i-1] >= nums[i]) {
             
                ans += diff+1;
                nums[i] = nums[i]+diff+1;
            }
        }
        
        return ans;
    }
};
