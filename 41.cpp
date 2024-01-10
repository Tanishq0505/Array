Longest subarray with zero sum gfg &code studio
// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.
// Example 1:
// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with sum 0 will be -2 2 -8 1 7.

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    // https://youtu.be/Bne92MpRieE?list=PLvg-AaxR3aaYV8mYu0nxOtOITCMPrju_l
    // see video to understand 
        // Q41 in notes 
    {   
        // Your code here
          int len = 0;
        int sum = 0;
        
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        for(int i = 0; i<n ; i++){
            sum += A[i];
            
            if(mp.find(sum) != mp.end()){
                len = max(len , (i - mp[sum]));
            }
            else{
                mp[sum] = i;
            }
        }
        return len;
    }
};
