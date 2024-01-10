// 75. Sort Colors (LEET CODE) / Sort an array of 0s, 1s and 2s  ( GFG)
// Example 1:
// Input:
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated  into ascending order.

// easy see code to understand
//  optimal approach of TC O(n)

class Solution {
public:
// https://youtu.be/2C4CQ32961Y
// see video to understand
// Q6A2 in notes 
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
