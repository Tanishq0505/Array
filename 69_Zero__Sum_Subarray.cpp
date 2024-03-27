// Zero Sum Subarrays gfg
// You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.

// Example 1:
// Input:
// n = 6
// arr[] = {0,0,5,5,0,0}
// Output: 6
// Explanation: The 6 subarrays are  // [0], [0], [0], [0], [0,0], and [0,0].

// https://youtu.be/HJWiQP5Kl-Q
// Q69 in array notes

class Solution{
    // https://youtu.be/HJWiQP5Kl-Q
    // Q69 in array notes 
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
          long long int count=0,sum=0;
        map<long long int,long long int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()) count+=mp[sum];
            mp[sum]++;
        }
        return count;
    }
};
