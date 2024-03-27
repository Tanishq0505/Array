// 64)169. Majority Element gfg&Leetcode

// Given an array nums of size n, return the majority element

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// https://youtu.be/ncvJHz_gffI
//  seee from 1 hour 5 min
// Q64 in array notes

class Solution{
    // https://youtu.be/ncvJHz_gffI
//  seee from 1 hour 5 min
// Q64 in array notes 
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
          int count = 0;

        int candidate;
        
        for (int i=0;i<size;i++) {
            if (count == 0) {
                count=1;
                candidate = a[i];
            }
            else{
            if (a[i] == candidate) 
                count++;
            else 
                count--;
            }
        }
        count=0;
         for (int i=0;i<size;i++)
              if (a[i] == candidate) 
                count++;
         if(count>size/2)
        return candidate;
        else
        return -1;
        
    }
};
