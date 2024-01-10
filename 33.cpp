// Second largest element in array Code studio AND GFG
// See code directly from gfg and code studio

// https://youtu.be/37E9ckMDdTk
// see this video to understand
// TC -O(n)
#include <bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr)
{

    // Write your code here.
    int largest = arr[0];
    int slargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    if (slargest == INT_MIN)
    {
        return -1;
    }
    return slargest;
}
