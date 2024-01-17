//  Palindromic Array   gfg
// Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.
// Example 1:
// Input:
// 5
// 111 222 333 444 555
// Output:
// 1
// Explanation:
// A[0] = 111 //which is a palindrome number.
// A[1] = 222 //which is a palindrome number.
// A[2] = 333 //which is a palindrome number.
// A[3] = 444 //which is a palindrome number.
// A[4] = 555 //which is a palindrome number.
// As all numbers are palindrome so This will return 1.

// https://youtu.be/-YIjwvZuJkY
// Q53 in notes
// see directly from gfg

class Solution {
public:

    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i = 0;i<n;i++){
        int num = 0;
    int temp = a[i];
    
    while(temp>0){
        
        int k = temp%10;
        num = num*10 + k;
        temp = temp/10;
    }
    
    if(num != a[i]){
        return 0;
    }
    	}
      return 1; 
    }
};
