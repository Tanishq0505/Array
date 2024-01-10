// (Easy see code to understand)

// Union of two arrays (GFG)

// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3
// Output:
// 5
// Explanation:
// 1, 2, 3, 4 and 5 are the
// elements which comes in the union set
// of both arrays. So count is 5.

// Approach used
// we used set here to count the no of elements after union
// we use set bcoz
// Set can be used to store unique values in order to avoid duplications of elements present in the set.
// Elements in a set are stored in a sorted fashion which makes it efficient
// Sets can be implemented using a variety of data structures,
// including arrays, linked lists, binary search trees, and hash tables.
#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    int cnt = s.size();
    return cnt;
}

/* Driver program to test above function */
int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Function calling
    int ans = doUnion(arr1, m, arr2, n);
    cout << ans;
    return 0;
}
