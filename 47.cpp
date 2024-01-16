//  Triplet Sum in Array   gfg

// Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

// Example 1:

// Input:
// n = 6, X = 13
// arr[] = [1 4 45 6 10 8]
// Output:
// 1
// Explanation:
// The triplet {1, 4, 8} in
// the array sums up to 13.

// Example 2:

// Input:
// n = 5, X = 10
// arr[] = [1 2 4 3 6]
// Output:
// 1
// Explanation:
// The triplet {1, 3, 6} in
// the array sums up to 10.

// https://youtu.be/c7f3wwuwU4k
// see directly from gfg

class Solution{
    public:

    bool find3Numbers(int A[], int n, int X)
    {

      sort(A , A + n );
        int i,second,third;
        for(i=0;i<n-1;i++)
        {
            second=i+1;
            third=n-1;
            while(second<third)
            {
                if(A[i]+A[second]+A[third]==X)
                return 1;
                else if(A[i]+A[second]+A[third]<X)
                second++;
                else
                third--;
            }
        }
        return 0;
    }

};
