// Subarray with zero sum gfg
// Given an array of integers. Find if there is a subarray (of size at-least one) with 0 sum.
//  You just need to return true/false depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the driver code.
// See code directly from gfg 
// Example 1:

// Input:
// n = 5
// arr = {4,2,-3,1,6}
// Output:
// Yes
// Explanation:
// 2, -3, 1 is the subarray with sum 0.


class Solution{
    // https://youtu.be/QtbFXZrEZYc
    // Q43 in notes
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
          unordered_map<int, int> m;
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum = sum + arr[i];
            if(sum == 0 || m[sum] || arr[i] == 0){
                return true;
            }else{
                m[sum] = 1;
            }
        }
        return false;
    }
};
