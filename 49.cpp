// Chocolate Distribution Problem   gfg
// Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
// 1. Each student gets exactly one packet.
// 2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

// Example 1:
// Input:
// N = 8, M = 5
// A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: 6
// Explanation: The minimum difference between maximum chocolates and minimum chocolates is 9 - 3 = 6 by choosing following M packets :{3, 4, 9, 7, 9}.

// https://youtu.be/50nn3bA1BT4
// Q49 in notes
// see directly from gfg

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
            sort(a.begin(), a.end());
        long ans = INT_MAX;
        for(int i = 0; i + m - 1 < n; i++)
        {
            int minw=a[i];
            int maxw=a[i + m - 1];
            int difference =  maxw-minw ; 
            if(difference < ans)
                ans = difference;
        }
        return ans;

    
    }   
};
