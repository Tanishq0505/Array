// Find pivot index  Code studio and 724 leetcode and gfg 
https://leetcode.com/problems/find-pivot-index/description 
See code directly from code studio leetcode gfg not done on vs code 
// Example 1: 
// Input: nums = [1,7,3,6,5,6] 
// Output: 3 
// Explanation: 
// The pivot index is 3. 
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11 
// Right sum = nums[4] + nums[5] = 5 + 6 = 11 

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
            // https://youtu.be/Sw4nUFc-tfA
         // see this video to understand 
    // Q36 in notes 
    int sum = 0 ;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        sum += nums[i];
    }
    int n = nums.size();

    int left =  0;
    int right = sum;
    for(int i = 0 ; i < n ; i++)
    {
        right = right - nums[i];
        if(left == right) return i;
        left = left + nums[i];
    }

    return  -1;
    }
};
