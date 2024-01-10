// Sum of Unique Elements(LEET CODE )
// You are given an integer array nums. The unique elements of an array are the
// elements that appear exactly once in the array.
// Return the sum of all the unique elements of nums.
// Example 1:
// Input: nums = [1,2,3,2]
// Output: 4
// Explanation: The unique elements are [1,3], and the sum is 4.

#include <iostream>
using namespace std;

int sumOfUnique(int nums[], int size)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            sum = sum + nums[i];
        }
    }
    return sum;
}
int main()
{
    int size = 5;
    int nums[5] = {1, 2, 3, 4, 5};
    int sumunique = sumOfUnique(nums, size);
    cout << "The sum of the unique element " << sumunique << endl;
}