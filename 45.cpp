// // Count More than n/k Occurences
// Given an array arr of size N and an element k. The task is to find the count of elements in the array that appear more than n/k times.

// Example 1:

// Input:
// N = 8
// arr = [3,1,2,2,1,2,3,3]
// k = 4
// Output:
// 2
// Explanation:
// In the given array, 3 and 2 are the only elements that appears more than n/k times.

// https://youtu.be/tzhFg9Jv3yo?list=LL
// Q45 in notes
// see directly from gfg

class Solution
{
    // https://youtu.be/tzhFg9Jv3yo?list=LL
    // Q45 in notes 
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
          unordered_map<int, int> m;
        int x = n/k, count = 0;
        for(int i = 0; i < n; i++){
            m[arr[i]] += 1;
            if(m[arr[i]] > x){
                count += 1;
                m[arr[i]] = -1000;
            }
        }
        
        
        return count;
    }
};
