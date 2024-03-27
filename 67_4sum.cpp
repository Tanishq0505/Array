)18. 4Sum Leetcode 

// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that: 

// Example 1: 
// Input: nums = [1,0,-1,0,-2,2], target = 0 
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]] 

// https://youtu.be/eD95WRfh81c 
// prefer optimal solution to see  
// Q67 in notes 

class Solution {
public:
// https://youtu.be/eD95WRfh81c
// prefer optimal solution to see 
// Q67 in notes 
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n = nums.size(); //size of the array
    vector<vector<int>> ans;

    // sort the given array:
    sort(nums.begin(), nums.end());

    //calculating the quadruplets:
    for (int i = 0; i < n; i++) {
        // avoid the duplicates while moving i:
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            // avoid the duplicates while moving j:
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            // 2 pointers:
            int k = j + 1;
            int l = n - 1;
            while (k < l) {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++; l--;

                    //skip the duplicates:
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                }
                else if (sum < target) k++;
                else l--;
            }
        }
    }

    return ans; 
    }
};
