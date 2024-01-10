// (Easy see code and do dry run  to understand)

// Move all negative numbers to beginning and positive to end

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

#include <iostream>
using namespace std;
// easy do dry run to understand

// Swap Function.
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Using Dutch National Flag Algorithm.
void reArrange(int nums[], int n)
{
    int low = 0, high = n - 1;
    int i = 0, j = n;

    while (i < j)
    {

        if (nums[j] < 0 && nums[i] > 0)
        {

            swap(nums[j], nums[i]);

            i++;

            j--;
        }

        else if (nums[i] < 0)
            i++;

        else
            j--;
    }
}
void displayArray(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
int main()
{
    // Data
    int nums[] = {1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    reArrange(nums, n);
    displayArray(nums, n);
    return 0;
}
