//  532. K-diff Pairs in an Array gfg&Leetcode

// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

// Example 1:
// Input: nums = [3,1,4,1,5], k = 2
// Output: 2

// Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
// Although we have two 1s in the input, we should only return the number of unique pairs.

// // https://youtu.be/Kum2Vc4abwo

//     // Q66 in array notes

class Solution {
    // https://youtu.be/Kum2Vc4abwo
    // Q66 in array notes 
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        for(int i:nums)
            a[i]++;
        int ans=0;
        for(auto x:a)
        {
            if(k==0)
            {    
                if(x.second>1)
                ans++;
            }
             else if(a.find(x.first+k)!=a.end())
                ans++;
        }
        
        return ans;
    }
};
