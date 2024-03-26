// Leet code
// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order,
// and two integers m and n, representing the number of elements in nums1 and nums2
// respectively. Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be stored
// inside the array nums1. To accommodate this, nums1 has a length of m + n, where the
// first m elements denote the elements that should be merged, and the last n elements are
//  set to 0 and should be ignored. nums2 has a length of n.
// Example 1:

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

#include <iostream>
using namespace std;
// https://youtu.be/FyzWXlSMNoI
int main()
{
    int nums1[50], nums2[50];
    int m, n;
    cout << "Enter the size of first array" << endl;
    cin >> m;
    cout << "Enter the size of second array " << endl;
    cin >> n;
    cout << "Enter the elements of first array" << endl;
    for (int q = 0; q <= m + n - 1; q++)
    {
        cin >> nums1[q];
    }
    cout << "Printing first array " << endl;

    for (int t = 0; t < m + n; t++)
    {
        cout << nums1[t] << " " << endl;
    }
    cout << "Enter the elements of second array" << endl;

    for (int w = 0; w < n; w++)
    {
        cin >> nums2[w];
    }
    cout << "Printing second array " << endl;
    for (int y = 0; y < n; y++)
    {
        cout << nums2[y] << " " << endl;
    }
    int i = m - 1, k = (m + n - 1), j = n - 1;
    int o = k;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
    // as we kn1ow that above while loop get over if any one of i and j reaches 0 but it is possible that array are not of same size so some elements get left
    //    so if array  was large than array 2 than to copy first array remaining elements
    while (i >= 0)
    {
        nums1[k] = nums1[i];
        k--;
        i--;
    }
    // so if array 2 was large than array 1 than to copy second array remaining elements
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }
    cout << "Printing sorted array " << endl;
    for (int o = 0; o <= (m + n - 1); o++)
    {
        cout << nums1[o];
    }
    return 0;
}
