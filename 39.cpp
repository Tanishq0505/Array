// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and
// negative integers.
// You should rearrange the elements of nums such that the modified array follows the given conditions:
// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

// Example 1:
// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]
// Explanation:
// The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
// The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
// Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.

// Example 2:
// Input: nums = [-1,1]
// Output: [1,-1]
// Explanation:
// 1 is the only positive integer and -1 the only negative integer in nums.
// So nums is rearranged to [1,-1].

#include <bits/stdc++.h>
using namespace std;
// https://youtu.be/h4aBagy4Uok
// see video from starting
vector<int> RearrangebySign(vector<int> A)
{

    int n = A.size();

    // Define array for storing the ans separately.
    vector<int> ans(n, 0);

    // positive elements start from 0 and negative from 1.
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {

        // Fill negative elements in odd indices and inc by 2.
        if (A[i] < 0)
        {
            ans[negIndex] = A[i];
            negIndex += 2;
        }

        // Fill positive elements in even indices and inc by 2.
        else
        {
            ans[posIndex] = A[i];
            posIndex += 2;
        }
    }

    return ans;
}

int main()
{

    // Array Initialisation.

    vector<int> A = {1, 2, -4, -5};

    vector<int> ans = RearrangebySign(A);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
