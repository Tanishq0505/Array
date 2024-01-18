//  Find the Duplicate Number 287 Leet code
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2

// https://youtu.be/32Ll35mhWg0
// Q59 in notes
// see directly from leet code

class Solution {
public:

    int findDuplicate(vector<int>& nums) {
      int slow = 0;
        int fast = 0;
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;   
    }
};

// 2 Loops brute force  TC:O(n^2)  SC:O(1)
    // public static int findDuplicate_2loops(int[] nums) {
    //     int len = nums.length;
    //     for (int i = 0; i < len; i++) {
    //         for (int j = i + 1; j < len; j++) {
    //             if (nums[i] == nums[j]) {
    //                 return nums[i];
    //             }
    //         }
    //     }
  //     return len;
    // }

    // Count TC:O(n)  SC:O(n) With extra O(n) space, without modifying the input
// public static int findDuplicate(int[] nums) {
//         int len = nums.length;
//         int[] cnt = new int[len + 1];
//         for (int i = 0; i < len; i++) {
//             cnt[nums[i]]++;
//             if (cnt[nums[i]] > 1) {
    //             return nums[i];
    //         }
    //     }

    //     return len;
    // }

// Hash  TC:O(n)  SC:O(n) With extra O(n) space, without modifying the input.

//  public static int findDuplicate_set(int[] nums) {
//         Set<Integer> set = new HashSet<>();
//         int len = nums.length;
//         for (int i = 0; i < len; i++) {
//             if (!set.add(nums[i])) {
//                 return nums[i];
//             }
//         }

//         return len;
//     }

  

