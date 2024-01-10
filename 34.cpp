// Given an integer array nums, rotate the array to the left by k steps, where k is non-negative. 
 // Code studio  
// See code directly from code studio

// 'arr '= [1,2,3,4,5]
// 'k' = 1  rotated array = [2,3,4,5,1]
// 'k' = 2  rotated array = [3,4,5,1,2]
// 'k' = 3  rotated array = [4,5,1,2,3] and so on.

// Its Time Complexity is slightly higher than the
// previous brute force i.e O(2n) But in terms of Space
//  Complexity it is only O(1), as no extra space is used.

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    // https://youtu.be/wvcQg43_V8U
    // see this video to understand
    int n = arr.size();

    reverse(arr.begin(),arr.begin()+k);

    reverse(arr.begin()+k,arr.end());

    reverse(arr.begin(),arr.end());

    return arr;

}
