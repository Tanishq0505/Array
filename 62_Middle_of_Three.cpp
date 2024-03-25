// Middle of Three gfg

// Given three distinct numbers A, B and C. Find the number with value in middle (Try to do it with minimum comparisons).

// Example 1:

// Input:
// A = 978, B = 518, C = 300
// Output:
// 518
// Explanation:
// Since 518>300 and 518<978, so
// 518 is the middle element.

//   https://youtu.be/9fdSf4t_zKI
// Q62 in array notes


class Solution{
  public:
//   https://youtu.be/9fdSf4t_zKI
// Q62 in array notes 
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        
        if(B < A && A < C || C < A && A < B)
            return A;
        else if(A < B && B < C || C < B && C < A)
            return B;
        else
            return C;
    }
};

