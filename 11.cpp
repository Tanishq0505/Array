// Search element in sorted and rotated array (Leet code,GFG CODESTUDIO)

#include <iostream>
using namespace std;
// https://youtu.be/Le8bc8aHgBA
// Brute force approach is you can use linear search to search an element
int search(int nums[], int target, int size)
{

    // Binary Search
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && nums[mid] >= target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[end] >= target && nums[mid] <= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int nums[7] = {4, 5, 6, 7, 0, 1, 2};
    int size = 7;
    cout << "Element is at index " << search(nums, 0, 7) << endl;
}