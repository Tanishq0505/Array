// Count pairs with given sum {GFG}

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
// https://youtu.be/5L9Jrehvoew
int getPairsCount(int arr[], int n, int k)
{
    // code here
    unordered_map<int, int> umap;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int b = k - arr[i];
        if (umap[b])
            ans += umap[b];
        umap[arr[i]]++;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 5, 7, 1};
    int n = 4;
    int k = 6;
    cout << getPairsCount(arr, n, k);
}