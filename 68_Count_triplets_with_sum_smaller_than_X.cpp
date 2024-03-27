// Count triplets with sum smaller than X gfg

// Given an array arr[] of distinct integers of size N and a value sum, the task is to find the count of triplets (i, j, k), having (i<j<k) with the sum of (arr[i] + arr[j] + arr[k]) smaller than the given value sum.

// Example 1: Input: N = 4, sum = 2
// arr[] = {-2, 0, 1, 3}
// Output:  2
// Explanation: Below are triplets with  sum less than 2 (-2, 0, 1) and (-2, 0, 3).

// 	https://youtu.be/YvFtZRjmR0M
// Q68 in array notes

class Solution{
	
// 	https://youtu.be/YvFtZRjmR0M
// Q68 in array notes 
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    
	      long long cnt=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                long long s=arr[i]+arr[j]+arr[k];
                if(s<sum)
                {   
                    cnt+=(k-j);
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return cnt;
	}
		 

};
